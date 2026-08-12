from __future__ import annotations

import dataclasses
import warnings


@dataclasses.dataclass
class DeployArgs:
    """CLI / runtime configuration for H20 keyboard deployment."""

    # # abs model
    # host: str = "10.8.26.6"
    # port: int = 5555
    # resize_size: tuple[int, int] = (224, 224)
    # enable_inactive_arm_freeze: bool = False

    # # Execution architecture:
    # #   sync  -> blocking inference, then execute a chunk
    # #   async -> execute the current chunk while prefetching the next chunk
    # run_mode: str = "async" # sync  async
    # action_horizon: int = 32#16#24#16 #24 #16# not use rtc:24 20 16
    # drop_steps: int = 6#10#not use rtc: 10 8 12
    # enable_action_drop: bool = True
    # prefetch_lead_steps: int =6#6 #24 #24#16#16 #14
    # async_wait_timeout: float = 0.2
    # enable_async_fallback: bool = False
    # async_queue_size: int = 2

    # # Smooth model steps inside each decoded action chunk. This is independent
    # # of cross-chunk transition handling (none/blend/gr00t_rtc) and can first be
    # # tested with run_mode="sync" and chunk_transition_mode="none".
    # enable_intra_chunk_smoothing: bool = True
    # intra_chunk_smoothing_method: str = "savgol"
    # intra_chunk_smoothing_window: int = 7
    # intra_chunk_smoothing_polyorder: int = 2
    # intra_chunk_smoothing_smooth_gripper: bool = False
    # intra_chunk_smoothing_preserve_first: bool = True
    # intra_chunk_smoothing_preserve_last: bool = True
    # intra_chunk_smoothing_debug: bool = False

    # # Chunk transition strategy used by AsyncRunner:
    # #   none       -> original asynchronous chunk replacement
    # #   blend      -> client-side blending in decoded/physical action space
    # #   gr00t_rtc  -> GR00T model-side RTC in normalized action space
    # chunk_transition_mode: str = "blend"

    # # Client-side blend parameters. This is not GR00T RTC.
    # blend_overlap_steps: int = 6
    # blend_frozen_steps: int = 2
    # blend_ramp_rate: float = 1.0
    # blend_gripper_dims: tuple[int, ...] = (7, 15)
    # blend_debug: bool = False

    # # GR00T RTC options forwarded to PolicyClient.get_action(..., options=...).
    # # The server-side Gr00tPolicy must preserve the previous normalized action
    # # chunk and pass these options into model.get_action().
    # gr00t_rtc_overlap_steps: int = 8
    # gr00t_rtc_frozen_steps: int = 2
    # gr00t_rtc_ramp_rate: float = 1.0
    # gr00t_rtc_debug: bool = False
    # gr00t_rtc_reset_on_task_start: bool = True

    # control_dt: float = 0.01
    # control_sleep: float = 0.04
    # cmd_time: float = 0.15

    # enable_done_flag: bool = False
    # debug_timing: bool = False
    # done_flag_window: int = 3
    # done_arm_threshold: float = 0.75
    # gripper_window: int = 1
    # task_timeout: int = 60
    # arms_ready_pick_done_count: int = 80
    # arms_ready_place_done_count: int = 30
    # enable_pre_align: bool = False
    # add_hand: float = 0.9

    # DiT model
    host: str = "10.8.26.6"
    port: int = 5555
    resize_size: tuple[int, int] = (224, 224)
    enable_inactive_arm_freeze: bool = False

    # Execution architecture:
    #   sync  -> blocking inference, then execute a chunk
    #   async -> execute the current chunk while prefetching the next chunk
    run_mode: str = "async"  # sync  async
    action_horizon: int = 32  # 16#24#16 #24 #16# not use rtc:24 20 16
    drop_steps: int = 6  # 10#not use rtc: 10 8 12
    enable_action_drop: bool = True
    prefetch_lead_steps: int = 6  # 6 #24 #24#16#16 #14
    async_wait_timeout: float = 0.2
    enable_async_fallback: bool = False
    async_queue_size: int = 2

    # Smooth model steps inside each decoded action chunk. This is independent
    # of cross-chunk transition handling and can first be
    # tested with run_mode="sync" and chunk_transition_mode="none".
    enable_intra_chunk_smoothing: bool = True
    intra_chunk_smoothing_method: str = "savgol"
    intra_chunk_smoothing_window: int = 7
    intra_chunk_smoothing_polyorder: int = 2
    intra_chunk_smoothing_smooth_gripper: bool = False
    intra_chunk_smoothing_preserve_first: bool = True
    intra_chunk_smoothing_preserve_last: bool = True
    intra_chunk_smoothing_debug: bool = False

    # Chunk transition strategy used by AsyncRunner:
    #   none       -> original asynchronous chunk replacement
    #   blend      -> client-side blending in decoded/physical action space
    #   gr00t_rtc  -> GR00T model-side RTC in normalized action space
    chunk_transition_mode: str = "blend"

    # Client-side blend parameters. This is not GR00T RTC.
    blend_overlap_steps: int = 6
    blend_frozen_steps: int = 2
    blend_ramp_rate: float = 1.0
    blend_gripper_dims: tuple[int, ...] = (7, 15)
    blend_debug: bool = False

    # Latency-aware Bézier chunk stitching.
    bezier_gamma: float = 0.15
    bezier_sigma: float = 0.25
    bezier_gripper_dims: tuple[int, ...] = (7, 15)
    bezier_debug: bool = False
    bezier_use_actual_state: bool = True

    # GR00T RTC options forwarded to PolicyClient.get_action(..., options=...).
    # The server-side Gr00tPolicy must preserve the previous normalized action
    # chunk and pass these options into model.get_action().
    gr00t_rtc_overlap_steps: int = 8
    gr00t_rtc_frozen_steps: int = 2
    gr00t_rtc_ramp_rate: float = 1.0
    gr00t_rtc_debug: bool = False
    gr00t_rtc_reset_on_task_start: bool = True

    control_dt: float = 0.01
    control_sleep: float = 0.04
    cmd_time: float = 0.15

    enable_done_flag: bool = False
    debug_timing: bool = False
    done_flag_window: int = 3
    done_arm_threshold: float = 0.75
    gripper_window: int = 1
    task_timeout: int = 60
    arms_ready_pick_done_count: int = 80
    arms_ready_place_done_count: int = 30
    enable_pre_align: bool = False
    add_hand: float = 0.9

    def __post_init__(self) -> None:
        self.run_mode = str(self.run_mode).strip().lower()
        self.chunk_transition_mode = str(self.chunk_transition_mode).strip().lower()
        self.intra_chunk_smoothing_method = str(self.intra_chunk_smoothing_method).strip().lower()

        if self.run_mode not in {"sync", "async"}:
            raise ValueError(f"Unsupported run_mode={self.run_mode!r}; expected 'sync' or 'async'.")
        if self.chunk_transition_mode not in {"none", "blend", "gr00t_rtc", "latency_bezier"}:
            raise ValueError(
                "Unsupported chunk_transition_mode="
                f"{self.chunk_transition_mode!r}; expected none/blend/gr00t_rtc/latency_bezier."
            )
        if self.run_mode != "async" and self.chunk_transition_mode != "none":
            raise ValueError(
                f"chunk_transition_mode={self.chunk_transition_mode!r} requires run_mode='async'."
            )
        if self.action_horizon <= 0:
            raise ValueError("action_horizon must be positive.")
        if self.async_queue_size <= 0:
            raise ValueError("async_queue_size must be positive.")
        if not 0.0 <= self.bezier_gamma < 1.0:
            raise ValueError("bezier_gamma must satisfy 0.0 <= bezier_gamma < 1.0.")
        if self.bezier_sigma < 0.0:
            raise ValueError("bezier_sigma must be >= 0.0.")

        if self.intra_chunk_smoothing_method not in {"savgol"}:
            raise ValueError(
                "Unsupported intra_chunk_smoothing_method="
                f"{self.intra_chunk_smoothing_method!r}; expected 'savgol'."
            )
        if self.intra_chunk_smoothing_window < 3:
            raise ValueError("intra_chunk_smoothing_window must be >= 3.")
        if self.intra_chunk_smoothing_window % 2 == 0:
            raise ValueError("intra_chunk_smoothing_window must be odd.")
        if self.intra_chunk_smoothing_polyorder < 0:
            raise ValueError("intra_chunk_smoothing_polyorder must be >= 0.")
        if self.intra_chunk_smoothing_polyorder >= self.intra_chunk_smoothing_window:
            raise ValueError(
                "intra_chunk_smoothing_polyorder must be smaller than intra_chunk_smoothing_window."
            )

        self._validate_transition_window(
            name="blend",
            overlap=self.blend_overlap_steps,
            frozen=self.blend_frozen_steps,
        )
        self._validate_transition_window(
            name="gr00t_rtc",
            overlap=self.gr00t_rtc_overlap_steps,
            frozen=self.gr00t_rtc_frozen_steps,
        )

        if (
            self.chunk_transition_mode == "gr00t_rtc"
            and self.enable_action_drop
            and self.drop_steps > 0
        ):
            raise ValueError(
                "GR00T RTC must keep the model chunk indices intact; disable action drop "
                "or set drop_steps=0."
            )

        if (
            self.chunk_transition_mode == "latency_bezier"
            and self.enable_action_drop
            and self.drop_steps > 0
        ):
            warnings.warn(
                "fixed drop_steps is ignored in latency_bezier mode; dynamic "
                "pending_elapsed_steps is used instead.",
                RuntimeWarning,
                stacklevel=2,
            )

        if self.chunk_transition_mode == "gr00t_rtc" and self.action_horizon < 32:
            warnings.warn(
                "GR00T RTC is normally used with action_horizon >= 32; "
                f"current action_horizon={self.action_horizon}.",
                RuntimeWarning,
                stacklevel=2,
            )

    def _validate_transition_window(self, *, name: str, overlap: int, frozen: int) -> None:
        overlap = int(overlap)
        frozen = int(frozen)
        if overlap < 0:
            raise ValueError(f"{name}_overlap_steps must be >= 0.")
        if frozen < 0:
            raise ValueError(f"{name}_frozen_steps must be >= 0.")
        if frozen > overlap:
            raise ValueError(
                f"{name}_frozen_steps ({frozen}) must be <= {name}_overlap_steps ({overlap})."
            )
        if overlap > self.action_horizon:
            raise ValueError(
                f"{name}_overlap_steps ({overlap}) must be <= action_horizon "
                f"({self.action_horizon})."
            )
