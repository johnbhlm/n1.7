from __future__ import annotations

from collections.abc import Iterable

import numpy as np


DEFAULT_GRIPPER_DIMS = (7, 15)


def _resolve_smoothing_dims(
    action_dim: int,
    *,
    smooth_gripper: bool,
    gripper_dims: Iterable[int],
) -> np.ndarray:
    """Return action dimensions that should be smoothed."""
    excluded = set()
    if not smooth_gripper:
        excluded = {int(index) for index in gripper_dims}

    dims = [index for index in range(int(action_dim)) if index not in excluded]
    return np.asarray(dims, dtype=np.int64)


def _effective_window(length: int, window_length: int, polyorder: int) -> int:
    """Choose the largest valid odd window no greater than the segment length."""
    length = int(length)
    window = min(max(int(window_length), 1), length)
    if window % 2 == 0:
        window -= 1

    minimum = int(polyorder) + 1
    if minimum % 2 == 0:
        minimum += 1

    if window < minimum:
        return 0
    return window


def _local_polynomial_smooth(
    values: np.ndarray,
    *,
    window_length: int,
    polyorder: int,
) -> np.ndarray:
    """Smooth ``values[T, D]`` using edge-aware local polynomial fitting.

    This is a small NumPy-only Savitzky-Golay equivalent. For each timestep it
    fits a polynomial to a contiguous local window and evaluates that
    polynomial at the current timestep. Chunk sizes in deployment are small
    (normally 16-40), so the edge-aware least-squares implementation is fast
    enough and avoids adding a SciPy runtime dependency.
    """
    values = np.asarray(values, dtype=np.float64)
    if values.ndim != 2:
        raise ValueError(f"Expected values with shape [T, D], got {values.shape}")

    length = values.shape[0]
    window = _effective_window(length, window_length, polyorder)
    if window == 0:
        return values.copy()

    half = window // 2
    smoothed = np.empty_like(values)

    for index in range(length):
        start = index - half
        start = min(max(start, 0), length - window)
        stop = start + window

        # Coordinates are relative to the point being estimated. Evaluating
        # the fitted polynomial at x=0 gives the constant coefficient.
        x = np.arange(start, stop, dtype=np.float64) - float(index)
        design = np.vander(x, N=int(polyorder) + 1, increasing=True)
        coefficients, *_ = np.linalg.lstsq(design, values[start:stop], rcond=None)
        smoothed[index] = coefficients[0]

    return smoothed


def smooth_intra_chunk(
    actions: np.ndarray,
    *,
    window_length: int = 5,
    polyorder: int = 2,
    smooth_gripper: bool = False,
    gripper_dims: Iterable[int] = DEFAULT_GRIPPER_DIMS,
    preserve_first: bool = True,
    preserve_last: bool = True,
) -> np.ndarray:
    """Smooth action steps inside one predicted chunk.

    The function deliberately has no previous-chunk input. It only addresses
    intra-chunk position/velocity/acceleration irregularity. Cross-chunk
    continuity remains the responsibility of GR00T RTC or client-side blend.

    Args:
        actions: Decoded action chunk with shape ``[T, action_dim]``.
        window_length: Odd local fitting window. ``5`` is a mild default for
            a 30 Hz, 32-step chunk.
        polyorder: Polynomial order used by the local fit.
        smooth_gripper: Whether gripper dimensions should also be filtered.
        gripper_dims: Gripper indices in the action vector.
        preserve_first: Keep the first action exactly unchanged.
        preserve_last: Keep the final action exactly unchanged.

    Returns:
        A float32 action chunk with the same shape as the input.
    """
    actions = np.asarray(actions, dtype=np.float32)
    if actions.ndim != 2:
        raise ValueError(f"Expected actions with shape [T, D], got {actions.shape}")
    if len(actions) == 0:
        return actions.copy()
    if not np.all(np.isfinite(actions)):
        raise ValueError("Input action chunk contains NaN or Inf")

    polyorder = int(polyorder)
    window_length = int(window_length)
    if polyorder < 0:
        raise ValueError("polyorder must be >= 0")
    if window_length < 3:
        raise ValueError("window_length must be >= 3")
    if window_length % 2 == 0:
        raise ValueError("window_length must be odd")
    if polyorder >= window_length:
        raise ValueError("polyorder must be smaller than window_length")

    smooth_dims = _resolve_smoothing_dims(
        actions.shape[1],
        smooth_gripper=bool(smooth_gripper),
        gripper_dims=gripper_dims,
    )
    if len(smooth_dims) == 0:
        return actions.copy()

    result = actions.copy()
    filtered = _local_polynomial_smooth(
        actions[:, smooth_dims],
        window_length=window_length,
        polyorder=polyorder,
    )
    result[:, smooth_dims] = filtered.astype(np.float32)

    # Preserve endpoints so the synchronous test isolates chunk-internal
    # smoothness and does not silently alter boundary targets.
    if preserve_first:
        result[0] = actions[0]
    if preserve_last:
        result[-1] = actions[-1]

    # Gripper channels are kept bit-for-bit unless explicitly enabled.
    if not smooth_gripper:
        for dim in gripper_dims:
            dim = int(dim)
            if 0 <= dim < actions.shape[1]:
                result[:, dim] = actions[:, dim]

    if not np.all(np.isfinite(result)):
        raise ValueError("Smoothed action chunk contains NaN or Inf")
    return result


def chunk_smoothness_metrics(
    actions: np.ndarray,
    *,
    gripper_dims: Iterable[int] = DEFAULT_GRIPPER_DIMS,
) -> dict[str, float]:
    """Return step-domain metrics for quick before/after deployment logging."""
    actions = np.asarray(actions, dtype=np.float32)
    if actions.ndim != 2 or len(actions) == 0:
        return {
            "mean_abs_dq": 0.0,
            "max_abs_dq": 0.0,
            "mean_abs_ddq": 0.0,
            "max_abs_ddq": 0.0,
        }

    dims = _resolve_smoothing_dims(
        actions.shape[1],
        smooth_gripper=False,
        gripper_dims=gripper_dims,
    )
    arm = actions[:, dims]
    dq = np.diff(arm, axis=0)
    ddq = np.diff(arm, n=2, axis=0)

    return {
        "mean_abs_dq": float(np.mean(np.abs(dq))) if dq.size else 0.0,
        "max_abs_dq": float(np.max(np.abs(dq))) if dq.size else 0.0,
        "mean_abs_ddq": float(np.mean(np.abs(ddq))) if ddq.size else 0.0,
        "max_abs_ddq": float(np.max(np.abs(ddq))) if ddq.size else 0.0,
    }
