import humanoid_sdk_py
import humanoid_sdk_py.h10w as h10w
import time

print("=== 底盘使能控制 ===")
h10w_chassis = h10w.H10wChassis()
time.sleep(1)
ret = h10w_chassis.baseEnableControl(humanoid_sdk_py.EnableState.ENABLE_ON)
if ret != 0:
    print("底盘使能打开失败。")
    exit(-1)
print("底盘使能打开成功。")

time.sleep(1)
ret = h10w_chassis.baseEnableControl(humanoid_sdk_py.EnableState.ENABLE_OFF)
if ret != 0:
    print("底盘使能关闭失败。")
    exit(-1)
print("底盘使能关闭成功。")
