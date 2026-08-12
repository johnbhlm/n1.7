#!/usr/bin/env python3

import humanoid_sdk_py
import humanoid_sdk_py.h10w as h10w
import time


def main():
    print("=== 获取关节空间控制参数示例 ===")
    params = h10w.H10wParams()
    time.sleep(1)

    ret, joint_list = params.getJointControlParams()
    if ret != 0 or joint_list is None:
        print("获取关节空间控制参数失败")
        return -1

    print("获取关节空间控制参数成功，共 {} 项".format(len(joint_list)))
    for item in joint_list:
        joint_index, kp, kd, kpv = item
        print(
            "  joint={}, kp={:.3f}, kd={:.3f}, kpv={:.3f}".format(
                joint_index, kp, kd, kpv
            )
        )
    return 0


if __name__ == "__main__":
    exit(main())
