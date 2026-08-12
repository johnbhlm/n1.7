import humanoid_sdk_py
import humanoid_sdk_py.h10w as h10w
import time

h10w_system = h10w.H10wSystem()
time.sleep(1)

print("=== 关节0度位置标定示例 ===")

ret = h10w_system.upperEnableControl(humanoid_sdk_py.EnableState.ENABLE_OFF)
if ret == 0:
    print("上半身失能控制成功 / Upper body disabled successfully")
else:
    print("上半身失能控制失败 / Upper body disable failed")

ret = h10w_system.powerControl(humanoid_sdk_py.PowerState.POWER_OFF)
if ret == 0:
    print("上半身上电控制成功")
else:
    print("上半身上电控制失败")

ret = h10w_system.calibrateZero(h10w.L_ARM_JOINT1)
print("标定关节 ", h10w.L_ARM_JOINT1, ("成功" if ret == 0 else " 失败"))

ret = h10w_system.saveJointParameters(h10w.L_ARM_JOINT1)
print("保存关节 ", h10w.L_ARM_JOINT1, ("成功" if ret == 0 else " 失败"))
