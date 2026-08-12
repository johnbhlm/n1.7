#!/usr/bin/env python3

import humanoid_sdk_py
import humanoid_sdk_py.h10w as h10w
import time


def main():
    print("=== 获取笛卡尔空间控制参数示例 ===")
    params = h10w.H10wParams()
    time.sleep(1)

    ret, cart_list = params.getCartesianControlParams()
    if ret != 0 or cart_list is None:
        print("获取笛卡尔空间控制参数失败")
        return -1

    print("获取笛卡尔空间控制参数成功，共 {} 项".format(len(cart_list)))
    for item in cart_list:
        cart_index, kp, kd, kpv = item
        print("  cart={}".format(cart_index))
        print(
            "    kp : [{:.3f}, {:.3f}, {:.3f}, {:.3f}, {:.3f}, {:.3f}]".format(
                kp[0], kp[1], kp[2], kp[3], kp[4], kp[5]
            )
        )
        print(
            "    kd : [{:.3f}, {:.3f}, {:.3f}, {:.3f}, {:.3f}, {:.3f}]".format(
                kd[0], kd[1], kd[2], kd[3], kd[4], kd[5]
            )
        )
        print(
            "    kpv: [{:.3f}, {:.3f}, {:.3f}, {:.3f}, {:.3f}, {:.3f}]".format(
                kpv[0], kpv[1], kpv[2], kpv[3], kpv[4], kpv[5]
            )
        )
    return 0


if __name__ == "__main__":
    exit(main())
