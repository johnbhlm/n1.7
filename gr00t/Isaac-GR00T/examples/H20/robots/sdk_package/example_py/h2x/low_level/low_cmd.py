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
import math


def main():
    print("=== Low Level Command Test ===")

    # Initialize objects
    system = h2x.H2xSystem()
    low_level = h2x.H2xLowLevel()

    MAX_POS = math.pi * 10.0 / 180.0
    DURATION = 10  # ms
    TOTAL_TIME = 2000  # ms
    TEST_JOINT_INDEX = h2x.L_HIP_YAW - 1
    control_count = TOTAL_TIME // DURATION
    low_cmd = h2x.LowCmd()

    ret, low_state = low_level.readLowState()
    if ret != 0:
        print("read low state failed!")
        return -1
    init_pos = low_state.motor_state[TEST_JOINT_INDEX].q

    if system.enableController(False) != 0:
        print("disable controller failed!")
        return -1

    try:
        for i in range(control_count):
            start_time = time.time()

            pos = math.sin(math.pi * i * DURATION / 1000.0) * MAX_POS
            vel = math.cos(math.pi * i * DURATION / 1000.0) * MAX_POS * math.pi

            low_cmd.motor_cmd[TEST_JOINT_INDEX].mode = 1
            low_cmd.motor_cmd[TEST_JOINT_INDEX].kp = 15.0
            low_cmd.motor_cmd[TEST_JOINT_INDEX].kd = 0.5
            low_cmd.motor_cmd[TEST_JOINT_INDEX].q = init_pos + pos
            low_cmd.motor_cmd[TEST_JOINT_INDEX].dq = vel

            if low_level.writeLowCmd(low_cmd) != 0:
                print("pub low cmd failed!")
                return 0
            elapsed_time = (time.time() - start_time) * 1000
            sleep_time = DURATION - elapsed_time
            if sleep_time > 0:
                time.sleep(sleep_time / 1000.0)
    finally:
        system.enableController(True)

    ret, enable = system.isControllerEnabled()
    print(f"ret = {ret}; enable = {enable}")
    print("Low level command test completed successfully")
    return 0


if __name__ == "__main__":
    exit(main())
