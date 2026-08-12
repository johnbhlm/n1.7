import humanoid_sdk_py
from humanoid_sdk_py import h10w


def get_controller_status():
    """获取控制器状态信息"""
    print("=== 获取机器人当前控制器状态信息示例 ===")

    h10w_status = h10w.H10wStatus()
    ret, controller_msg = h10w_status.getControllerMessage()

    if ret != 0 or controller_msg is None:
        print(f"获取控制器信息失败，错误码: {ret}")
        return False

    print("\n=== 控制器状态信息 ===")

    print("控制器启用状态: ", end="")
    if controller_msg.controller_enabled_state == 0:
        print("未启用")
    elif controller_msg.controller_enabled_state == 1:
        print("已启用")
    else:
        print(f"未知状态 ({controller_msg.controller_enabled_state})")

    # common_def: 0 下电 1 上电
    print("机器人电源状态: ", end="")
    if controller_msg.power_state == 0:
        print("下电状态")
    elif controller_msg.power_state == 1:
        print("上电状态")
    else:
        print(f"未知状态 ({controller_msg.power_state})")

    print(f"使能状态 enable_state: {controller_msg.enable_state}")

    return True


get_controller_status()
