from examples.H20.deploy.utils.bezier_utils import build_latency_aware_bezier_chunk
import numpy as np


def _actions(count=32):
    actions = np.zeros((count, 16), dtype=np.float32)
    t = np.linspace(0.1, 3.2, count, dtype=np.float32)
    actions[:, :7] = t[:, None]
    actions[:, 8:15] = (2 * t)[:, None]
    actions[:, 7] = t
    actions[:, 15] = 2 * t
    return actions


def _build(actions=None, stale_steps=3, previous=None, current=None, **kwargs):
    actions = _actions() if actions is None else actions
    current = np.zeros(16, dtype=np.float32) if current is None else current
    previous = np.full(16, -0.1, dtype=np.float32) if previous is None else previous
    return build_latency_aware_bezier_chunk(
        actions,
        stale_steps=stale_steps,
        previous_executed_action=previous,
        current_executed_action=current,
        previous_actual_arm_state=None,
        current_actual_arm_state=None,
        gamma=0.15,
        sigma=0.25,
        **kwargs,
    )


def test_dynamic_stale_length():
    output, _ = _build()
    assert len(output) == 29


def test_bridge_lands_exactly_on_target():
    actions = _actions()
    output, info = _build(actions)
    c = info["landing_relative"]
    np.testing.assert_allclose(output[c, :7], actions[3 + c, :7])
    np.testing.assert_allclose(output[c, 8:15], actions[3 + c, 8:15])


def test_no_duplicate_current_point():
    output, _ = _build()
    assert not np.allclose(output[0, np.r_[0:7, 8:15]], 0.0)


def test_zero_history_direction_no_nan():
    current = np.zeros(16, dtype=np.float32)
    output, _ = _build(previous=current, current=current)
    assert np.isfinite(output).all()


def test_zero_future_direction_no_nan():
    actions = _actions()
    # M=29 and c=4, so the centered tangent uses raw indices 6 and 8.
    actions[8] = actions[6]
    output, _ = _build(actions)
    assert np.isfinite(output).all()


def test_left_right_independent():
    actions = _actions()
    actions[:, :7] = 0.0
    output, _ = _build(actions)
    np.testing.assert_allclose(output[:, :7], 0.0)
    assert np.any(output[:, 8:15] != 0.0)


def test_gripper_linear():
    actions = _actions()
    output, info = _build(actions)
    steps = info["bridge_steps"]
    target = actions[info["landing_raw"], 7]
    expected = np.linspace(0.0, target, steps + 1, dtype=np.float32)[1:]
    np.testing.assert_allclose(output[:steps, 7], expected)


def test_too_stale_returns_none():
    output, _ = _build(stale_steps=31)
    assert output is None
