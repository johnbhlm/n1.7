from examples.H20.deploy.utils.nearest_utils import (
    action_arm_state,
    build_nearest_action_chunk,
    find_latency_aware_nearest_action,
)
import numpy as np


def _actions(count=12):
    actions = np.zeros((count, 16), dtype=np.float32)
    actions[:, :7] = np.arange(count, dtype=np.float32)[:, None]
    actions[:, 8:15] = np.arange(count, dtype=np.float32)[:, None]
    return actions


def _find(actions=None, stale=3, actual=None, current=None, **kwargs):
    actions = _actions() if actions is None else actions
    current = np.zeros(16, dtype=np.float32) if current is None else current
    return find_latency_aware_nearest_action(
        actions,
        stale_steps=stale,
        current_actual_arm_state=actual,
        previous_actual_arm_state=kwargs.pop("previous_actual", None),
        current_executed_action=current,
        previous_executed_action=kwargs.pop("previous", None),
        search_window=kwargs.pop("window", 6),
        velocity_weight=kwargs.pop("velocity_weight", 0.0),
        index_penalty_weight=kwargs.pop("index_weight", 0.0),
        use_actual_state=kwargs.pop("use_actual", True),
    )


def _build(actions, landing, stale=3, transition="direct", **kwargs):
    return build_nearest_action_chunk(
        actions,
        landing_index=landing,
        stale_steps=stale,
        transition=transition,
        direct_threshold=kwargs.pop("threshold", 0.05),
        position_cost=kwargs.pop("position_cost", 1.0),
        bridge_steps=kwargs.pop("bridge_steps", 0),
        current_executed_action=kwargs.pop("current", np.zeros(16, dtype=np.float32)),
        previous_executed_action=None,
        current_actual_arm_state=kwargs.pop("actual", None),
        previous_actual_arm_state=None,
        sigma=0.25,
        use_actual_state=True,
    )


def test_nearest_never_searches_before_stale_k():
    actions = _actions()
    actions[0] = 0
    landing, info = _find(actions, stale=3, actual=np.zeros(14))
    assert landing >= 3
    assert info["search_start"] == 3


def test_nearest_respects_search_window():
    landing, info = _find(stale=3, actual=np.full(14, 9), window=2)
    assert landing == 5
    assert info["search_end"] == 6


def test_nearest_selects_expected_action():
    landing, _ = _find(actual=np.full(14, 5.1))
    assert landing == 5


def test_gripper_does_not_affect_nearest_match():
    actions = _actions()
    actions[4, [7, 15]] = 1e6
    landing, _ = _find(actions, actual=np.full(14, 4))
    assert landing == 4


def test_actual_state_preferred_over_command():
    current = _actions()[9]
    landing, info = _find(actual=np.full(14, 4), current=current)
    assert landing == 4
    assert info["using_actual_state"]


def test_command_fallback_when_actual_missing():
    landing, info = _find(current=_actions()[6])
    assert landing == 6
    assert not info["using_actual_state"]


def test_velocity_weight_zero_matches_position_only():
    actions = _actions()
    actions[5] = actions[4]
    first, _ = _find(actions, actual=np.full(14, 4), velocity_weight=0.0)
    second, _ = _find(
        actions,
        actual=np.full(14, 4),
        previous_actual=np.full(14, -100),
        velocity_weight=0.0,
    )
    assert first == second == 4


def test_index_penalty_prefers_candidate_near_k():
    actions = _actions()
    actions[3] = actions[5] = 4
    landing, _ = _find(actions, actual=np.full(14, 4), index_weight=1.0)
    assert landing == 3


def test_direct_returns_from_landing_index():
    actions = _actions()
    output, _ = _build(actions, 5)
    np.testing.assert_array_equal(output, actions[5:])


def test_linear_bridge_lands_exactly_on_target():
    actions = _actions()
    output, _ = _build(actions, 5, transition="linear")
    np.testing.assert_array_equal(output[2], actions[5])


def test_linear_auto_bridge_preserves_aligned_length():
    actions = _actions()
    output, _ = _build(actions, 6, stale=3, transition="linear")
    assert len(output) == len(actions) - 3


def test_zero_or_invalid_candidates_safe():
    actions = _actions()
    actions[3:5] = np.nan
    landing, _ = _find(actions, stale=3, window=1)
    assert landing is None


def test_too_stale_returns_none():
    landing, _ = _find(stale=12)
    assert landing is None


def test_auto_direct_when_below_threshold():
    output, info = _build(_actions(), 4, transition="auto", position_cost=0.01)
    assert info["transition"] == "direct"
    np.testing.assert_array_equal(output, _actions()[4:])


def test_auto_linear_when_above_threshold():
    output, info = _build(_actions(), 4, transition="auto", position_cost=0.1)
    assert info["transition"] == "linear"
    assert len(output) == 9


def test_nearest_bezier_uses_nearest_landing():
    actions = _actions()
    output, info = _build(actions, 5, transition="bezier")
    assert info["transition"] == "bezier"
    np.testing.assert_allclose(output[2], actions[5])
    assert np.isfinite(output).all()


def test_action_layout_is_fourteen_arm_dimensions():
    action = np.arange(16, dtype=np.float32)
    np.testing.assert_array_equal(action_arm_state(action), np.r_[0:7, 8:15])
