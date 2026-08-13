"""Latency-prior, local-state nearest action alignment utilities."""

from __future__ import annotations

from examples.H20.deploy.utils.bezier_utils import build_joint_bezier_bridge
import numpy as np


def action_arm_state(action: np.ndarray) -> np.ndarray:
    """Convert the H20 16D action layout into left/right contiguous 14D arms."""
    action = np.asarray(action, dtype=np.float32)
    return np.concatenate((action[0:7], action[8:15]))


def arm_position_cost(candidate: np.ndarray, anchor: np.ndarray) -> tuple[float, float, float]:
    delta = np.asarray(candidate) - np.asarray(anchor)
    left = float(np.sqrt(np.mean(delta[:7] ** 2)))
    right = float(np.sqrt(np.mean(delta[7:14] ** 2)))
    return left, right, left + right


def find_latency_aware_nearest_action(
    new_actions: np.ndarray,
    *,
    stale_steps: int,
    current_actual_arm_state: np.ndarray | None,
    previous_actual_arm_state: np.ndarray | None,
    current_executed_action: np.ndarray,
    previous_executed_action: np.ndarray | None,
    search_window: int,
    velocity_weight: float,
    index_penalty_weight: float,
    use_actual_state: bool,
):
    actions = np.asarray(new_actions, dtype=np.float32)
    k = max(0, int(stale_steps))
    info = {"stale_steps": k, "raw_chunk_len": len(actions)}
    if actions.ndim != 2 or k >= len(actions):
        return None, info
    start = k
    end = min(len(actions), k + max(0, int(search_window)) + 1)
    info.update(search_start=start, search_end=end)

    actual = None if current_actual_arm_state is None else np.asarray(current_actual_arm_state)
    actual_valid = use_actual_state and actual.shape == (14,) and np.isfinite(actual).all()
    anchor = (
        actual.astype(np.float32) if actual_valid else action_arm_state(current_executed_action)
    )
    if anchor.shape != (14,) or not np.isfinite(anchor).all():
        return None, info

    previous = None
    if actual_valid and previous_actual_arm_state is not None:
        candidate_previous = np.asarray(previous_actual_arm_state, dtype=np.float32)
        if candidate_previous.shape == (14,) and np.isfinite(candidate_previous).all():
            previous = candidate_previous
    elif previous_executed_action is not None:
        candidate_previous = action_arm_state(previous_executed_action)
        if np.isfinite(candidate_previous).all():
            previous = candidate_previous
    current_delta = None if previous is None else anchor - previous

    candidates = []
    best = None
    for index in range(start, end):
        candidate = action_arm_state(actions[index])
        if not np.isfinite(candidate).all():
            continue
        left, right, position = arm_position_cost(candidate, anchor)
        velocity = 0.0
        if velocity_weight > 0.0 and current_delta is not None and index + 1 < len(actions):
            candidate_next = action_arm_state(actions[index + 1])
            if np.isfinite(candidate_next).all():
                vel_delta = candidate_next - candidate - current_delta
                velocity = float(
                    np.sqrt(np.mean(vel_delta[:7] ** 2)) + np.sqrt(np.mean(vel_delta[7:14] ** 2))
                )
        index_cost = float(index - k) / max(1, int(search_window))
        total = (
            position + float(velocity_weight) * velocity + float(index_penalty_weight) * index_cost
        )
        if not np.isfinite(total):
            continue
        item = {
            "index": index,
            "left_error": left,
            "right_error": right,
            "position_cost": position,
            "velocity_cost": velocity,
            "index_cost": index_cost,
            "total_cost": total,
        }
        candidates.append(item)
        if best is None or total < best["total_cost"]:
            best = item
    if best is None:
        info["candidates"] = candidates
        return None, info
    info.update(best)
    info.update(
        landing_index=best["index"],
        landing_offset_from_k=best["index"] - k,
        using_actual_state=actual_valid,
        candidates=candidates,
    )
    return best["index"], info


def build_nearest_action_chunk(
    new_actions: np.ndarray,
    *,
    landing_index: int,
    stale_steps: int,
    transition: str,
    direct_threshold: float,
    position_cost: float,
    bridge_steps: int,
    current_executed_action: np.ndarray,
    previous_executed_action: np.ndarray | None,
    current_actual_arm_state: np.ndarray | None,
    previous_actual_arm_state: np.ndarray | None,
    sigma: float,
    use_actual_state: bool,
    gripper_dims: tuple[int, ...] = (7, 15),
):
    actions = np.asarray(new_actions, dtype=np.float32)
    j = int(landing_index)
    k = max(0, int(stale_steps))
    effective = transition
    if effective == "auto":
        effective = "direct" if position_cost <= direct_threshold else "linear"
    if effective == "direct":
        return actions[j:].copy(), {"transition": effective, "bridge_steps": 0}

    count = int(bridge_steps) if int(bridge_steps) > 0 else j - k + 1
    if count <= 0:
        return None, {"transition": effective, "bridge_steps": count}
    if effective == "bezier":
        previous_target = actions[j - 1] if j > 0 else actions[j]
        next_target = actions[j + 1] if j + 1 < len(actions) else actions[j]
        bridge, _ = build_joint_bezier_bridge(
            current_executed_action=current_executed_action,
            previous_executed_action=previous_executed_action,
            current_actual_arm_state=current_actual_arm_state,
            previous_actual_arm_state=previous_actual_arm_state,
            target_action=actions[j],
            target_prev_action=previous_target,
            target_next_action=next_target,
            bridge_steps=count,
            sigma=sigma,
            use_actual_state=use_actual_state,
            gripper_dims=gripper_dims,
        )
    else:
        start = np.asarray(current_executed_action, dtype=np.float32).copy()
        actual = None if current_actual_arm_state is None else np.asarray(current_actual_arm_state)
        if use_actual_state and actual.shape == (14,) and np.isfinite(actual).all():
            start[:7], start[8:15] = actual[:7], actual[7:14]
        alpha = np.linspace(0.0, 1.0, count + 1, dtype=np.float32)[1:, None]
        bridge = (1.0 - alpha) * start + alpha * actions[j]
        bridge[-1] = actions[j]
    output = np.concatenate((bridge, actions[j + 1 :]), axis=0)
    if not np.isfinite(output).all():
        return None, {"transition": effective, "bridge_steps": count}
    return output.astype(np.float32), {"transition": effective, "bridge_steps": count}
