from __future__ import annotations

from collections.abc import Iterable

import numpy as np


def apply_action_drop(actions, drop_steps: int):
    actions = np.asarray(actions)
    drop_steps = int(max(0, drop_steps))
    if actions.ndim != 2 or drop_steps <= 0:
        return actions
    if drop_steps >= len(actions):
        return actions[-1:].copy()
    return actions[drop_steps:].copy()


def _exp_ramp(length: int, ramp_rate: float, *, dtype=np.float32) -> np.ndarray:
    """Return monotonically increasing RTC blend weights in (0, 1].

    This mirrors the GR00T-N1.7 RTC idea: keep frozen steps unchanged, then
    gradually release the overlap window with an exponential ramp.
    """
    if length <= 0:
        return np.empty((0, 1), dtype=dtype)
    ramp_rate = float(max(ramp_rate, 1e-6))
    # Include the 0 and 1 endpoints, then drop them so the first blend step is
    # still close to the old trajectory and the last one is close to the new one.
    t = np.linspace(0.0, 1.0, length + 2, dtype=dtype)
    ramp = 1.0 - np.exp(-ramp_rate * t)
    denom = max(float(ramp[-1]), 1e-8)
    ramp = ramp / denom
    return ramp[1:-1].reshape(-1, 1).astype(dtype, copy=False)


def build_rtc_action_chunk(
    old_remaining,
    new_actions,
    frozen_steps: int,
    overlap_steps: int,
    ramp_rate: float,
    gripper_dims: Iterable[int] = (),
):
    """Fuse a new predicted action chunk with the unexecuted old chunk tail.

    Args:
        old_remaining: Unexecuted tail of the currently executing chunk,
            shape [T_old, action_dim]. These commands are temporally closest to
            the robot's current state and are used as the RTC overlap anchor.
        new_actions: Newly predicted chunk, shape [T_new, action_dim].
        frozen_steps: Number of overlap steps copied exactly from old_remaining.
            This should roughly cover inference / communication latency.
        overlap_steps: Total number of old/new aligned steps used by RTC,
            including frozen_steps.
        ramp_rate: Exponential ramp rate for the non-frozen overlap region.
        gripper_dims: Dimensions that should not be numerically blended. The
            gripper smoother / threshold logic handles these separately.

    Returns:
        A fused chunk that starts with the still-valid old tail and gradually
        transitions into the new prediction. If shapes are incompatible, returns
        a copy of new_actions.
    """
    old_remaining = np.asarray(old_remaining, dtype=np.float32)
    new_actions = np.asarray(new_actions, dtype=np.float32)

    if old_remaining.ndim != 2 or new_actions.ndim != 2:
        return new_actions.copy()
    if old_remaining.shape[1] != new_actions.shape[1]:
        return new_actions.copy()
    if len(new_actions) == 0:
        return old_remaining.copy()
    if len(old_remaining) == 0:
        return new_actions.copy()

    overlap_steps = int(max(0, overlap_steps))
    if overlap_steps <= 0:
        return new_actions.copy()

    overlap_len = min(overlap_steps, len(old_remaining), len(new_actions))
    frozen_steps = min(max(0, int(frozen_steps)), overlap_len)

    pieces: list[np.ndarray] = []
    if frozen_steps > 0:
        # The latency/frozen window remains exactly the previous command tail.
        pieces.append(old_remaining[:frozen_steps].copy())

    blend_len = overlap_len - frozen_steps
    if blend_len > 0:
        old_blend = old_remaining[frozen_steps:overlap_len]
        # Important: align by time index. new_actions[:frozen_steps] is replaced
        # by frozen old commands, so the blend compares old[k] with new[k].
        new_blend = new_actions[frozen_steps:overlap_len].copy()
        weights = _exp_ramp(blend_len, ramp_rate).astype(new_blend.dtype, copy=False)

        skip = {int(i) for i in gripper_dims}
        action_dim = new_actions.shape[1]
        blend_dims = [i for i in range(action_dim) if i not in skip]
        if blend_dims:
            new_blend[:, blend_dims] = (
                (1.0 - weights) * old_blend[:, blend_dims]
                + weights * new_blend[:, blend_dims]
            )
        pieces.append(new_blend)

    if overlap_len < len(new_actions):
        pieces.append(new_actions[overlap_len:].copy())

    if not pieces:
        return new_actions.copy()
    return np.concatenate(pieces, axis=0)
