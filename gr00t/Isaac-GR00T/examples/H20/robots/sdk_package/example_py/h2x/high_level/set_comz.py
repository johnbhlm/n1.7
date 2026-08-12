#!
#!注意事项
#!
#!1. 机器人模式切换需要确保当前状态安全
#!2. 移动命令需要在合适的模式下执行
#!3. 所有操作结果通过result字段返回，0表示成功，非0表示错误


import humanoid_sdk_py.h2x as h2x

h2x_high_level = h2x.H2xHighLevel()
h2x_system = h2x.H2xSystem()
h2x_system.clearError()
ret, robot_mode = h2x_high_level.GetRobotMode()
if ret != 0 or robot_mode != 10:
    print("当前未处于半蹲行走模式，错误码：", ret, "当前模式：", robot_mode)
    exit(ret if ret != 0 else 1)

print("=== h2x 设置质心高度示例 ===")
ret = h2x_high_level.SetCoMZ(0.78)
if ret == 0:
    print("设置质心高度成功")
else:
    print("设置质心高度失败，错误码：", ret)
