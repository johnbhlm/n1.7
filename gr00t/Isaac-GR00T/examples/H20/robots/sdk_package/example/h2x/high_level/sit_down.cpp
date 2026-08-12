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
  std::cout << "=== h2x 坐下示例 ===" << std::endl;
  H2xHighLevel high_level;

  int robot_mode = 0;
  int ret = high_level.GetRobotMode(robot_mode);
  if (ret != 0 || robot_mode != static_cast<int>(RobotMode::LOCK_STAND_MODE)) {
    std::cout << "当前未处于锁定站立模式，错误码：" << ret
              << "，当前模式：" << robot_mode << std::endl;
    return ret != 0 ? ret : -1;
  }

  ret = high_level.SitDown();
  if (ret == 0) {
    std::cout << "成功坐下" << std::endl;
  } else {
    std::cout << "坐下失败, 错误码：" << ret << std::endl;
    return -1;
  }
  return 0;
}
