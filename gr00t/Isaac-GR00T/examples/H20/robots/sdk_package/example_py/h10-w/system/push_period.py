#!/usr/bin/env python3

import humanoid_sdk_py
import humanoid_sdk_py.h10w as h10w


def main():
    print("=== 设置与获取推送周期示例 ===")
    system = h10w.H10wSystem()

    ret, old_period = system.getPushPeriod()
    if ret != 0 or old_period is None:
        print("获取当前推送周期失败")
        return -1
    print("当前推送周期: {} ms".format(old_period))

    new_period = 20
    if system.setPushPeriod(new_period) != 0:
        print("设置推送周期失败")
        return -1
    print("设置推送周期成功: {} ms".format(new_period))

    ret, current_period = system.getPushPeriod()
    if ret != 0 or current_period is None:
        print("再次获取推送周期失败")
        return -1
    print("当前推送周期(复核): {} ms".format(current_period))

    return 0


if __name__ == "__main__":
    exit(main())
