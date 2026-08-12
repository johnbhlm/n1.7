from __future__ import annotations

from collections import deque
import time

from examples.H20.deploy.utils.async_runtime import AsyncChunkInferenceWorker
from examples.H20.deploy.utils.bezier_utils import build_latency_aware_bezier_chunk
from examples.H20.deploy.utils.blend_utils import apply_action_drop, build_blended_action_chunk
from examples.H20.deploy.utils.intra_chunk_smoothing import smooth_intra_chunk
from examples.H20.robots.groot_h20_interface import GrootH20ModelClient as ModelClient
import numpy as np


def select_action_window(actions, action_horizon: int, drop_steps: int = 0):
    if actions is None or len(actions) == 0:
        return None
    actions = np.asarray(actions, dtype=np.float32)[: int(action_horizon)]
    if drop_steps > 0:
        return apply_action_drop(actions, drop_steps)
    return actions


def infer_action_window(model, example, action_horizon: int, drop_steps: int = 0):
    response = model.step(example)
    raw_actions = None if response is None else response.get("raw_actions")
    return select_action_window(
        raw_actions,
        action_horizon=action_horizon,
        drop_steps=drop_steps,
    )


def do_smooth_intra_chunk(actions, args):
    """Apply chunk-internal smoothing after action selection/drop.

    This helper does not inspect or combine previous chunks. It can therefore
    be enabled in synchronous mode without activating blend or GR00T RTC.
    """
    if actions is None or not bool(getattr(args, "enable_intra_chunk_smoothing", False)):
        return actions

    method = str(getattr(args, "intra_chunk_smoothing_method", "savgol")).strip().lower()
    if method != "savgol":
        raise ValueError(f"Unsupported intra-chunk smoothing method: {method!r}")

    original = np.asarray(actions, dtype=np.float32)
    smoothed = smooth_intra_chunk(
        original,
        window_length=int(getattr(args, "intra_chunk_smoothing_window", 5)),
        polyorder=int(getattr(args, "intra_chunk_smoothing_polyorder", 2)),
        smooth_gripper=bool(getattr(args, "intra_chunk_smoothing_smooth_gripper", False)),
        preserve_first=bool(getattr(args, "intra_chunk_smoothing_preserve_first", True)),
        preserve_last=bool(getattr(args, "intra_chunk_smoothing_preserve_last", True)),
    )

    # if bool(getattr(args, "intra_chunk_smoothing_debug", False)):
    #     before = chunk_smoothness_metrics(original)
    #     after = chunk_smoothness_metrics(smoothed)
    #     print(
    #         "[INTRA_CHUNK_SMOOTH]",
    #         f"steps={len(original)}",
    #         f"window={int(getattr(args, 'intra_chunk_smoothing_window', 5))}",
    #         f"polyorder={int(getattr(args, 'intra_chunk_smoothing_polyorder', 2))}",
    #         "mean|dq|="
    #         f"{before['mean_abs_dq']:.6f}->{after['mean_abs_dq']:.6f}",
    #         "max|ddq|="
    #         f"{before['max_abs_ddq']:.6f}->{after['max_abs_ddq']:.6f}",
    #     )

    return smoothed


class SyncRunner:
    def __init__(self, controller, model, observation_builder, action_executor):
        self.c = controller
        self.model = model
        self.obs = observation_builder
        self.executor = action_executor

    def run(self, current_task: str):
        example = self.obs.build(current_task)
        if example is None:
            time.sleep(0.02)
            return

        actions = infer_action_window(
            self.model,
            example,
            action_horizon=self.c.action_horizon,
            drop_steps=int(getattr(self.c.args, "drop_steps", 0))
            if getattr(self.c.args, "enable_action_drop", False)
            else 0,
        )
        if actions is None:
            return

        actions = do_smooth_intra_chunk(actions, self.c.args)

        for action in actions:
            stop = self.executor.execute_step(
                action,
                current_task,
                self.c.left_gripper_smoother,
                self.c.right_gripper_smoother,
                allow_inactive_arm_freeze=False,
                allow_done_flag=False,
            )
            if stop:
                break


class AsyncRunner:
    """Asynchronous chunk executor with selectable transition strategy.

    ``blend`` performs client-side physical-space blending.
    ``gr00t_rtc`` forwards RTC options to the model server and only performs
    latency-index alignment on the client; it never blends decoded actions.
    """

    def __init__(self, controller, main_model, observation_builder, action_executor):
        self.c = controller
        self.main_model = main_model
        self.obs = observation_builder
        self.executor = action_executor
        self.worker_model = None
        self.worker = None
        self._executed_action_history = deque(maxlen=2)
        self._actual_arm_history = deque(maxlen=2)

    def _transition_mode(self) -> str:
        return str(getattr(self.c.args, "chunk_transition_mode", "none")).lower()

    def _gr00t_rtc_enabled(self) -> bool:
        return self._transition_mode() == "gr00t_rtc"

    def _blend_enabled(self) -> bool:
        return self._transition_mode() == "blend"

    def _latency_bezier_enabled(self) -> bool:
        return self._transition_mode() == "latency_bezier"

    def _reset_transition_history(self) -> None:
        self._executed_action_history.clear()
        self._actual_arm_history.clear()

    def _record_executed_state(self, action) -> None:
        self._executed_action_history.append(np.asarray(action, dtype=np.float32).copy())
        actual = np.concatenate(
            (
                np.asarray(self.c.left_arm_joints, dtype=np.float32),
                np.asarray(self.c.right_arm_joints, dtype=np.float32),
            )
        )
        if actual.shape == (14,) and np.isfinite(actual).all():
            self._actual_arm_history.append(actual.copy())

    def _model_client_kwargs(self) -> dict:
        args = self.c.args
        return {
            "host": args.host,
            "port": args.port,
            "image_size": list(args.resize_size),
            "chunk_transition_mode": (
                "none" if self._latency_bezier_enabled() else self._transition_mode()
            ),
            "action_horizon": int(args.action_horizon),
            "gr00t_rtc_overlap_steps": int(args.gr00t_rtc_overlap_steps),
            "gr00t_rtc_frozen_steps": int(args.gr00t_rtc_frozen_steps),
            "gr00t_rtc_ramp_rate": float(args.gr00t_rtc_ramp_rate),
            "gr00t_rtc_debug": bool(args.gr00t_rtc_debug),
        }

    def _ensure_worker(self):
        if self.worker is not None:
            return
        args = self.c.args
        self.worker_model = ModelClient(**self._model_client_kwargs())
        self.worker = AsyncChunkInferenceWorker(
            self.worker_model,
            wait_timeout=float(getattr(args, "async_wait_timeout", 0.04)),
            queue_size=int(getattr(args, "async_queue_size", 2)),
        )

    def close_worker(self):
        if self.worker is not None:
            self.worker.stop()
            self.worker = None
        if self.worker_model is not None and hasattr(self.worker_model, "close"):
            self.worker_model.close()
            self.worker_model = None

    def _mode_drop_steps(self) -> int:
        if self._latency_bezier_enabled():
            return 0
        if bool(getattr(self.c.args, "enable_action_drop", False)):
            return int(getattr(self.c.args, "drop_steps", 0))
        return 0

    def _transition_overlap(self, chunk_len: int) -> int:
        args = self.c.args
        mode = self._transition_mode()
        if mode == "blend":
            overlap = int(getattr(args, "blend_overlap_steps", 0))
        elif mode == "gr00t_rtc":
            overlap = int(getattr(args, "gr00t_rtc_overlap_steps", 0))
        else:
            overlap = 0
        return min(max(0, overlap), max(0, int(chunk_len)))

    def _prefetch_index(self, chunk_len: int) -> int:
        overlap = self._transition_overlap(chunk_len)
        if overlap > 0:
            # Request after executing this index. The first unexecuted action is
            # then chunk_len - overlap, exactly matching the old chunk tail used
            # by GR00T RTC or by the client-side blend anchor.
            return max(0, chunk_len - overlap - 1)
        lead = int(getattr(self.c.args, "prefetch_lead_steps", 8))
        return max(0, chunk_len - max(1, lead))

    def _prepare_next_actions(
        self,
        *,
        raw_actions,
        current_actions,
        next_start_index: int,
        elapsed_steps: int,
        inference_latency: float,
        request_id: int | None = None,
    ):
        next_actions = select_action_window(
            raw_actions,
            self.c.action_horizon,
            drop_steps=self._mode_drop_steps(),
        )
        if next_actions is None:
            return None

        mode = self._transition_mode()
        elapsed_steps = max(0, int(elapsed_steps))

        if mode == "latency_bezier":
            if elapsed_steps >= len(next_actions) or not self._executed_action_history:
                return None
            history = list(self._executed_action_history)
            actual_history = list(self._actual_arm_history)
            stitched, info = build_latency_aware_bezier_chunk(
                next_actions,
                stale_steps=elapsed_steps,
                previous_executed_action=history[-2] if len(history) >= 2 else None,
                current_executed_action=history[-1],
                previous_actual_arm_state=(
                    actual_history[-2] if len(actual_history) >= 2 else None
                ),
                current_actual_arm_state=(actual_history[-1] if actual_history else None),
                gamma=float(getattr(self.c.args, "bezier_gamma", 0.15)),
                sigma=float(getattr(self.c.args, "bezier_sigma", 0.25)),
                use_actual_state=bool(getattr(self.c.args, "bezier_use_actual_state", True)),
                gripper_dims=tuple(getattr(self.c.args, "bezier_gripper_dims", (7, 15))),
            )
            if bool(getattr(self.c.args, "bezier_debug", False)):
                fields = " ".join(f"{key}={value}" for key, value in info.items())
                print(
                    "[LATENCY_BEZIER]",
                    f"request_id={request_id}",
                    f"model_latency={inference_latency:.4f}s",
                    fields,
                )
            return stitched

        if mode == "gr00t_rtc":
            # GR00T has already fused the old tail into the new normalized chunk
            # on the server. The client must only skip the RTC prefix that was
            # executed while inference was running; blending again would apply a
            # second, incorrect transition in physical action space.
            if elapsed_steps >= len(next_actions):
                if bool(getattr(self.c.args, "gr00t_rtc_debug", False)):
                    print(
                        "[GR00T RTC] stale chunk discarded:",
                        f"elapsed_steps={elapsed_steps}",
                        f"chunk_len={len(next_actions)}",
                        f"latency={inference_latency:.4f}s",
                    )
                return None

            aligned = next_actions[elapsed_steps:].copy()
            if bool(getattr(self.c.args, "gr00t_rtc_debug", False)):
                overlap = self._transition_overlap(len(next_actions))
                print(
                    "[GR00T RTC]",
                    f"new={len(next_actions)}",
                    f"skip={elapsed_steps}",
                    f"remaining={len(aligned)}",
                    f"overlap={overlap}",
                    f"latency={inference_latency:.4f}s",
                )
                if elapsed_steps > overlap:
                    print(
                        "[GR00T RTC][WARN] inference consumed more than the RTC overlap; "
                        "increase gr00t_rtc_overlap_steps or reduce latency."
                    )
            return aligned

        if mode == "blend":
            # The new prediction is anchored to the observation captured at
            # request time. Skip the steps that became stale during inference,
            # then blend it with the still-unexecuted old tail.
            if elapsed_steps >= len(next_actions):
                return None
            aligned_new = next_actions[elapsed_steps:].copy()
            old_remaining = np.asarray(current_actions[next_start_index:], dtype=np.float32)
            args = self.c.args
            fused_actions = build_blended_action_chunk(
                old_remaining=old_remaining,
                new_actions=aligned_new,
                frozen_steps=int(getattr(args, "blend_frozen_steps", 0)),
                overlap_steps=int(getattr(args, "blend_overlap_steps", 0)),
                ramp_rate=float(getattr(args, "blend_ramp_rate", 10.0)),
                gripper_dims=tuple(getattr(args, "blend_gripper_dims", (7, 15))),
            )
            if bool(getattr(args, "blend_debug", False)):
                boundary_jump = None
                if len(old_remaining) > 0 and len(aligned_new) > 0:
                    boundary_jump = float(
                        np.linalg.norm(aligned_new[0, :16] - old_remaining[0, :16])
                    )
                print(
                    "[BLEND]",
                    f"old_remaining={len(old_remaining)}",
                    f"new={len(next_actions)}",
                    f"stale_skip={elapsed_steps}",
                    f"fused={len(fused_actions)}",
                    f"raw_boundary_jump={boundary_jump}",
                    f"latency={inference_latency:.4f}s",
                )
            return fused_actions

        # Preserve the original plain asynchronous replacement behavior.
        return next_actions

    def _reset_model_state(self) -> None:
        if hasattr(self.main_model, "reset"):
            self.main_model.reset()

    def _blocking_recover(self, current_task: str):
        # Once a GR00T RTC result is stale, reset the server-side previous chunk
        # before obtaining a fresh first chunk from the latest observation.
        if self._gr00t_rtc_enabled():
            self._reset_model_state()
        example = self.obs.build(current_task)
        if example is None:
            return None
        return infer_action_window(
            self.main_model,
            example,
            self.c.action_horizon,
            drop_steps=self._mode_drop_steps(),
        )

    def run(self, current_task: str):
        c = self.c
        args = c.args
        enable_async_fallback = bool(getattr(args, "enable_async_fallback", False))
        async_wait_timeout = float(getattr(args, "async_wait_timeout", 0.04))

        self._ensure_worker()
        self._reset_transition_history()
        worker = self.worker

        if self._gr00t_rtc_enabled() and bool(getattr(args, "gr00t_rtc_reset_on_task_start", True)):
            self._reset_model_state()

        example = self.obs.build(current_task)
        if example is None:
            time.sleep(0.02)
            return
        actions = infer_action_window(
            self.main_model,
            example,
            c.action_horizon,
            drop_steps=self._mode_drop_steps(),
        )
        if actions is None:
            time.sleep(0.02)
            return

        actions = do_smooth_intra_chunk(actions, self.c.args)

        task_epoch = worker.start_new_task()
        self.executor.arms_ready_count = 0
        request_id = 0
        pending_request_id = None
        pending_elapsed_steps = 0

        while (
            not c.stop_program
            and c.current_mode == "infer"
            and c._deploy_flag
            and not c._task_done_requested
        ):
            if c.task_switch_flag:
                self.close_worker()
                return

            chunk_len = len(actions)
            if chunk_len == 0:
                recovered = self._blocking_recover(current_task)
                if recovered is None:
                    time.sleep(0.02)
                    return
                actions = recovered
                continue

            prefetch_index = self._prefetch_index(chunk_len)
            switched = False
            prefetch_sent = False

            for i, action in enumerate(actions):
                if c.task_switch_flag:
                    self.close_worker()
                    return

                request_was_pending = pending_request_id is not None
                stop = self.executor.execute_step(
                    action,
                    current_task,
                    c.left_gripper_smoother,
                    c.right_gripper_smoother,
                    allow_inactive_arm_freeze=bool(
                        getattr(args, "enable_inactive_arm_freeze", False)
                    ),
                    allow_done_flag=bool(getattr(args, "enable_done_flag", False)),
                )
                if stop:
                    self.close_worker()
                    return

                self._record_executed_state(action)

                if request_was_pending:
                    pending_elapsed_steps += 1

                if not prefetch_sent and pending_request_id is None and i >= prefetch_index:
                    next_example = self.obs.build(current_task)
                    if next_example is not None:
                        request_id += 1
                        if worker.request(next_example, request_id, task_epoch):
                            pending_request_id = request_id
                            pending_elapsed_steps = 0
                            prefetch_sent = True

                if pending_request_id is not None:
                    hit = worker.get_latest_matching_request(pending_request_id, task_epoch)
                    if hit is not None:
                        _, got, latency = hit
                        next_actions = self._prepare_next_actions(
                            raw_actions=got,
                            current_actions=actions,
                            next_start_index=i + 1,
                            elapsed_steps=pending_elapsed_steps,
                            inference_latency=latency,
                            request_id=pending_request_id,
                        )
                        pending_request_id = None
                        pending_elapsed_steps = 0
                        prefetch_sent = False

                        if next_actions is None:
                            next_actions = self._blocking_recover(current_task)
                        if next_actions is not None:
                            # actions = next_actions
                            actions = do_smooth_intra_chunk(next_actions, self.c.args)
                            switched = True
                            break

            if switched:
                continue

            # The current chunk is exhausted. Wait without replaying it.
            if pending_request_id is not None:
                while pending_request_id is not None:
                    if c.task_switch_flag or c.stop_program or not c._deploy_flag:
                        self.close_worker()
                        return
                    try:
                        _, got, latency = worker.get_blocking_for_request(
                            pending_request_id,
                            task_epoch,
                            async_wait_timeout,
                        )
                    except Exception:
                        if enable_async_fallback:
                            pending_request_id = None
                            pending_elapsed_steps = 0
                            break
                        time.sleep(0.005)
                        continue

                    next_actions = self._prepare_next_actions(
                        raw_actions=got,
                        current_actions=actions,
                        next_start_index=len(actions),
                        elapsed_steps=pending_elapsed_steps,
                        inference_latency=latency,
                        request_id=pending_request_id,
                    )
                    pending_request_id = None
                    pending_elapsed_steps = 0
                    if next_actions is not None:
                        # actions = next_actions
                        actions = do_smooth_intra_chunk(next_actions, self.c.args)
                        switched = True
                    break

                if switched:
                    continue

            recovered = self._blocking_recover(current_task)
            if recovered is None:
                time.sleep(0.02)
                continue
            # actions = recovered
            actions = do_smooth_intra_chunk(recovered, self.c.args)
