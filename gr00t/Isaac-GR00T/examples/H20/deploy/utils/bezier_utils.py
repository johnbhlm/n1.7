"""Pure NumPy latency-aware Bézier action-chunk stitching."""

from __future__ import annotations

import numpy as np


LEFT_ARM = slice(0, 7)
RIGHT_ARM = slice(8, 15)


def _safe_normalize(vector, fallback=None, eps: float = 1e-8) -> np.ndarray:
    vector = np.asarray(vector, dtype=np.float32)
    norm = float(np.linalg.norm(vector))
    if np.isfinite(norm) and norm >= eps:
        return vector / norm
    if fallback is not None:
        fallback = np.asarray(fallback, dtype=np.float32)
        fallback_norm = float(np.linalg.norm(fallback))
        if np.isfinite(fallback_norm) and fallback_norm >= eps:
            return fallback / fallback_norm
    return np.zeros_like(vector)


def build_latency_aware_bezier_chunk(
    new_actions: np.ndarray,
    *,
    stale_steps: int,
    previous_executed_action: np.ndarray | None,
    current_executed_action: np.ndarray,
    previous_actual_arm_state: np.ndarray | None,
    current_actual_arm_state: np.ndarray | None,
    gamma: float,
    sigma: float,
    use_actual_state: bool = True,
    gripper_dims: tuple[int, ...] = (7, 15),
):
    """Discard stale actions and replace the prefix through a future landing point."""
    actions = np.asarray(new_actions, dtype=np.float32)
    stale_steps = max(0, int(stale_steps))
    info = {"stale_steps": stale_steps, "raw_chunk_len": len(actions)}
    if actions.ndim != 2 or stale_steps >= len(actions):
        return None, info
    aligned = actions[stale_steps:]
    retained_len = len(aligned)
    info["retained_len"] = retained_len
    if retained_len < 3:
        return None, info

    current_command = np.asarray(current_executed_action, dtype=np.float32)
    previous_command = (
        None
        if previous_executed_action is None
        else np.asarray(previous_executed_action, dtype=np.float32)
    )
    actual_valid = (
        use_actual_state
        and previous_actual_arm_state is not None
        and current_actual_arm_state is not None
        and np.asarray(previous_actual_arm_state).shape == (14,)
        and np.asarray(current_actual_arm_state).shape == (14,)
    )
    previous_actual = (
        np.asarray(previous_actual_arm_state, dtype=np.float32) if actual_valid else None
    )
    current_actual = (
        np.asarray(current_actual_arm_state, dtype=np.float32) if actual_valid else None
    )

    landing = int(np.floor(float(gamma) * retained_len))
    landing = int(np.clip(landing, 1, retained_len - 2))
    bridge_steps = landing + 1
    u_values = np.linspace(0.0, 1.0, bridge_steps + 1, dtype=np.float32)[1:]
    bridge = aligned[:bridge_steps].copy()

    for action_slice, actual_slice in ((LEFT_ARM, slice(0, 7)), (RIGHT_ARM, slice(7, 14))):
        if actual_valid:
            hist_prev = previous_actual[actual_slice]
            p0 = current_actual[actual_slice]
        else:
            p0 = current_command[action_slice]
            hist_prev = p0 if previous_command is None else previous_command[action_slice]
        p3 = aligned[landing, action_slice]
        direct = p3 - p0
        d_hist = _safe_normalize(p0 - hist_prev, fallback=direct)
        future_delta = aligned[landing + 1, action_slice] - aligned[landing - 1, action_slice]
        d_future = _safe_normalize(future_delta, fallback=direct)
        lam = float(sigma) * float(np.linalg.norm(direct))
        p1 = p0 + lam * d_hist
        p2 = p3 - lam * d_future
        u = u_values[:, None]
        bridge[:, action_slice] = (
            (1.0 - u) ** 3 * p0
            + 3.0 * (1.0 - u) ** 2 * u * p1
            + 3.0 * (1.0 - u) * u**2 * p2
            + u**3 * p3
        )

    for gripper_dim in gripper_dims:
        if 0 <= gripper_dim < actions.shape[1]:
            bridge[:, gripper_dim] = np.linspace(
                current_command[gripper_dim],
                aligned[landing, gripper_dim],
                bridge_steps + 1,
                dtype=np.float32,
            )[1:]

    stitched = np.concatenate((bridge, aligned[landing + 1 :]), axis=0)
    arm_dims = np.r_[0:7, 8:15]
    current_arm = current_actual if actual_valid else current_command[arm_dims]
    info.update(
        landing_relative=landing,
        landing_raw=stale_steps + landing,
        bridge_steps=bridge_steps,
        output_len=len(stitched),
        using_actual_state=actual_valid,
        raw_boundary_jump=float(np.linalg.norm(aligned[0, arm_dims] - current_arm)),
        stitched_boundary_jump=float(np.linalg.norm(stitched[0, arm_dims] - current_arm)),
    )
    return stitched, info
