/*
 * 注意事项
 *
 * 1. 机器人模式切换需要确保当前状态安全
 * 2. 移动命令需要在合适的模式下执行
 * 3. 所有操作结果通过result字段返回，0表示成功，非0表示错误
 */

#include <iostream>

#include "h2x/h2x_high_level.h"

using namespace humanoid;
using namespace humanoid::h2x;

int main() {
  std::cout << "=== h2x 进入半蹲行走模式示例 ===" << std::endl;
  H2xHighLevel high_level;

  int robot_mode = 0;
  int ret = high_level.GetRobotMode(robot_mode);
  if (ret != 0 || robot_mode != static_cast<int>(RobotMode::WALK_RUN_MODE)) {
    std::cout << "当前未处于走跑模式，错误码：" << ret
              << "，当前模式：" << robot_mode << std::endl;
    return ret != 0 ? ret : -1;
  }

  ret = high_level.HalfWalkMode();
  if (ret == 0) {
    std::cout << "进入半蹲行走模式请求成功" << std::endl;
  } else {
    std::cout << "进入半蹲行走模式请求失败, 错误码：" << ret << std::endl;
    return -1;
  }

  ret = high_level.waitRunning(5000);
  if (ret == 0) {
    std::cout << "模式切换成功" << std::endl;
  } else {
    std::cout << "模式切换失败, 错误码：" << ret << std::endl;
    return -1;
  }
  return 0;
}
