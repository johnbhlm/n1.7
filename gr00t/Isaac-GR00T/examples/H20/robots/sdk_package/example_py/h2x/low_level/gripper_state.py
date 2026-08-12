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
    print("=== Gripper State Reading Test ===")

    # Initialize low level object
    low_level = h2x.H2xLowLevel()

    # Read gripper state for 10 seconds
    DURATION_MS = 10000
    READ_INTERVAL_MS = 500
    read_count = DURATION_MS // READ_INTERVAL_MS

    for i in range(read_count):
        start_time = time.time()

        # Read gripper state
        ret, gripper_state = low_level.readGripperState()
        if ret != 0:
            print("Failed to read gripper state!")
            return -1

        # Print gripper state for left and right
        for j in range(2):
            side = "Left" if j == 0 else "Right"
            m = gripper_state.motorStateGripper[j]
            print(f"=== {side} Gripper State {i + 1} ===")
            print(f"  Mode: {m.mode}")
            print(f"  Operation Mode: {m.operation_mode}")
            print(f"  Arrive Signal: {m.arrive_signal}")
            print(f"  Position (q): {m.q:.4f} rad")
            print(f"  Velocity (dq): {m.dq:.4f} rad/s")
            print(f"  Finger1 Force: {m.finger1_force:.4f} N")
            print(f"  Finger2 Force: {m.finger2_force:.4f} N")
            print(f"  Temperature: {m.temperature:.1f} C")
            print(f"  Current: {m.cur:.4f} A")
            print(f"  Error Code: {m.error_code}")
            print(f"  Warning Code: {m.warning_code}")
        print(f"  Tick: {gripper_state.tick}")
        print(f"  Is Data Valid: {gripper_state.is_data_valid}")
        print()

        elapsed_time = (time.time() - start_time) * 1000
        sleep_time = READ_INTERVAL_MS - elapsed_time
        if sleep_time > 0:
            time.sleep(sleep_time / 1000.0)

    print("Gripper state reading test completed successfully")
    return 0


if __name__ == "__main__":
    exit(main())
