#!
#!注意事项
#!
#!1. 机器人模式切换需要确保当前状态安全
#!2. 移动命令需要在合适的模式下执行
#!3. 所有操作结果通过result字段返回，0表示成功，非0表示错误


import humanoid_sdk_py.h2x as h2x
import time

h2x_high_level = h2x.H2xHighLevel()
time.sleep(1)

ret, robot_mode = h2x_high_level.GetRobotMode()
if ret != 0 or robot_mode != 4:
    print("当前未处于走跑模式，错误码：", ret, "当前模式：", robot_mode)
    raise SystemExit(ret if ret != 0 else 1)

print("=== h2x 进入爬楼梯（盲走）模式示例 ===")
ret = h2x_high_level.ClimbStairsMode()
if ret == 0:
    print("进入盲走模式请求成功")
else:
    print("进入盲走模式请求失败，错误码：", ret)

ret = h2x_high_level.waitRunning(5000)
if ret == 0:
    print("模式切换成功")
else:
    print("模式切换失败，错误码：", ret)
