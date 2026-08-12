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

print("=== h2x 执行舞蹈【1】示例 ===")
ret, robot_mode = h2x_high_level.GetRobotMode()
if ret != 0:
    print("获取当前模式请求失败，错误码：", ret)
    exit(ret)
if robot_mode != 4:
    print("当前未处于走跑模式，当前模式：", robot_mode)
    exit(1)
ret = h2x_high_level.DanceMode()
if ret == 0:
    print("进入舞蹈模式成功")
else:
    print("进入舞蹈模式失败，错误码：", ret)
    exit(ret)


ret = h2x_high_level.Dance("DanceQingpingguo")
if ret == 0:
    print("开始执行舞蹈 DanceQingpingguo 成功")
else:
    print("开始执行舞蹈 DanceQingpingguo 失败, 错误码：", ret)
