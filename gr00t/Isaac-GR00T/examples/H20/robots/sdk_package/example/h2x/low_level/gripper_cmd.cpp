/*
 * 注意事项
 *
 * 1. 机器人模式切换需要确保当前状态安全
 * 2. 移动命令需要在合适的模式下执行
 * 3. 所有操作结果通过result字段返回，0表示成功，非0表示错误
 */

// gripper_cmd.cpp

#include <iostream>
#include <thread>
#include <chrono>

#include "common/common_def.h"
#include "common/h2x_def.h"
#include "h2x/h2x_low_level.h"

using namespace humanoid;
using namespace humanoid::h2x;

int main() {
  std::cout << "=== Gripper Command Test ===" << std::endl;

  H2xLowLevel low_level;
  GripperCmd gripper_cmd;

  // Test gripper control for 10 seconds
  constexpr int DURATION_MS = 10000;
  constexpr int CMD_INTERVAL_MS = 500;
  constexpr int cmd_count = DURATION_MS / CMD_INTERVAL_MS;

  for (int i = 0; i < cmd_count; ++i) {
    auto start = std::chrono::high_resolution_clock::now();

    // Alternate between open and close
    bool open = (i % 2 == 0);

    // Left gripper
    gripper_cmd.motorCmdGripper[0].mode = 1;
    gripper_cmd.motorCmdGripper[0].operation_mode = 0;
    gripper_cmd.motorCmdGripper[0].q = open ? 0.08f : 0.0f;
    gripper_cmd.motorCmdGripper[0].dq_percentage = 50;
    gripper_cmd.motorCmdGripper[0].acc_percentage = 50;
    gripper_cmd.motorCmdGripper[0].finger_force = 10.0f;

    // Right gripper
    gripper_cmd.motorCmdGripper[1].mode = 1;
    gripper_cmd.motorCmdGripper[1].operation_mode = 0;
    gripper_cmd.motorCmdGripper[1].q = open ? 0.08f : 0.0f;
    gripper_cmd.motorCmdGripper[1].dq_percentage = 50;
    gripper_cmd.motorCmdGripper[1].acc_percentage = 50;
    gripper_cmd.motorCmdGripper[1].finger_force = 10.0f;

    // Send gripper command
    int ret = low_level.writeGripperCmd(gripper_cmd);
    if (ret != 0) {
      std::cout << "Failed to write gripper command!" << std::endl;
      return -1;
    }

    std::cout << "Gripper " << (open ? "OPEN" : "CLOSE") << std::endl;

    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed =
        std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::this_thread::sleep_for(std::chrono::milliseconds(CMD_INTERVAL_MS) -
                                elapsed);
  }

  std::cout << "Gripper command test completed successfully" << std::endl;
  return 0;
}
