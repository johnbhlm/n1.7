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

print("=== h2x 蹲下示例 ===")
ret = h2x_high_level.SquatDown()
if ret == 0:
    print("蹲下成功")
else:
    print("蹲下失败，错误码：", ret)
