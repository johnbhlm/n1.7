"""CLI entry for H20 deployment."""

from __future__ import annotations

import argparse

from examples.H20.deploy.configs import DeployArgs as Args
from examples.H20.deploy.controller import H20VLA


def parse_cli_args() -> Args:
    parser = argparse.ArgumentParser(description="H20 deployment policy runner")
    parser.add_argument("--host", default=Args.host)
    parser.add_argument("--port", type=int, default=Args.port)
    parser.add_argument("--image-width", type=int, default=Args.resize_size[0])
    parser.add_argument("--image-height", type=int, default=Args.resize_size[1])
    parser.add_argument("--run-mode", default=Args.run_mode, choices=["sync", "async"])
    parser.add_argument("--action-horizon", type=int, default=Args.action_horizon)
    parser.add_argument("--drop-steps", type=int, default=Args.drop_steps)
    parser.add_argument(
        "--enable-action-drop",
        action=argparse.BooleanOptionalAction,
        default=Args.enable_action_drop,
    )
    parser.add_argument("--prefetch-lead-steps", type=int, default=Args.prefetch_lead_steps)
    parser.add_argument("--async-wait-timeout", type=float, default=Args.async_wait_timeout)
    parser.add_argument(
        "--enable-async-fallback",
        action=argparse.BooleanOptionalAction,
        default=Args.enable_async_fallback,
    )
    parser.add_argument("--async-queue-size", type=int, default=Args.async_queue_size)

    parser.add_argument(
        "--chunk-transition-mode",
        default=Args.chunk_transition_mode,
        choices=["none", "blend", "gr00t_rtc"],
        help=(
            "none: plain async replacement; blend: client physical-space blend; "
            "gr00t_rtc: model-side GR00T RTC"
        ),
    )

    parser.add_argument("--blend-overlap-steps", type=int, default=Args.blend_overlap_steps)
    parser.add_argument("--blend-frozen-steps", type=int, default=Args.blend_frozen_steps)
    parser.add_argument("--blend-ramp-rate", type=float, default=Args.blend_ramp_rate)
    parser.add_argument(
        "--blend-debug",
        action=argparse.BooleanOptionalAction,
        default=Args.blend_debug,
    )

    parser.add_argument(
        "--gr00t-rtc-overlap-steps",
        type=int,
        default=Args.gr00t_rtc_overlap_steps,
    )
    parser.add_argument(
        "--gr00t-rtc-frozen-steps",
        type=int,
        default=Args.gr00t_rtc_frozen_steps,
    )
    parser.add_argument(
        "--gr00t-rtc-ramp-rate",
        type=float,
        default=Args.gr00t_rtc_ramp_rate,
    )
    parser.add_argument(
        "--gr00t-rtc-debug",
        action=argparse.BooleanOptionalAction,
        default=Args.gr00t_rtc_debug,
    )
    parser.add_argument(
        "--gr00t-rtc-reset-on-task-start",
        action=argparse.BooleanOptionalAction,
        default=Args.gr00t_rtc_reset_on_task_start,
    )

    parser.add_argument(
        "--enable-intra-chunk-smoothing",
        action=argparse.BooleanOptionalAction,
        default=Args.enable_intra_chunk_smoothing,
        help="Smooth action steps inside each chunk; independent of RTC/blend.",
    )
    parser.add_argument(
        "--intra-chunk-smoothing-method",
        default=Args.intra_chunk_smoothing_method,
        choices=["savgol"],
    )
    parser.add_argument(
        "--intra-chunk-smoothing-window",
        type=int,
        default=Args.intra_chunk_smoothing_window,
    )
    parser.add_argument(
        "--intra-chunk-smoothing-polyorder",
        type=int,
        default=Args.intra_chunk_smoothing_polyorder,
    )
    parser.add_argument(
        "--intra-chunk-smoothing-smooth-gripper",
        action=argparse.BooleanOptionalAction,
        default=Args.intra_chunk_smoothing_smooth_gripper,
    )
    parser.add_argument(
        "--intra-chunk-smoothing-preserve-first",
        action=argparse.BooleanOptionalAction,
        default=Args.intra_chunk_smoothing_preserve_first,
    )
    parser.add_argument(
        "--intra-chunk-smoothing-preserve-last",
        action=argparse.BooleanOptionalAction,
        default=Args.intra_chunk_smoothing_preserve_last,
    )
    parser.add_argument(
        "--intra-chunk-smoothing-debug",
        action=argparse.BooleanOptionalAction,
        default=Args.intra_chunk_smoothing_debug,
    )

    parser.add_argument(
        "--enable-done-flag",
        action=argparse.BooleanOptionalAction,
        default=Args.enable_done_flag,
    )
    parser.add_argument(
        "--enable-inactive-arm-freeze",
        action=argparse.BooleanOptionalAction,
        default=Args.enable_inactive_arm_freeze,
    )
    parser.add_argument("--control-sleep", type=float, default=Args.control_sleep)
    parser.add_argument("--cmd-time", type=float, default=Args.cmd_time)
    parser.add_argument("--done-flag-window", type=int, default=Args.done_flag_window)
    parser.add_argument("--done-arm-threshold", type=float, default=Args.done_arm_threshold)
    parser.add_argument("--gripper-window", type=int, default=Args.gripper_window)
    parser.add_argument("--task-timeout", type=int, default=Args.task_timeout)
    parser.add_argument(
        "--arms-ready-pick-done-count",
        type=int,
        default=Args.arms_ready_pick_done_count,
    )
    parser.add_argument(
        "--arms-ready-place-done-count",
        type=int,
        default=Args.arms_ready_place_done_count,
    )
    parser.add_argument(
        "--enable-pre-align",
        action=argparse.BooleanOptionalAction,
        default=Args.enable_pre_align,
    )
    parser.add_argument("--add-hand", type=float, default=Args.add_hand)

    parsed = parser.parse_args()
    return Args(
        host=parsed.host,
        port=parsed.port,
        resize_size=(parsed.image_width, parsed.image_height),
        run_mode=parsed.run_mode,
        action_horizon=parsed.action_horizon,
        drop_steps=parsed.drop_steps,
        enable_action_drop=parsed.enable_action_drop,
        prefetch_lead_steps=parsed.prefetch_lead_steps,
        async_wait_timeout=parsed.async_wait_timeout,
        enable_async_fallback=parsed.enable_async_fallback,
        async_queue_size=parsed.async_queue_size,
        chunk_transition_mode=parsed.chunk_transition_mode,
        blend_overlap_steps=parsed.blend_overlap_steps,
        blend_frozen_steps=parsed.blend_frozen_steps,
        blend_ramp_rate=parsed.blend_ramp_rate,
        blend_debug=parsed.blend_debug,
        gr00t_rtc_overlap_steps=parsed.gr00t_rtc_overlap_steps,
        gr00t_rtc_frozen_steps=parsed.gr00t_rtc_frozen_steps,
        gr00t_rtc_ramp_rate=parsed.gr00t_rtc_ramp_rate,
        gr00t_rtc_debug=parsed.gr00t_rtc_debug,
        gr00t_rtc_reset_on_task_start=parsed.gr00t_rtc_reset_on_task_start,
        enable_intra_chunk_smoothing=parsed.enable_intra_chunk_smoothing,
        intra_chunk_smoothing_method=parsed.intra_chunk_smoothing_method,
        intra_chunk_smoothing_window=parsed.intra_chunk_smoothing_window,
        intra_chunk_smoothing_polyorder=parsed.intra_chunk_smoothing_polyorder,
        intra_chunk_smoothing_smooth_gripper=(
            parsed.intra_chunk_smoothing_smooth_gripper
        ),
        intra_chunk_smoothing_preserve_first=(
            parsed.intra_chunk_smoothing_preserve_first
        ),
        intra_chunk_smoothing_preserve_last=(
            parsed.intra_chunk_smoothing_preserve_last
        ),
        intra_chunk_smoothing_debug=parsed.intra_chunk_smoothing_debug,
        enable_done_flag=parsed.enable_done_flag,
        enable_inactive_arm_freeze=parsed.enable_inactive_arm_freeze,
        control_sleep=parsed.control_sleep,
        cmd_time=parsed.cmd_time,
        done_flag_window=parsed.done_flag_window,
        done_arm_threshold=parsed.done_arm_threshold,
        gripper_window=parsed.gripper_window,
        task_timeout=parsed.task_timeout,
        arms_ready_pick_done_count=parsed.arms_ready_pick_done_count,
        arms_ready_place_done_count=parsed.arms_ready_place_done_count,
        enable_pre_align=parsed.enable_pre_align,
        add_hand=parsed.add_hand,
    )


def main() -> None:
    args = parse_cli_args()
    H20VLA(args=args).run()


if __name__ == "__main__":
    main()