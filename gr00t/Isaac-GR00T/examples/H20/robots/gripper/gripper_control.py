from __future__ import annotations

from collections import deque
import struct
import zlib

from rclpy.node import Node
from rclpy.qos import DurabilityPolicy, HistoryPolicy, QoSProfile, ReliabilityPolicy
from h2x.msg import GripperCmd, GripperState


LEFT_GRIPPER_CLOSE_POS = 0.120
RIGHT_GRIPPER_CLOSE_POS = 0.120

# class GripperSmoother:
#     def __init__(self, window: int = 10):
#         self.buffer = deque(maxlen=window)
#         self.stable_value = 0

#     def update(self, value: float) -> int:
#         self.buffer.append(value)
#         if len(self.buffer) == self.buffer.maxlen:
#             if all(x == 1 for x in self.buffer):
#                 self.stable_value = 1
#             elif all(x == 0 for x in self.buffer):
#                 self.stable_value = 0
#         return self.stable_value

class GripperSmoother:
    def __init__(self, window: int = 3, window_long: int = 10):
        self.buffer = deque(maxlen=window)
        self.buffer_long = deque(maxlen=window_long)
        self.stable_value = 0
        self.stable_value_long = 0

    def update(self, value: float) -> int:
        self.buffer.append(value)
        self.buffer_long.append(value)
        if len(self.buffer) == self.buffer.maxlen:
            if all(x == 1 for x in self.buffer):
                self.stable_value = 1
            elif all(x == 0 for x in self.buffer):
                self.stable_value = 0
        if len(self.buffer_long) == self.buffer_long.maxlen:
            if all(x == 1 for x in self.buffer_long):
                self.stable_value_long = 1
            elif all(x == 0 for x in self.buffer_long):
                self.stable_value_long = 0
        return self.stable_value, self.stable_value_long


class GripperCmdCRC:
    __MOTOR_CMD_FMT = "<BB f H H f 4I"

    @classmethod
    def compute_crc(cls, cmd: GripperCmd) -> int:
        data = b""
        for i in range(2):
            motor = cmd.motor_cmd[i]
            data += struct.pack(
                cls.__MOTOR_CMD_FMT,
                motor.mode,
                motor.operation_mode,
                motor.q,
                motor.dq_percentage,
                motor.acc_percentage,
                motor.finger_force,
                motor.reserved[0],
                motor.reserved[1],
                motor.reserved[2],
                motor.reserved[3],
            )
        return zlib.crc32(data) & 0xFFFFFFFF


class GripperController(Node):
    def __init__(self):
        super().__init__("gripper_controller")

        publisher_qos = QoSProfile(
            reliability=ReliabilityPolicy.BEST_EFFORT,
            durability=DurabilityPolicy.VOLATILE,
            history=HistoryPolicy.KEEP_LAST,
            depth=10,
        )
        subscriber_qos = QoSProfile(
            reliability=ReliabilityPolicy.BEST_EFFORT,
            durability=DurabilityPolicy.VOLATILE,
            history=HistoryPolicy.KEEP_LAST,
            depth=10,
        )

        self.gripper_pub = self.create_publisher(GripperCmd, "/gripper_cmd", publisher_qos)
        self.gripper_sub = self.create_subscription(
            GripperState,
            "/gripper_state",
            self.gripper_state_callback,
            subscriber_qos,
        )

        self.gripper_state = None
        self.timer = None

    def gripper_state_callback(self, msg: GripperState):
        self.gripper_state = msg

    def _create_default_command(self) -> GripperCmd:
        cmd = GripperCmd()
        for i in range(2):
            cmd.motor_cmd[i].mode = 1
            cmd.motor_cmd[i].operation_mode = 1
            cmd.motor_cmd[i].dq_percentage = 100
            cmd.motor_cmd[i].acc_percentage = 100
            cmd.motor_cmd[i].finger_force = 100.0
            cmd.motor_cmd[i].reserved = [0, 0, 0, 0]
        return cmd

    def create_gripper_command(self, position: float) -> GripperCmd:
        cmd = self._create_default_command()
        cmd.motor_cmd[0].q = position
        cmd.motor_cmd[1].q = position
        cmd.crc = GripperCmdCRC.compute_crc(cmd)
        return cmd

    def create_left_gripper_command(self, position: float) -> GripperCmd:
        cmd = self._create_default_command()
        cmd.motor_cmd[0].q = position
        cmd.crc = GripperCmdCRC.compute_crc(cmd)
        return cmd

    def create_right_gripper_command(self, position: float) -> GripperCmd:
        cmd = self._create_default_command()
        cmd.motor_cmd[1].q = position
        cmd.crc = GripperCmdCRC.compute_crc(cmd)
        return cmd

    def create_left_right_gripper_command(self, position_left: float, position_right: float) -> GripperCmd:
        cmd = self._create_default_command()
        cmd.motor_cmd[0].q = position_left
        cmd.motor_cmd[1].q = position_right
        cmd.crc = GripperCmdCRC.compute_crc(cmd)
        return cmd

    def set_gripper(self, position: float) -> None:
        self.gripper_pub.publish(self.create_gripper_command(position))

    def set_left_right_gripper(self, position_left: float, position_right: float) -> None:
        self.gripper_pub.publish(self.create_left_right_gripper_command(position_left, position_right))

    def set_left_gripper(self, position: float) -> None:
        self.gripper_pub.publish(self.create_left_gripper_command(position))

    def set_right_gripper(self, position: float) -> None:
        self.gripper_pub.publish(self.create_right_gripper_command(position))

    def open_gripper(self) -> None:
        self.set_gripper(0.01)

    def open_left_gripper(self) -> None:
        self.set_left_gripper(0.01)

    def open_right_gripper(self) -> None:
        self.set_right_gripper(0.01)

    def close_gripper(self) -> None:
        self.set_gripper(0.1)

    def close_left_gripper(self) -> None:
        self.set_left_gripper(LEFT_GRIPPER_CLOSE_POS)

    def close_right_gripper(self) -> None:
        self.set_right_gripper(RIGHT_GRIPPER_CLOSE_POS)
