#!
#!注意事项
#!
#!1. 机器人模式切换需要确保当前状态安全
#!2. 移动命令需要在合适的模式下执行
#!3. 所有操作结果通过result字段返回，0表示成功，非0表示错误


import humanoid_sdk_py.h2x as h2x

h2x_high_level = h2x.H2xHighLevel()

print("=== h2x 停止运动示例 ===")
ret = h2x_high_level.StopMove()
if ret == 0:
    print("停止运动成功")
else:
    print("停止运动失败，错误码：", ret)
