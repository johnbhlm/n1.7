// get_controller_message.cpp

#include <iostream>
#include <iomanip>
#include "h10-w/h10w_status.h"
#include "common/common_def.h"

using namespace humanoid;
using namespace humanoid::h10w;

int main() {
  std::cout << "=== 获取机器人当前控制器状态信息示例 ===" << std::endl;

  H10wStatus status;
  ControllerMessageParams controllerMessage;

  int result = status.getControllerMessage(controllerMessage);
  if (result != 0) {
    std::cerr << "获取控制器信息失败，错误码: " << result << std::endl;
    return -1;
  }

  std::cout << "\n=== 控制器状态信息 ===" << std::endl;

  std::cout << "控制器启用状态: ";
  if (controllerMessage.controller_enabled_state == 0) {
    std::cout << "未启用" << std::endl;
  } else if (controllerMessage.controller_enabled_state == 1) {
    std::cout << "已启用" << std::endl;
  } else {
    std::cout << "未知状态 ("
              << static_cast<int>(controllerMessage.controller_enabled_state)
              << ")" << std::endl;
  }

  // common_def: 0 下电 1 上电
  std::cout << "机器人电源状态: ";
  if (controllerMessage.power_state == 0) {
    std::cout << "下电状态" << std::endl;
  } else if (controllerMessage.power_state == 1) {
    std::cout << "上电状态" << std::endl;
  } else {
    std::cout << "未知状态 (" << static_cast<int>(controllerMessage.power_state)
              << ")" << std::endl;
  }

  std::cout << "使能状态 enable_state (uint32): "
            << controllerMessage.enable_state << std::endl;

  std::cout << "\n=== 状态信息获取完成 ===" << std::endl;
  return 0;
}
