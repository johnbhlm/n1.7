"""H20 keyboard deployment: robot state, motion, and policy inference loop."""

import time
import threading
import enum
# import torch
import numpy as np
import rclpy
from rclpy.executors import MultiThreadedExecutor
# from pynput import keyboard
from collections import deque
from examples.H20.robots.camera.camera_manager import CameraManager

import os
import sys
USE_PYNPUT = bool(os.environ.get("DISPLAY"))

if USE_PYNPUT:
    from pynput import keyboard
else:
    keyboard = None

import humanoid_sdk_py
from humanoid_sdk_py import h2x
# from examples.H20.robots.camera.realsense import Camera

from examples.H20.robots.gripper.gripper_control import GripperController,GripperSmoother
from examples.H20.deploy.ai_agent.grasp_flow_node import GraspFlowNode
from examples.H20.deploy.utils.keyboard_handlers import make_on_press,SSHKeyboardListener
from examples.H20.deploy.utils.normalizer import Normalizer, load_stats
from examples.H20.deploy.utils.task_utils import mark_task_done,get_task_object
from examples.H20.deploy.configs import DeployArgs as Args
from examples.H20.robots.groot_h20_interface import GrootH20ModelClient as ModelClient
from examples.H20.deploy.runtime.observation import ObservationBuilder
from examples.H20.deploy.runtime.action_executor import ActionExecutor
from examples.H20.deploy.runtime.runners import SyncRunner, AsyncRunner

MOTOR_COUNT = 29

class RobotState(enum.Enum):
    IDLE = "idle"
    RUNNING = "running"
    ERROR = "error"

class H20VLA:
    def __init__(self, args: Args):
        self.args = args

        self.high_level = h2x.H2xHighLevel()
        self.low_level = h2x.H2xLowLevel()
        self.cmd = h2x.RealtimeCmd()

        self.arm_joints = [0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
                           0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0]
        self.arm_joints_pre = self.arm_joints.copy()
        self.left_arm_joints =  [0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0]
        self.right_arm_joints = [0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0]

        # self.kp = np.array([400.0, 400.0, 200.0, 200.0, 200.0, 200.0, 200.0])
        # self.kd = np.array([16.0, 16.0, 16.0, 16.0, 16.0, 16.0, 16.0])
        
        #new cmd_time
        self.kp = np.array([400.0, 400.0, 400.0, 400.0, 400.0, 400.0, 400.0])
        self.kd = np.array([8.0, 8.0, 8.0, 8.0, 8.0, 8.0, 8.0])

        # init flag
        self.robot_mode = "homie" # "homie" or "walk"
        self._deploy_flag = False
        self._deploy_started = False
        self._init_finish = False
        self._init_flag = False
        self._walk_arm_flag = False
        self._walk_arm_finish = False
        self.trainsition_flag = False
        self._task_done_requested = False
        # terminate flag
        self.infer_counter = 0
        self.stop = False

        self.task_list = {
            # white desk 
            "1": "Pick up the green dinosaur from the desk with left hand",
            "3": "Pick up the yellow duck from the desk with left hand",
            "5": "Pick up the orange lion from the desk with left hand",
            "7": "Pick up the gray dog from the desk with left hand",
            "k": "Pick up the green dinosaur from the desk with right hand",
            "y": "Pick up the yellow duck from the desk with right hand",
            "l": "Pick up the orange lion from the desk with right hand",
            "g": "Pick up the gray dog from the desk with right hand",
            # "1": "Pick up the green dinosaur from the desk",
            # "3": "Pick up the yellow duck from the desk",
            # "5": "Pick up the orange lion from the desk",
            # "7": "Pick up the gray dog from the desk",
            # "1": "Pick up the green dinosaur from the desk",
            "2": "Place the green dinosaur on the desk",
            # "3": "Pick up the yellow duck from the desk",
            "4": "Place the yellow duck on the desk",
            # "5": "Pick up the orange lion from the desk",
            "6": "Place the orange lion on the desk",
            # "7": "Pick up the gray dog from the desk",
            "8": "Place the gray dog on the desk",
            # "9": "Pick up the green dinosaur and the yellow duck from the desk",
            # "0": "Place the green dinosaur on the desk with the right hand",
            "a": "Give me the gray dog",
            "b": "Give me the green dinosaur",
            "c": "Give me the yellow duck",
            "d": "Give me the orange lion",
            # "m": "Give me the yellow duck with left hand",
            # "n": "Give me the yellow duck with right hand",
            # "z": "Give me the orange lion with left hand",
            # "x": "Give me the orange lion with right hand",

            # # white desk 
            # "z": "Put the green dinosaur toys on the pink plate",
            # "x": "Put the green dinosaur toys on the green plate",
            # "v": "Put the green dinosaur toys on the blue plate",
            # "n": "Put the green dinosaur toys on the yellow plate",
            # "m": "Clean up the desk and close the lid",
            # "s": "Put the green dinosaur toys on the pink plate, the gray dog toys on the green plate, the yellow duck toys on the blue plate, and the orange lion toys on the yellow plate",
            # "f": "Pick up the leftmost toy",
            # "g": "Pick up the rightmost toy",

            # "h": "Put all green dinosaur toys into the basket",
            # "j": "Put all yellow duck toys into the basket",
            # "k": "Put all orange lion toys into the basket",
            # "l": "Put all gray dog toys into the basket",

            # "q": "Place the toy with left hand",
            # "w": "Place the toy with right hand"
        }

        self.current_task_id = "1"  # 默认任务
        self.current_task = self.task_list[self.current_task_id]
        self.task_switch_flag = False
        self.stop_program = False

        self.done_flag_list = deque([0.0] * args.done_flag_window, maxlen=args.done_flag_window)
        self.task_finished = False
        
        self.left_gripper_flag_list = deque([0.0] * args.gripper_window, maxlen=args.gripper_window)
        self.right_gripper_flag_list = deque([0.0] * args.gripper_window, maxlen=args.gripper_window)

        self.inference_dt = 0.3
        self.action_horizon = int(args.action_horizon)
        self.cmd.time = float(args.cmd_time)#0.1 #0.1#0.01#0.35
        self.init_dt = 0.01


        # self.init_angles = np.array([ 1.116907,  0.582977,  0.165563, -0.351765, -0.316978, -0.763985, -0.0093815,
        #                               1.116907, -0.582977, -0.165563, -0.351765,  0.316978, -0.763985,  0.0093815])

        # self.init_angles = np.array([1.0905884504318237, 0.5754899978637695, -0.16557106375694275, -0.29372885823249817, -0.3039184510707855, -0.7414969801902771, -0.000849381962325424,
        #                              1.0905884504318237, -0.5754899978637695, 0.16557106375694275, -0.29372885823249817, 0.3039184510707855, -0.7414969801902771, 0.000849381962325424])
        
        
        self.init_angles = np.array([1.0905884504318237, 0.5754899978637695, -0.16557106375694275, -0.29372885823249817, -0.3039184510707855, -0.8414969801902771, -0.000849381962325424,
                                     1.0905884504318237, -0.5754899978637695, 0.16557106375694275, -0.29372885823249817, 0.3039184510707855, -0.8414969801902771, 0.000849381962325424])
        
        # self.walk_arm_angles = np.array([0.251601,  0.233072, -0.004515,  1.007003, -0.000659, 0.017820, -0.004575, 
        #                                  0.254894, -0.256954, -0.012773, 0.955972,  0.001297, 0.000944,  0.000347])
        # 
        self.walk_arm_angles = np.array([0.251601,  0.233072, -0.004515,  1.007003, -0.000659, 0.017820, -0.004575, 
                                         0.251601, -0.233072, -0.004515, 1.007003,  0.000659, 0.017820,  0.004575])
        
        # from inside
        # self.transition_angles = np.array([1.567048,  0.501358,  0.310389, -0.18203,  0.375669, -1.288784,  0.200134094, 
                                        #    1.567048, -0.501358, -0.310389, -0.188203, -0.375669, -1.288784, -0.200134094])
        
        self.transition_angles = np.array([1.85,  0.50,  0.31, 0.00,  0.45, -1.40,  0.20, 
                                           1.85, -0.50, -0.31, 0.00, -0.45, -1.40, -0.20])
        

        # self.give_transition_angles = np.array([0.218056,  0.755344,  -0.343656, 0.045356,  -0.680333, -0.427389,  -0.000849,
        #                                         0.218056,  -0.755344,  0.343656, 0.045356,  0.680333, -0.427389,  0.000849,])

        self.give_transition_angles = np.array([0.251601,  0.233072, -0.004515,  0.575669, -0.000659, 0.017820, -0.004575, 
                                                0.251601, -0.233072, -0.004515, 0.575669,  -0.000659, 0.017820,  0.004575])
        
        # 希望先位控到达的点
        self.pre_align_angles = np.array([0.2355, 0.5268, -0.2372, -0.1186, -0.4954, -0.2389, 0.0505,
                                          0.2355, -0.5268, 0.2372, -0.1186, 0.4954, -0.2389, -0.0505])
        
        rclpy.init()
        self.camera_manager = CameraManager()
        self.gripper_controller = GripperController()
        self.grasp_flow_node = GraspFlowNode(self)
        self.executor = MultiThreadedExecutor()
        self.executor.add_node(self.camera_manager)
        self.executor.add_node(self.gripper_controller)
        self.executor.add_node(self.grasp_flow_node)
        self.executor_thread = threading.Thread(target=self.executor.spin, daemon=True)
        self.executor_thread.start()


        self.control_lock = threading.Lock()
        self.current_thread = None
        self.current_mode = None  # "init" | "walk_arm" | "infer"

        # ===== 任务完成 / 持物 / 夹爪锁定状态 =====
        self.task_done_flag = False

        # 主状态机：pick/place/reset 互斥 + reset 排队
        self._state = RobotState.IDLE
        self._state_lock = threading.RLock()
        self._done_event = threading.Event()
        self._done_event.set()
        self._reset_pending = False

        self.hand_state = {
            "left": {
                "holding": False,            # 左手当前是否持物
                "gripper_locked": False,     # 左手夹爪是否锁定
                "locked_gripper_pos": 0.01,  # 锁定时保持的位置
                "item": None,
            },
            "right": {
                "holding": False,
                "gripper_locked": False,
                "locked_gripper_pos": 0.01,
                "item": None,
            }
        }

        # ===============================
        # 判断是否需要冻结某侧手臂
        # ===============================
        self.freeze_left = False
        self.freeze_right = False
        
        # 记录任务状态，区分递手和放桌子
        self.next_task_kind = None          # "give" | "table_place" | None
        self._pending_init_from_walk = False
        self.pending_task_id = None
        self.last_completed_task_kind = None          # "give" | "table_place" | None
        
        #超时判断
        self.task_start_time = None
        self.task_failed_timeout = False
    
    def _classify_task_kind(self, task: str) -> str | None:
        task_lower = task.lower()
        if "give me" in task_lower:
            return "give"
        if "place" in task_lower and ("desk" in task_lower or "table" in task_lower):
            return "table_place"
        return None


    def start_exclusive_thread(self, target, mode_name):
        """确保同一时间只运行一个线程"""

        with self.control_lock:

            # 如果已有线程在运行，先停止
            if self.current_thread is not None and self.current_thread.is_alive():
                print(f"[INFO] Stopping previous thread: {self.current_mode}")

                # 停止 infer
                self._deploy_flag = False
                self._walk_arm_flag = False
                self._init_flag = False

                time.sleep(0.1)

            print(f"[INFO] Starting new thread: {mode_name}")

            self.current_mode = mode_name
            self.current_thread = threading.Thread(target=target, daemon=True)
            self.current_thread.start()

    def _read_current_arm_joints(self) -> np.ndarray:
        for i in range(15, MOTOR_COUNT):
            self.arm_joints[i - 15] = self.low_state.motor_state[i].q
        return np.array(self.arm_joints)

    def _apply_waist_lock(self) -> None:
        for i in range(12,15):
            self.cmd.motor_cmd[i].kp = 300.0
            self.cmd.motor_cmd[i].kd = 1.0
            self.cmd.motor_cmd[i].mode = 1
            self.cmd.motor_cmd[i].q = 0.0
        # self.cmd.motor_cmd[14].q = -0.03

    def _apply_arm_target_range(
        self,
        joint_target: np.ndarray,
        start_index: int,
        end_index: int,
        source_offset: int,
        kp: float,
        kd: float,
    ) -> None:
        for i in range(start_index, end_index):
            self.cmd.motor_cmd[i].mode = 1
            self.cmd.motor_cmd[i].q = float(joint_target[i - source_offset])
            self.cmd.motor_cmd[i].kp = kp
            self.cmd.motor_cmd[i].kd = kd

    def _apply_arm_slice(self, start_index: int, targets: np.ndarray) -> None:
        for offset, target in enumerate(targets):
            motor_idx = start_index + offset
            self.cmd.motor_cmd[motor_idx].mode = 1
            self.cmd.motor_cmd[motor_idx].q = float(target)
            self.cmd.motor_cmd[motor_idx].kp = self.kp[offset]
            self.cmd.motor_cmd[motor_idx].kd = self.kd[offset]


    def move_arm_pose(self, label: str) -> int | None:
        """
        Unified arm motion entry points.
        Labels: "init", "left", "right", "walk".
        Policy inference is started only after full-body "init" completes (not for "left"/"right"/"walk").
        """
        if label == "init":
            if self.current_mode != "init":
                return None
            time.sleep(0.1)
            
            skip_transition = (self._pending_init_from_walk and self.next_task_kind == "give")
            
            print("[INFO]: Initialzation started!")
            self._init_flag = True
            self._walk_arm_flag = False
            self._walk_arm_finish = False

            ret, self.low_state = self.low_level.readLowState()
            if ret != 0 and ret != -512:
                print("Failed to read low state!")
                return -1
            
            joint_target = self._read_current_arm_joints()

            if skip_transition:
                transition_angles = self.give_transition_angles
                trainsition_count = 20
                loop_count = 70
            else:
                transition_angles = self.transition_angles
                trainsition_count = 100
                loop_count = 100

            if not self.trainsition_flag and not self._init_finish:
                diff = (transition_angles - joint_target) / trainsition_count
                for _ in range(trainsition_count):
                    joint_target += diff
                    self._apply_waist_lock()
                    self._apply_arm_target_range(
                        joint_target=joint_target,
                        start_index=15,
                        end_index=MOTOR_COUNT,
                        source_offset=15,
                        kp=300.0,
                        kd=10.0,
                    )
                    self.high_level.realtimeMove(self.cmd)
                    time.sleep(self.init_dt)
                self.trainsition_flag = True
                self._init_finish = False

            diff = (self.init_angles - joint_target) / loop_count
            for _ in range(loop_count):
                joint_target += diff
                self._apply_waist_lock()
                self._apply_arm_target_range(
                    joint_target=joint_target,
                    start_index=15,
                    end_index=MOTOR_COUNT,
                    source_offset=15,
                    kp=300.0,
                    kd=10.0,
                )
                self.high_level.realtimeMove(self.cmd)
                time.sleep(self.init_dt)
            # hold the init pose for a while to ensure stable state read for policy inference   
            for _ in range(50):
                self._apply_waist_lock()
                self.high_level.realtimeMove(self.cmd)
                time.sleep(self.init_dt)
            
            self.trainsition_flag = False
            print("[INFO]: Initialzation finish!")
            self._init_flag = False
            self._init_finish = True
            
            if self.pending_task_id is not None:
                self.current_task_id = self.pending_task_id
                self.task_switch_flag = True
                self.pending_task_id = None
            
            self._pending_init_from_walk = False

            if self._init_finish and not self._init_flag:
                self.start_exclusive_thread(self.infer, "infer")
                print("[INFO]: Policy deployed!")
            return None

        if label == "left":
            ret, self.low_state = self.low_level.readLowState()
            if ret != 0 and ret != -512:
                print("Failed to read low state!")
                return -1
            loop_count = 100
            joint_target = self._read_current_arm_joints()
            diff = (self.init_angles - joint_target) / loop_count
            for _ in range(loop_count):
                joint_target += diff
                self._apply_arm_target_range(
                    joint_target=joint_target,
                    start_index=15,
                    end_index=22,
                    source_offset=15,
                    kp=300.0,
                    kd=10.0,
                )
                self.high_level.realtimeMove(self.cmd)
                time.sleep(self.init_dt)
            return None

        if label == "right":
            ret, self.low_state = self.low_level.readLowState()
            if ret != 0 and ret != -512:
                print("[move2int] Failed to read low state!")
                return -1
            loop_count = 100
            joint_target = self._read_current_arm_joints()
            diff = (self.init_angles - joint_target) / loop_count
            for _ in range(loop_count):
                joint_target += diff
                self._apply_arm_target_range(
                    joint_target=joint_target,
                    start_index=22,
                    end_index=29,
                    source_offset=15,
                    kp=300.0,
                    kd=10.0,
                )
                self.high_level.realtimeMove(self.cmd)
                time.sleep(self.init_dt)
            return None
        
        if label == "all":
            ret, self.low_state = self.low_level.readLowState()
            if ret != 0 and ret != -512:
                print("Failed to read low state!")
                return -1
            loop_count = 100
            joint_target = self._read_current_arm_joints()
            diff = (self.init_angles - joint_target) / loop_count
            for _ in range(loop_count):
                joint_target += diff
                self._apply_arm_target_range(
                    joint_target=joint_target,
                    start_index=15,
                    end_index=MOTOR_COUNT,
                    source_offset=15,
                    kp=300.0,
                    kd=10.0,
                )
                self.high_level.realtimeMove(self.cmd)
                time.sleep(self.init_dt)
            return None
        
        if label == "pre_left_align":
            ret, self.low_state = self.low_level.readLowState()
            if ret != 0 and ret != -512:
                print("Failed to read low state!")
                return -1
            loop_count = 70
            joint_target = self._read_current_arm_joints()
            diff = (self.pre_align_angles - joint_target) / loop_count
            for _ in range(loop_count):
                joint_target += diff
                self._apply_arm_target_range(
                    joint_target=joint_target,
                    start_index=15,
                    end_index=22,
                    source_offset=15,
                    kp=300.0,
                    kd=10.0,
                )
                self.high_level.realtimeMove(self.cmd)
                time.sleep(self.init_dt)
            return None
        
        if label == "pre_right_align":
            ret, self.low_state = self.low_level.readLowState()
            if ret != 0 and ret != -512:
                print("Failed to read low state!")
                return -1
            loop_count = 70
            joint_target = self._read_current_arm_joints()
            diff = (self.pre_align_angles - joint_target) / loop_count
            for _ in range(loop_count):
                joint_target += diff
                self._apply_arm_target_range(
                    joint_target=joint_target,
                    start_index=22,
                    end_index=29,
                    source_offset=15,
                    kp=300.0,
                    kd=10.0,
                )
                self.high_level.realtimeMove(self.cmd)
                time.sleep(self.init_dt)
            return None

        if label == "walk":
            if self.current_mode != "walk_arm":
                return None
            self._walk_arm_flag = True
            self._init_flag = False
            self._init_finish = False
            print("[INFO]: Move to walk arm pose!")

            ret, self.low_state = self.low_level.readLowState()
            if ret != 0 and ret != -512:
                print("[move2pos] Failed to read low state!")
                return -1

            loop_count = 100
            trainsition_count = 100
            joint_target = self._read_current_arm_joints()
            self.arm_joints_pre = self.arm_joints.copy()
            if self.last_completed_task_kind == "give":
                skip  = True
            else:
                skip = False
            if not skip and not self.trainsition_flag and not self._walk_arm_finish:
                diff = (self.transition_angles - joint_target) / trainsition_count
                for _ in range(trainsition_count):
                    joint_target += diff
                    self._apply_waist_lock()
                    self._apply_arm_target_range(
                        joint_target=joint_target,
                        start_index=15,
                        end_index=MOTOR_COUNT,
                        source_offset=15,
                        kp=300.0,
                        kd=10.0,
                    )
                    self.high_level.realtimeMove(self.cmd)
                    time.sleep(self.init_dt)
                self.trainsition_flag = True

            diff = (self.walk_arm_angles - joint_target) / loop_count
            for _ in range(loop_count):
                joint_target += diff
                self._apply_waist_lock()
                self._apply_arm_target_range(
                    joint_target=joint_target,
                    start_index=15,
                    end_index=MOTOR_COUNT,
                    source_offset=15,
                    kp=300.0,
                    kd=10.0,
                )
                self.high_level.realtimeMove(self.cmd)
                time.sleep(self.init_dt)
            self.trainsition_flag = False
            print("[INFO]: Walk arm pose reached!")
            self._walk_arm_flag = False
            self._walk_arm_finish = True

            while self.robot_mode == "homie" and not self._deploy_started and not self._init_flag:
                self.high_level.realtimeMove(self.cmd)
                time.sleep(self.inference_dt)
            return None

        raise ValueError(f"Unknown move_arm_pose label: {label!r}")

    def _configure_freeze_by_task(self, current_task: str) -> None:
        # if self._is_dual_arm_mode():
        #     self.freeze_left = False
        #     self.freeze_right = False
        #     return
        if "left" in current_task:
            self.freeze_right = True
            self.freeze_left = False
        elif "right" in current_task:
            self.freeze_left = True
            self.freeze_right = False
        else:
            self.freeze_left = False
            self.freeze_right = False

    def _update_gripper_state(self, current_task: str) -> None:
        self.left_gripper_state = self.gripper_controller.gripper_state.motor_state[0].q
        self.right_gripper_state = self.gripper_controller.gripper_state.motor_state[1].q
        self.left_gripper_state = 0.0 if self.left_gripper_state < 0.06 else 1.0
        self.right_gripper_state = 0.0 if self.right_gripper_state < 0.06 else 1.0
        if self.freeze_right and "Place" in current_task:
            self.right_gripper_state = 0.0
        if self.freeze_left and "Place" in current_task:
            self.left_gripper_state = 0.0


    def is_idle(self) -> bool:
        with self._state_lock:
            return self._state == RobotState.IDLE and not self._reset_pending

    def try_acquire_for_pick_place(self) -> bool:
        with self._state_lock:
            if self._state != RobotState.IDLE or self._reset_pending:
                return False
            self._state = RobotState.RUNNING
            self._task_done_requested = False
            self._done_event.clear()
            return True

    def try_acquire_for_reset(self) -> bool:
        with self._state_lock:
            if self._reset_pending:
                return False
            if self._state == RobotState.IDLE:
                self._state = RobotState.RUNNING
                self._task_done_requested = False
                self._done_event.clear()
                return True
            if self._state == RobotState.RUNNING:
                self._reset_pending = True
                self._task_done_requested = True
                return True
            return False

    def acquire_for_reset_blocking(self) -> bool:
        if not self.try_acquire_for_reset():
            return False
        if self._reset_pending:
            self._done_event.wait()
            with self._state_lock:
                self._state = RobotState.RUNNING
                self._task_done_requested = False
                self._done_event.clear()
                self._reset_pending = False
        return True

    def _release_to_idle(self) -> None:
        with self._state_lock:
            self._state = RobotState.IDLE
            self._task_done_requested = False
        self._done_event.set()

    # def _arm_mode(self) -> str:
    #     return str(getattr(self.args, "arm_mode", "single_arm")).lower()

    # def _is_dual_arm_mode(self) -> bool:
    #     return self._arm_mode() == "dual_arm"

    def _ensure_hand_in_prompt(self, prompt: str, hand: str) -> str:
        # if self._is_dual_arm_mode():
        #     return prompt
        if not hand:
            return prompt
        p = prompt.lower()
        has_hand = (
            "left" in p or "right" in p
            or "左手" in prompt or "右手" in prompt
            or "左臂" in prompt or "右臂" in prompt
        )
        if has_hand:
            return prompt
        hand = hand.lower()
        if hand in {"left", "左", "左手", "left_hand"}:
            return f"{prompt} with the left hand"
        if hand in {"right", "右", "右手", "right_hand"}:
            return f"{prompt} with the right hand"
        return prompt

    def _mark_current_task_done(self, stable_left_gripper: float, stable_right_gripper: float) -> None:
        task_lower = self.current_task.lower()
        action = "pick" if "pick" in task_lower else "place"
        self.move_arm_pose("all")
        if "left" in task_lower:
            # self.move_arm_pose("left")
            mark_task_done(self.current_task, self.hand_state)
            return

        if "right" in task_lower:
            # self.move_arm_pose("right")
            mark_task_done(self.current_task, self.hand_state)
            return
        
        left_holding = self.hand_state["left"]["holding"]
        right_holding = self.hand_state["right"]["holding"]
        
        task_object = get_task_object(self.current_task)

        inferred_hand = None
        if action == "pick":
            if not left_holding and right_holding and stable_left_gripper == 1:
                inferred_hand = "left"
            elif not right_holding and left_holding and stable_right_gripper == 1:
                inferred_hand = "right"

            elif stable_left_gripper == 1 and stable_right_gripper == 0:
                inferred_hand = "left"
            elif stable_right_gripper == 1 and stable_left_gripper == 0:
                inferred_hand = "right"
        if self.hand_state["left"]["item"] == task_object:
            inferred_hand = "left"
        elif self.hand_state["right"]["item"] == task_object:
            inferred_hand = "right"

        # if inferred_hand == "left":
        #     self.move_arm_pose("left")
        # elif inferred_hand == "right":
        #     self.move_arm_pose("right")
        # else:
        #     if "left" in self.current_task:
        #         self.move_arm_pose("left")
        #     elif "right" in self.current_task:
        #         self.move_arm_pose("right")
        # self.move_arm_pose("all")
        mark_task_done(
            self.current_task,
            self.hand_state,
            inferred_hand=inferred_hand,
        )
        
    def _rebuild_task_with_hand_state(self, task: str) -> str:
        # if self._is_dual_arm_mode():
        #     return task
        task_lower = task.lower()

        if "left" in task_lower or "right" in task_lower:
            return task

        left_holding = self.hand_state["left"]["holding"]
        right_holding = self.hand_state["right"]["holding"]

        task_object = get_task_object(task)
        left_item = self.hand_state["left"]["item"]
        right_item = self.hand_state["right"]["item"]

        is_pick = "pick" in task_lower
        is_place = ("place" in task_lower) or ("give me" in task_lower)

        if is_pick:
            if not left_holding and not right_holding:
                return task
            if left_holding and not right_holding:
                return f"{task} with the right hand"
            if right_holding and not left_holding:
                return f"{task} with the left hand"
            return task

        if is_place:
            if task_object == left_item and task_object != right_item:
                if "place" in task_lower:
                    return f"{task} with the left hand"
                else:
                    return f"{task} in the left hand"

            if task_object == right_item: #and task_object != left_item:
                if "place" in task_lower:
                    return f"{task} with the right hand"
                else:
                    return f"{task} in the right hand"
            return task
        return task

    def infer(self):
        time.sleep(0.06)
        self._deploy_started = True
        model = None
        async_runner = None
        try:
            model = ModelClient(
                host=self.args.host,
                port=self.args.port,
                image_size=list(self.args.resize_size),
                chunk_transition_mode=self.args.chunk_transition_mode,
                action_horizon=self.args.action_horizon,
                gr00t_rtc_overlap_steps=self.args.gr00t_rtc_overlap_steps,
                gr00t_rtc_frozen_steps=self.args.gr00t_rtc_frozen_steps,
                gr00t_rtc_ramp_rate=self.args.gr00t_rtc_ramp_rate,
                gr00t_rtc_debug=self.args.gr00t_rtc_debug,
            )
            self._deploy_flag = True
            # self.left_gripper_smoother = GripperSmoother()
            # self.left_gripper_smoother = GripperSmoother(window=2)
            # self.right_gripper_smoother = GripperSmoother(window=2)
            
            # self.left_gripper_smoother = GripperSmoother(window=5, window_long=15)
            # self.right_gripper_smoother = GripperSmoother(window=5, window_long=10)
            self.left_gripper_smoother = GripperSmoother(window=1, window_long=1)
            self.right_gripper_smoother = GripperSmoother(window=1, window_long=1)
            
            obs_builder = ObservationBuilder(self)
            action_executor = ActionExecutor(self)
            sync_runner = SyncRunner(self, model, obs_builder, action_executor)
            async_runner = AsyncRunner(self, model, obs_builder, action_executor)
            while not self.stop_program and self.current_mode == "infer" and self._deploy_flag and not getattr(self, "_task_done_requested", False):
                if self.task_switch_flag:
                    self.task_switch_flag = False
                    self.task_finished = False
                    self.freeze_left = False
                    self.freeze_right = False
                    self.task_done_flag = False
                    self.task_start_time = time.time()
                    self.done_flag_list = deque([0.0] * self.args.done_flag_window, maxlen=self.args.done_flag_window)
                    self.left_gripper_flag_list = deque([0.0] * self.args.gripper_window, maxlen=self.args.gripper_window)
                    self.right_gripper_flag_list = deque([0.0] * self.args.gripper_window, maxlen=self.args.gripper_window)
                    if self.current_task_id in self.task_list:
                        current_task = self.task_list[self.current_task_id]
                        self.current_task = current_task
                    else:
                        current_task = getattr(self, "current_task", self.task_list.get(self.current_task_id))
                    print(f"[TASK] Switched to: {current_task}")
                else:
                    current_task = self.task_list.get(self.current_task_id, getattr(self, "current_task", ""))
                
                current_task = self._rebuild_task_with_hand_state(current_task)
                self.current_task = current_task
                print("INFO: rebuild_task_with_hand_state",self.current_task)
                
                if self.args.enable_pre_align:
                    # 抓取任务的时候，需要先移动到 agile 位置
                    if "pick" in current_task.lower() and "left" in current_task:
                        print("############################### pre align")
                        self.move_arm_pose("pre_left_align")
                    if "pick" in current_task.lower() and "right" in current_task:
                        print("############################### pre align")
                        self.move_arm_pose("pre_right_align")   
                    
                if self.args.enable_inactive_arm_freeze:
                    self._configure_freeze_by_task(current_task)
                mode = str(getattr(self.args, "run_mode", "sync")).lower()
                if mode == "sync":
                    sync_runner.run(current_task)
                elif mode == "async":
                    async_runner.run(current_task)
                else:
                    raise ValueError(
                        f"Unsupported run_mode={mode}. Only sync/async are supported."
                    )
        finally:
            if async_runner is not None:
                async_runner.close_worker()
            if model is not None and hasattr(model, "close"):
                model.close()


    def agent_pick_command_exec(self, prompt: str, hand: str) -> None:
        if not self.try_acquire_for_pick_place():
            raise RuntimeError("VLA is busy, previous task not finished")
        try:
            prompt = self._ensure_hand_in_prompt(prompt, hand)
            self.current_task = prompt
            self.current_task_id = ""
            self.task_switch_flag = True
            self.move_arm_pose("init")
            self.infer()
        finally:
            self._release_to_idle()

    def agent_place_command_exec(self, prompt: str, hand: str) -> None:
        if not self.try_acquire_for_pick_place():
            raise RuntimeError("VLA is busy, previous task not finished")
        try:
            prompt = self._ensure_hand_in_prompt(prompt, hand)
            self.current_task = prompt
            self.current_task_id = ""
            self.task_switch_flag = True
            self.move_arm_pose("init")
            self.infer()
        finally:
            self._release_to_idle()

    def agent_reset_command_exec(self) -> None:
        if not self.acquire_for_reset_blocking():
            raise RuntimeError("reset already pending")
        try:
            ret, current_mode = self.high_level.GetRobotMode()
            if ret != 0:
                raise RuntimeError(f"GetRobotMode failed, ret={ret}")
            if current_mode == 4:
                return
            if current_mode != 10:
                raise RuntimeError(f"robot mode {current_mode} is not HalfWalk(10), reset skipped")
            self.move_arm_pose("walk")
            ret = self.high_level.WalkRunMode()
            if ret != 0:
                raise RuntimeError(f"WalkRunMode failed, ret={ret}")
        finally:
            self._release_to_idle()


    # =========================
    # 主控制循环
    # =========================
    def run(self):
        self.start_keyboard_listener()

        self.gripper_controller.open_gripper()
        self.trainsition_flag = True
        print("[INFO]: AI agent action servers ready (pick_action / place_action / reset_action)")
        while True:
            ret, self.low_state = self.low_level.readLowState()
            if ret != 0 and ret != -512:
                print("[run] Failed to read low state!", ret)
                return -1

            if self.stop_program:
                print("[INFO]: Stop!!!")
                break

            time.sleep(1.0)

    def start_keyboard_listener(self):
        if USE_PYNPUT:
            listener = keyboard.Listener(on_press=make_on_press(self))
            listener.daemon = True
            listener.start()
            print("[INFO]: Keyboard activated with pynput (GUI/X11 mode)!")
        else:
            listener = SSHKeyboardListener(on_press=make_on_press(self))
            listener.start()
            print("[INFO]: Keyboard activated in SSH terminal mode!")
            print("[INFO]: Press 1-8 to switch task, i to start inference, q to quit.")
        return listener