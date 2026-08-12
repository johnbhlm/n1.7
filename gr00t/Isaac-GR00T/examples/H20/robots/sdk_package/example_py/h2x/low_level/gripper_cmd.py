#!/usr/bin/env python3
#!
#!注意事项
#!
#!1. 机器人模式切换需要确保当前状态安全
#!2. 移动命令需要在合适的模式下执行
#!3. 所有操作结果通过result字段返回，0表示成功，非0表示错误


import humanoid_sdk_py
from humanoid_sdk_py import h2x
import time


def main():
    print("=== Gripper Command Test ===")

    # Initialize low level object
    low_level = h2x.H2xLowLevel()

    # Test gripper control for 10 seconds
    DURATION_MS = 10000
    CMD_INTERVAL_MS = 5000
    cmd_count = DURATION_MS // CMD_INTERVAL_MS

    for i in range(cmd_count):
        start_time = time.time()

        # Create gripper command
        gripper_cmd = h2x.GripperCmd()

        # Alternate between open and close
        open_gripper = (i % 2 == 0)

        # Left gripper
        gripper_cmd.motorCmdGripper[0].mode = 1
        gripper_cmd.motorCmdGripper[0].operation_mode = 0
        gripper_cmd.motorCmdGripper[0].q = 0.08 if open_gripper else 0.0
        gripper_cmd.motorCmdGripper[0].dq_percentage = 50
        gripper_cmd.motorCmdGripper[0].acc_percentage = 50
        gripper_cmd.motorCmdGripper[0].finger_force = 10.0

        # Right gripper
        gripper_cmd.motorCmdGripper[1].mode = 1
        gripper_cmd.motorCmdGripper[1].operation_mode = 0
        gripper_cmd.motorCmdGripper[1].q = 0.08 if open_gripper else 0.0
        gripper_cmd.motorCmdGripper[1].dq_percentage = 50
        gripper_cmd.motorCmdGripper[1].acc_percentage = 50
        gripper_cmd.motorCmdGripper[1].finger_force = 10.0

        # Send gripper command
        ret = low_level.writeGripperCmd(gripper_cmd)
        if ret != 0:
            print("Failed to write gripper command!")
            return -1

        print(f"Gripper {'OPEN' if open_gripper else 'CLOSE'}")

        elapsed_time = (time.time() - start_time) * 1000
        sleep_time = CMD_INTERVAL_MS - elapsed_time
        if sleep_time > 0:
            time.sleep(sleep_time / 1000.0)

    print("Gripper command test completed successfully")
    return 0


if __name__ == "__main__":
    exit(main())
