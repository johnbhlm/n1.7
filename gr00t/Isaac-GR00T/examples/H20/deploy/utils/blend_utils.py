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


def _exp_blend_ramp(length: int, ramp_rate: float, *, dtype=np.float32) -> np.ndarray:
    """Return monotonically increasing client-side blend weights in (0, 1)."""
    if length <= 0:
        return np.empty((0, 1), dtype=dtype)
    ramp_rate = float(max(ramp_rate, 1e-6))
    t = np.linspace(0.0, 1.0, length + 2, dtype=dtype)
    ramp = 1.0 - np.exp(-ramp_rate * t)
    ramp = ramp / max(float(ramp[-1]), 1e-8)
    return ramp[1:-1].reshape(-1, 1).astype(dtype, copy=False)


def build_blended_action_chunk(
    old_remaining,
    new_actions,
    frozen_steps: int,
    overlap_steps: int,
    ramp_rate: float,
    gripper_dims: Iterable[int] = (),
):
    """Blend decoded action chunks on the robot client.

    This function operates in physical/decoded action space. It is deliberately
    named ``blend`` and must not be confused with GR00T model-side RTC, which is
    performed inside the flow-matching action head in normalized action space.
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
        pieces.append(old_remaining[:frozen_steps].copy())

    blend_len = overlap_len - frozen_steps
    if blend_len > 0:
        old_blend = old_remaining[frozen_steps:overlap_len]
        new_blend = new_actions[frozen_steps:overlap_len].copy()
        weights = _exp_blend_ramp(blend_len, ramp_rate).astype(new_blend.dtype, copy=False)

        skip = {int(i) for i in gripper_dims}
        blend_dims = [i for i in range(new_actions.shape[1]) if i not in skip]
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