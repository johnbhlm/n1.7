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
    print(
        "=== h2x 实时运动控制示例 ,仅支持在half_walk_mode模式下控制上半身，下半身暂时不要控制 ==="
    )

    a = 0
    high_level = h2x.H2xHighLevel()
    ret, robot_mode = high_level.GetRobotMode()
    if ret != 0 or robot_mode != 10:
        print("当前未处于半蹲行走模式，错误码：", ret, "当前模式：", robot_mode)
        return ret if ret != 0 else -1

    times = 0
    cmd = h2x.RealtimeCmd()
    cmd.time = 0.1
    while True:
        # Upper body: waist (12-14), left arm (15-21), right arm (22-28)
        # Hold at default position with moderate gains.
        for i in range(12, 29):
            cmd.motor_cmd[i].mode = 0
            cmd.motor_cmd[i].q = 0
            # Waist roll/pitch get higher stiffness for stability
            if i == 13 or i == 14:
                cmd.motor_cmd[i].mode = 1
                cmd.motor_cmd[i].kp = 100.0
            else:
                cmd.motor_cmd[i].kp = 50.0
            cmd.motor_cmd[i].kd = 2.0
        # 腰部转0.5弧度
        if times < 50:
            cmd.motor_cmd[15].mode = 1
            cmd.motor_cmd[15].kp = 100.0
            cmd.motor_cmd[15].kd = 5.0
            a += 0.01
            cmd.motor_cmd[15].q = a
        elif times < 100:
            a -= 0.01
            cmd.motor_cmd[15].mode = 1
            cmd.motor_cmd[15].kp = 100.0
            cmd.motor_cmd[15].kd = 5.0
            cmd.motor_cmd[15].q = a
        else:
            cmd.motor_cmd[15].mode = 1
            cmd.motor_cmd[15].kp = 100.0
            cmd.motor_cmd[15].kd = 5.0
            cmd.motor_cmd[15].q = a
            times = 0
        print(f"pos: {cmd.motor_cmd[15].q}")
        ret = high_level.realtimeMove(cmd)
        if ret != 0:
            print(f"实时运动控制失败, 错误码：{ret}")
            return -1

        time.sleep(0.2)
        times += 1

    print("实时运动控制完成")
    return 0


if __name__ == "__main__":
    exit(main())
