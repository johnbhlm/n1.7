from __future__ import annotations

import time
import numpy as np

from examples.H20.deploy.utils.task_utils import mark_task_done, should_apply_gripper_lock
from examples.H20.robots.gripper.gripper_control import LEFT_GRIPPER_CLOSE_POS, RIGHT_GRIPPER_CLOSE_POS


def get_gripper_done_state(task_lower: str, c):
    left_closed = all(v == 1.0 for v in c.left_gripper_flag_list)
    right_closed = all(v == 1.0 for v in c.right_gripper_flag_list)
    left_open = all(v == 0.0 for v in c.left_gripper_flag_list)
    right_open = all(v == 0.0 for v in c.right_gripper_flag_list)

    is_pick = "pick" in task_lower
    is_place = ("place" in task_lower) or ("give me" in task_lower)

    has_left = "left" in task_lower
    has_right = "right" in task_lower

    if is_pick:
        if has_left:
            return left_closed, ("left" if left_closed else None)
        if has_right:
            return right_closed, ("right" if right_closed else None)
        if left_closed:
            return True, "left"
        if right_closed:
            return True, "right"
        return False, None

    if is_place:
        if has_left:
            return left_open, "left"
        if has_right:
            return right_open, "right"
        return False, None

    return False, None

class ActionExecutor:
    def __init__(self, controller):
        self.c = controller
        self.arms_ready_count = 0
        self.prev_task = None
        self.prev_left_gripper_cmd = None
        self.prev_right_gripper_cmd = None
        self.left_retry = 0.0
        self.right_retry = 0.0

    def execute_step(self, action, current_task: str, left_smoother, right_smoother, *, allow_inactive_arm_freeze: bool = False, allow_done_flag: bool = False) -> bool:
        if self.prev_task != current_task:
            self.prev_task = current_task
            self.prev_left_gripper_cmd = None
            self.prev_right_gripper_cmd = None
            self.left_retry = 0.0
            self.right_retry = 0.0

        c = self.c
        left_arm = np.array(action[0:7])
        left_gripper = action[7]
        right_arm = np.array(action[8:15])
        right_gripper = action[15]
        
        # stable_left_gripper = left_smoother.update(left_gripper)
        # stable_right_gripper = right_smoother.update(right_gripper)
        
        stable_left_gripper, stable_left_gripper_long = left_smoother.update(left_gripper)
        stable_right_gripper, stable_right_gripper_long = right_smoother.update(right_gripper)
        # if "Give" in c.current_task:
        #     final_left_gripper = LEFT_GRIPPER_CLOSE_POS if stable_left_gripper_long >= 0.5 else 0.01
        #     final_right_gripper = RIGHT_GRIPPER_CLOSE_POS if stable_right_gripper_long >= 0.5 else 0.01
        # else:
        #     final_left_gripper = LEFT_GRIPPER_CLOSE_POS if stable_left_gripper >= 0.5 else 0.01
        #     final_right_gripper = RIGHT_GRIPPER_CLOSE_POS if stable_right_gripper >= 0.5 else 0.01
        final_left_gripper = LEFT_GRIPPER_CLOSE_POS if stable_left_gripper >= 0.5 else 0.01
        final_right_gripper = RIGHT_GRIPPER_CLOSE_POS if stable_right_gripper >= 0.5 else 0.01
        
        # if should_apply_gripper_lock("left", c.current_task, c.hand_state):
        #     final_left_gripper = c.hand_state["left"]["locked_gripper_pos"]
        # if should_apply_gripper_lock("right", c.current_task, c.hand_state):
        #     final_right_gripper = c.hand_state["right"]["locked_gripper_pos"]
        
        # add left or right hand
        # if ("with left hand" not in current_task.lower()) and ("with right hand" not in current_task.lower()):
        #     if left_arm[0] < c.args.add_hand:
        #         current_task = current_task + " with left hand"
        #         c.current_task = current_task

        #     if right_arm[0] < c.args.add_hand:
        #         current_task = current_task + " with right hand"
        #         c.current_task = current_task

        
        # left_cmd = 1.0 if stable_left_gripper > 0.5 else 0.0
        # right_cmd = 1.0 if stable_right_gripper > 0.5 else 0.0

        # # retry
        # if "pick" in current_task.lower():
        #     if left_arm[0] < 0.5:
        #         if self.prev_left_gripper_cmd == 1.0 and left_cmd == 0.0:
        #             self.left_retry += 1.0

        #     if right_arm[0] < 0.5:
        #         if self.prev_right_gripper_cmd == 1.0 and right_cmd == 0.0:
        #             self.right_retry += 1.0

        
        # if self.left_retry and ("with left hand" not in current_task.lower()) and ("with right hand" not in current_task.lower()):
        #     c.cmd.motor_cmd[12].q = -0.3
        # if self.right_retry and ("with left hand" not in current_task.lower()) and ("with right hand" not in current_task.lower()):
        #     c.cmd.motor_cmd[12].q = 0.3

        
        # if (self.left_retry or  self.right_retry) and ("with left hand" not in current_task.lower()) and ("with right hand" not in current_task.lower()):
        #     print("=======================================================")
        #     if left_arm[0] < 0.5:
        #         current_task = current_task + " with left hand"
        #         c.current_task = current_task
        #         print(f"[REAL CURRENT TASK] {c.current_task}")
        #     if right_arm[0] < 0.5:
        #         current_task = current_task + " with right hand"
        #         c.current_task = current_task
        #         print(f"[REAL CURRENT TASK] {c.current_task}")
        
        # self.prev_left_gripper_cmd = left_cmd
        # self.prev_right_gripper_cmd = right_cmd

        # 夹爪当前是否闭合
        if "Give" in c.current_task:
            left_gripper_flag = 1.0 if stable_left_gripper_long > 0.5 else 0.0
            right_gripper_flag = 1.0 if stable_right_gripper_long > 0.5 else 0.0
        else:
            left_gripper_flag = 1.0 if stable_left_gripper > 0.5 else 0.0
            right_gripper_flag = 1.0 if stable_right_gripper > 0.5 else 0.0
        # left_gripper_flag = 1.0 if stable_left_gripper > 0.5 else 0.0
        # right_gripper_flag = 1.0 if stable_right_gripper > 0.5 else 0.0
        c.left_gripper_flag_list.append(left_gripper_flag)
        c.right_gripper_flag_list.append(right_gripper_flag)
        
        gripper_ready, inferred_hand = get_gripper_done_state(current_task.lower(), c)
        

        # task done 
        if "pick" in c.current_task.lower():
            arms_ready = (
                left_arm[0] > c.args.done_arm_threshold
                and right_arm[0] > c.args.done_arm_threshold
            )
        elif "place" in c.current_task.lower():
                    arms_ready = (
                        left_arm[0] > c.args.done_arm_threshold -0.1
                        and right_arm[0] > c.args.done_arm_threshold -0.1
                    )
        else:
            arms_ready = (
                left_arm[0] > c.args.done_arm_threshold -0.2
                and right_arm[0] > c.args.done_arm_threshold -0.2
            )
        
        # 根据模型输出，关节角，夹爪状态判断是否完成任务
        # if all(v == 1.0 for v in c.done_flag_list) and arms_ready and gripper_ready:
        #     c.task_done_flag = True
        
        # 根据关节角，夹爪状态判断是否完成任务
        if arms_ready and gripper_ready:
            self.arms_ready_count += 1
        else:
            self.arms_ready_count = 0
        
        if "pick" in current_task.lower():
            required_count = getattr(c.args, "arms_ready_pick_done_count", 100)
        else:
            required_count = getattr(c.args, "arms_ready_place_done_count", 30)
        
        # if "give" in current_task.lower() and gripper_ready:
        #     print("###################################")
        #     c.task_done_flag = True
        #     self.arms_ready_count = 0
            
        # if ("give" not in current_task.lower()) and self.arms_ready_count >= required_count:
        #     c.task_done_flag = True
        #     # print("@"*20)
        #     # print(f"Task done with arms_ready_count {self.arms_ready_count}")
        #     self.arms_ready_count = 0
        if self.arms_ready_count >= required_count:
            c.task_done_flag = True
            self.arms_ready_count = 0
    
        if not c.task_finished and c.task_start_time is not None:
            if time.time() - c.task_start_time > c.args.task_timeout:
                c.task_failed_timeout = True
                c.task_finished = True
                if "left" in current_task:
                    stable_left_gripper= 0
                    final_left_gripper = 0.01
                elif "right" in current_task:
                    stable_right_gripper= 0
                    final_right_gripper = 0.01
                else:
                    stable_left_gripper= 0
                    final_left_gripper = 0.01
                    stable_right_gripper= 0
                    final_right_gripper = 0.01

                print("[INFO] Task failure, moving arm to init pose")
                c._mark_current_task_done(stable_left_gripper, stable_right_gripper)
                print(c.hand_state)
                c.task_done_flag = False
            
            else:
                if c.freeze_right:
                    if c.task_done_flag:
                        print("[INFO] Task done, moving left arm to init pose")
                        c._mark_current_task_done(stable_left_gripper, stable_right_gripper)
                        print(c.hand_state)
                        c.last_completed_task_kind = c._classify_task_kind(c.current_task)
                        print("&"*20)
                        print(c.last_completed_task_kind)
                        c.task_done_flag = False
                        c.task_finished = True
                    else:
                        c._apply_arm_slice(15, left_arm)
                    c._apply_arm_slice(22, c.init_angles[7:14])
                
                elif c.freeze_left:
                    c._apply_arm_slice(15, c.init_angles[0:7])
                    if c.task_done_flag:
                        print("[INFO] Task done, moving right arm to init pose")
                        c._mark_current_task_done(stable_left_gripper, stable_right_gripper)
                        print(c.hand_state)
                        c.last_completed_task_kind = c._classify_task_kind(c.current_task)
                        print("&"*20)
                        print(c.last_completed_task_kind)
                        c.task_done_flag = False
                        c.task_finished = True
                    else:
                        # pass
                        c._apply_arm_slice(22, right_arm)
                else:
                    if c.task_done_flag:
                        c._mark_current_task_done(stable_left_gripper, stable_right_gripper)
                        print(c.hand_state)
                        c.last_completed_task_kind = c._classify_task_kind(c.current_task)
                        print("&"*20)
                        print(c.last_completed_task_kind)
                        c.task_done_flag = False
                        c.task_finished = True
                    else:
                        c._apply_arm_slice(15, left_arm)
                        c._apply_arm_slice(22, right_arm)

                        # #########################################
                        # if "pick" in current_task.lower():
                        #     if left_arm[0] < 0.5:
                        #         if left_arm[6] > 0.0:
                        #             if "lion" in current_task.lower() or "dog" in current_task.lower():
                        #                 c.cmd.motor_cmd[21].q -= 0.15
                        #             else:     
                        #                 c.cmd.motor_cmd[21].q -= 0.1
                        #         if self.left_retry > 0.0 and left_arm[3] < 0.0:
                        #             if self.left_retry < 2.0:
                        #                 c.cmd.motor_cmd[20].q += 0.05 # 0.1 * self.left_retry * 0.5
                        #             # elif self.left_retry >= 2.0 and self.left_retry < 4.0:
                        #             #     c.cmd.motor_cmd[20].q += 0.1 * 1.0 * 0.5
                        #         # elif self.left_retry > 0.0 and left_arm[3] > 0.0:
                        #         #     if "lion" in current_task.lower():
                        #         #         c.cmd.motor_cmd[20].q -= 0.1
                        #     if right_arm[0] < 0.5:
                        #         if right_arm[6] < 0.0: 
                        #             c.cmd.motor_cmd[28].q += 0.1
                        #         if self.right_retry > 0.0 and right_arm[3] < 0.0:
                        #             if self.right_retry < 2.0:
                        #                 c.cmd.motor_cmd[27].q += 0.05 # 0.1 * self.right_retry * 0.5
                        #             # elif self.right_retry >= 3.0 and self.right_retry < 4.0:
                        #             #     c.cmd.motor_cmd[27].q += 0.1 * 1.0 * 0.5
                        #         # elif self.right_retry > 0.0 and right_arm[3] > 0.0:
                        #         #     if "lion" in current_task.lower():
                        #         #         c.cmd.motor_cmd[27].q -= 0.1
                        # ############################################
        ret = c.high_level.realtimeMove(c.cmd)
        if ret != 0:
            print(f"[ActionExecutor] realtimeMove failed, ret={ret}")
            return True
        c.gripper_controller.set_left_right_gripper(final_left_gripper, final_right_gripper)

        # left_gripper_hold_state = c.gripper_controller.gripper_state.motor_state[0].hold_state
        # right_gripper_hold_state = c.gripper_controller.gripper_state.motor_state[1].hold_state

        # print("left_gripper_hold_state:",left_gripper_hold_state)
        # print("right_gripper_hold_state:",right_gripper_hold_state)

        ret, c.low_state = c.low_level.readLowState()
        control_sleep = float(getattr(c.args, "control_sleep", 0.0))
        if control_sleep > 0:
            time.sleep(control_sleep)
        if ret != 0 and ret != -512:
            return True
        if c.low_state is None:
            time.sleep(0.01)
            return False

        for i in range(15, 22):
            c.left_arm_joints[i - 15] = c.low_state.motor_state[i].q
        for i in range(22, 29):
            c.right_arm_joints[i - 22] = c.low_state.motor_state[i].q

        return False
