from __future__ import annotations

from typing import Any

from gr00t.policy.server_client import PolicyClient
import numpy as np


class GrootH20ModelClient:
    """GR00T policy client wrapper for H20 real-robot deployment.

    The wrapper always returns decoded absolute targets in the StarVLA-compatible
    format ``{"raw_actions": np.ndarray[T, 16], "info": dict}``.

    When ``chunk_transition_mode == "gr00t_rtc"``, RTC options are forwarded to
    the server. The server must implement GR00T RTC inside ``Gr00tPolicy`` using
    the previous *normalized* action chunk.
    """

    def __init__(
        self,
        host: str,
        port: int,
        image_size=(224, 224),
        *,
        timeout_ms: int = 15000,
        chunk_transition_mode: str = "none",
        action_horizon: int = 16,
        gr00t_rtc_overlap_steps: int = 8,
        gr00t_rtc_frozen_steps: int = 4,
        gr00t_rtc_ramp_rate: float = 10.0,
        gr00t_rtc_debug: bool = False,
        **kwargs,
    ):
        del kwargs
        self.host = host
        self.port = int(port)
        self.image_size = tuple(image_size)
        self.chunk_transition_mode = str(chunk_transition_mode).strip().lower()
        self.action_horizon = int(action_horizon)
        self.gr00t_rtc_overlap_steps = int(gr00t_rtc_overlap_steps)
        self.gr00t_rtc_frozen_steps = int(gr00t_rtc_frozen_steps)
        self.gr00t_rtc_ramp_rate = float(gr00t_rtc_ramp_rate)
        self.gr00t_rtc_debug = bool(gr00t_rtc_debug)

        if self.chunk_transition_mode not in {"none", "blend", "gr00t_rtc"}:
            raise ValueError(
                f"Unsupported chunk_transition_mode={self.chunk_transition_mode!r}."
            )
        if not (
            0
            <= self.gr00t_rtc_frozen_steps
            <= self.gr00t_rtc_overlap_steps
            <= self.action_horizon
        ):
            raise ValueError(
                "GR00T RTC requires 0 <= frozen_steps <= overlap_steps <= action_horizon."
            )

        self.client = PolicyClient(
            host=self.host,
            port=self.port,
            timeout_ms=int(timeout_ms),
            strict=False,
        )

        if not self.client.ping():
            raise RuntimeError(
                f"Cannot connect to GR00T PolicyServer at {self.host}:{self.port}"
            )
        print(f"[GrootH20ModelClient] connected to GR00T server {self.host}:{self.port}")

    @property
    def gr00t_rtc_enabled(self) -> bool:
        return self.chunk_transition_mode == "gr00t_rtc"

    def _get_inference_options(self) -> dict[str, Any] | None:
        if not self.gr00t_rtc_enabled:
            return None
        return {
            "use_rtc": True,
            "action_horizon": self.action_horizon,
            "rtc_overlap_steps": self.gr00t_rtc_overlap_steps,
            "rtc_frozen_steps": self.gr00t_rtc_frozen_steps,
            "rtc_ramp_rate": self.gr00t_rtc_ramp_rate,
        }

    def reset(self) -> dict[str, Any]:
        """Reset server-side policy state, including the previous RTC chunk."""
        return self.client.reset(options={"reset_gr00t_rtc": True})

    def close(self) -> None:
        if hasattr(self.client, "close"):
            self.client.close()

    def _prepare_image(self, img: np.ndarray) -> np.ndarray:
        img = np.asarray(img)
        if img.ndim != 3 or img.shape[-1] != 3:
            raise ValueError(f"Expected HWC image with 3 channels, got shape={img.shape}")
        if img.dtype != np.uint8:
            img = np.clip(img, 0, 255).astype(np.uint8)
        return img.copy()

    def _split_state(self, state: np.ndarray):
        state = np.asarray(state, dtype=np.float32).reshape(-1)

        if state.shape[0] == 16:
            left_arm = state[0:7]
            left_gripper = state[7:8]
            right_arm = state[8:15]
            right_gripper = state[15:16]
        elif state.shape[0] == 14:
            left_arm = state[0:7]
            right_arm = state[7:14]
            left_gripper = np.zeros((1,), dtype=np.float32)
            right_gripper = np.zeros((1,), dtype=np.float32)
        else:
            raise ValueError(f"Unexpected H20 state dim={state.shape[0]}, expected 14 or 16")

        return left_arm, left_gripper, right_arm, right_gripper

    def _build_obs(self, example: dict) -> dict:
        if example is None:
            raise ValueError("example is None")
        if "image" not in example or len(example["image"]) != 3:
            raise ValueError("example['image'] must be [img_top, img_left, img_right]")
        if "state" not in example:
            raise ValueError("example must contain 'state'")
        if "lang" not in example:
            raise ValueError("example must contain 'lang'")

        img_top, img_left, img_right = example["image"]
        img_top = self._prepare_image(img_top)
        img_left = self._prepare_image(img_left)
        img_right = self._prepare_image(img_right)

        left_arm, left_gripper, right_arm, right_gripper = self._split_state(example["state"])
        task = str(example["lang"])

        return {
            "video": {
                "primary_image": img_top[None, None, ...],
                "left_camera_image": img_left[None, None, ...],
                "right_camera_image": img_right[None, None, ...],
            },
            "state": {
                "left_observation_state": left_arm[None, None, :],
                "right_observation_state": right_arm[None, None, :],
                "left_gripper_state": left_gripper[None, None, :],
                "right_gripper_state": right_gripper[None, None, :],
            },
            "language": {
                "annotation.human.action.task_description": [[task]],
            },
        }

    def _convert_action(self, action: dict) -> np.ndarray:
        required = [
            "left_joint_action",
            "left_gripper",
            "right_joint_action",
            "right_gripper",
        ]
        missing = [key for key in required if key not in action]
        if missing:
            raise KeyError(
                f"Missing GR00T action keys: {missing}; available={list(action.keys())}"
            )

        left = np.asarray(action["left_joint_action"], dtype=np.float32)
        left_gripper = np.asarray(action["left_gripper"], dtype=np.float32)
        right = np.asarray(action["right_joint_action"], dtype=np.float32)
        right_gripper = np.asarray(action["right_gripper"], dtype=np.float32)

        if left.ndim != 3 or left.shape[-1] != 7:
            raise ValueError(f"Bad left_joint_action shape: {left.shape}")
        if right.ndim != 3 or right.shape[-1] != 7:
            raise ValueError(f"Bad right_joint_action shape: {right.shape}")
        if left_gripper.ndim != 3 or left_gripper.shape[-1] != 1:
            raise ValueError(f"Bad left_gripper shape: {left_gripper.shape}")
        if right_gripper.ndim != 3 or right_gripper.shape[-1] != 1:
            raise ValueError(f"Bad right_gripper shape: {right_gripper.shape}")

        left = left[0]
        left_gripper = left_gripper[0]
        right = right[0]
        right_gripper = right_gripper[0]

        horizon = min(
            left.shape[0],
            left_gripper.shape[0],
            right.shape[0],
            right_gripper.shape[0],
        )

        raw_actions = np.zeros((horizon, 16), dtype=np.float32)
        raw_actions[:, 0:7] = left[:horizon]
        raw_actions[:, 7:8] = left_gripper[:horizon]
        raw_actions[:, 8:15] = right[:horizon]
        raw_actions[:, 15:16] = right_gripper[:horizon]

        if not np.all(np.isfinite(raw_actions)):
            raise ValueError(f"GR00T returned NaN/Inf raw_actions: {raw_actions}")
        return raw_actions

    def step(
        self,
        example: dict,
        step: int = 0,
        *,
        inference_options: dict[str, Any] | None = None,
        **kwargs,
    ) -> dict:
        del step, kwargs
        obs = self._build_obs(example)
        options = self._get_inference_options() if inference_options is None else inference_options
        action, info = self.client.get_action(obs, options=options)
        raw_actions = self._convert_action(action)

        info = {} if info is None else dict(info)
        info["action_semantics"] = "absolute_target_from_gr00t_policy_server"
        info["do_not_add_current_state_again"] = True
        info["chunk_transition_mode"] = self.chunk_transition_mode
        if self.gr00t_rtc_enabled:
            info["gr00t_rtc_options"] = dict(options or {})
            if self.gr00t_rtc_debug:
                print(
                    "[GR00T RTC request]",
                    f"horizon={self.action_horizon}",
                    f"overlap={self.gr00t_rtc_overlap_steps}",
                    f"frozen={self.gr00t_rtc_frozen_steps}",
                    f"ramp={self.gr00t_rtc_ramp_rate}",
                )

        return {"raw_actions": raw_actions, "info": info}


ModelClient = GrootH20ModelClient