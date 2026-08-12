# Upper-body enable control example (上半身使能控制示例)
# English: Control upper body enable/disable state

import humanoid_sdk_py
import humanoid_sdk_py.h10w as h10w
import time

h10w_system = h10w.H10wSystem()
time.sleep(1)

print("=== 上半身使能控制示例 / Upper-body enable control example ===")
ret = h10w_system.upperEnableControl(humanoid_sdk_py.EnableState.ENABLE_ON)
if ret == 0:
    print("上半身使能控制成功 / Upper body enabled successfully")
else:
    print("上半身使能控制失败 / Upper body enable failed")

time.sleep(1)

ret = h10w_system.upperEnableControl(humanoid_sdk_py.EnableState.ENABLE_OFF)
if ret == 0:
    print("上半身失能控制成功 / Upper body disabled successfully")
else:
    print("上半身失能控制失败 / Upper body disable failed")
