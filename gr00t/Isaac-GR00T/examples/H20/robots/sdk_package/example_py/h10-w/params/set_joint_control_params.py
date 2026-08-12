#!/usr/bin/env python3

import humanoid_sdk_py
import humanoid_sdk_py.h10w as h10w
import time


def main():
    print("=== 设置关节空间控制参数示例 ===")
    params = h10w.H10wParams()
    time.sleep(1)

    set_params = [
        (h10w.L_ARM_JOINT1, 500.0, 30.0, 40.0),
        (h10w.L_ARM_JOINT2, 520.0, 32.0, 42.0),
        (h10w.R_ARM_JOINT1, 500.0, 30.0, 40.0),
    ]

    ret = params.setJointControlParams(set_params)
    if ret != 0:
        print("设置关节空间控制参数失败")
        return -1
    print("设置关节空间控制参数成功")
    return 0


if __name__ == "__main__":
    exit(main())
