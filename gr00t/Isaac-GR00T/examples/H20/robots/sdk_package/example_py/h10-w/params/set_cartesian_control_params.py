#!/usr/bin/env python3

import humanoid_sdk_py
import humanoid_sdk_py.h10w as h10w
import time


def main():
    print("=== 设置笛卡尔空间控制参数示例 ===")
    params = h10w.H10wParams()
    time.sleep(1)

    kp6 = [10000.0] * 6
    kd6 = [300.0] * 6
    kpv6 = [800.0] * 6
    kp6_r = [10500.0] * 6
    kd6_r = [320.0] * 6
    kpv6_r = [850.0] * 6

    set_params = [
        (int(h10w.CartIndex.LEFT_ARM), kp6, kd6, kpv6),
        (int(h10w.CartIndex.RIGHT_ARM), kp6_r, kd6_r, kpv6_r),
    ]

    ret = params.setCartesianControlParams(set_params)
    if ret != 0:
        print("设置笛卡尔空间控制参数失败")
        return -1
    print("设置笛卡尔空间控制参数成功")
    return 0


if __name__ == "__main__":
    exit(main())
