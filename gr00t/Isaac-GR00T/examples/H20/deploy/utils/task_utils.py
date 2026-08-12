from __future__ import annotations

from typing import Any, Literal

from examples.H20.robots.gripper.gripper_control import (
    LEFT_GRIPPER_CLOSE_POS,
    RIGHT_GRIPPER_CLOSE_POS,
)

TaskHand = Literal["left", "right"] | None
TaskAction = Literal["pick", "place"] | None


def get_task_info(current_task: str) -> dict[str, TaskHand | TaskAction]:
    task_lower = current_task.lower()
    hand = "left" if "left" in task_lower else ("right" if "right" in task_lower else None)
    if "pick" in task_lower:
        action = "pick"
    elif "place" in task_lower or "give me" in task_lower:
        action = "place"
    else:
        action = None
    return {"hand": hand, "action": action}

def get_task_object(task: str) -> str | None:
    task_lower = task.lower()
    if "green dinosaur" in task_lower:
        return "green dinosaur"
    if "yellow duck" in task_lower:
        return "yellow duck"
    if "orange lion" in task_lower:
        return "orange lion"
    if "gray dog" in task_lower:
        return "gray dog"

    return None

def mark_task_done(task: str, hand_state: dict[str, dict[str, Any]],inferred_hand: str | None = None,) -> None:
    """
    After user confirms task done: update holding / gripper lock from task type.
    """
    info = get_task_info(task)
    task_object = get_task_object(task)
    hand = info["hand"]
    action = info["action"]
    hand = info["hand"] if info["hand"] is not None else inferred_hand
        
    if hand is None or action is None:
        print("[WARN] Unknown task, cannot mark done.")
        return

    if action == "pick":
        hand_state[hand]["holding"] = True
        hand_state[hand]["gripper_locked"] = True
        hand_state[hand]["item"] = task_object
        if hand == "left":
            hand_state[hand]["locked_gripper_pos"] = LEFT_GRIPPER_CLOSE_POS
        else:
            hand_state[hand]["locked_gripper_pos"] = RIGHT_GRIPPER_CLOSE_POS
        print(
            f"[TASK DONE] {hand} pick finished, gripper locked at "
            f"{hand_state[hand]['locked_gripper_pos']:.4f}"
        )
    elif action == "place":
        hand_state[hand]["holding"] = False
        hand_state[hand]["gripper_locked"] = False
        hand_state[hand]["locked_gripper_pos"] = 0.01
        hand_state[hand]["item"] = None
        print(f"[TASK DONE] {hand} place finished, gripper unlocked and holding cleared.")

def should_apply_gripper_lock(
    hand: str,
    task: str,
    hand_state: dict[str, dict[str, Any]],
) -> bool:
    info = get_task_info(task)
    active_hand = info["hand"]
    active_action = info["action"]

    if task == "" or active_hand is None or active_action is None:
        return hand_state[hand]["holding"] and hand_state[hand]["gripper_locked"]
    if not hand_state[hand]["holding"]:
        return False
    if not hand_state[hand]["gripper_locked"]:
        return False
    if hand == active_hand and active_action == "place":
        return False
    return True
