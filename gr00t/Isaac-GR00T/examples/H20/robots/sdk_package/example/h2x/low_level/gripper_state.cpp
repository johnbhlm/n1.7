/*
 * 注意事项
 *
 * 1. 机器人模式切换需要确保当前状态安全
 * 2. 移动命令需要在合适的模式下执行
 * 3. 所有操作结果通过result字段返回，0表示成功，非0表示错误
 */

// gripper_state.cpp

#include <iostream>
#include <thread>
#include <chrono>

#include "common/common_def.h"
#include "common/h2x_def.h"
#include "h2x/h2x_low_level.h"

using namespace humanoid;
using namespace humanoid::h2x;

int main() {
  std::cout << "=== Gripper State Reading Test ===" << std::endl;

  H2xLowLevel low_level;
  GripperState gripper_state;

  // Read gripper state for 10 seconds
  constexpr int DURATION_MS = 10000;
  constexpr int READ_INTERVAL_MS = 500;
  constexpr int read_count = DURATION_MS / READ_INTERVAL_MS;

  for (int i = 0; i < read_count; ++i) {
    auto start = std::chrono::high_resolution_clock::now();

    // Read gripper state
    int ret = low_level.readGripperState(gripper_state);
    if (ret != 0) {
      std::cout << "Failed to read gripper state!" << std::endl;
      return -1;
    }

    // Print gripper state for left and right
    for (int j = 0; j < 2; ++j) {
      const char* side = (j == 0) ? "Left" : "Right";
      std::cout << "=== " << side << " Gripper State " << i + 1
                << " ===" << std::endl;
      std::cout << "  Mode: "
                << static_cast<int>(gripper_state.motorStateGripper[j].mode)
                << std::endl;
      std::cout << "  Operation Mode: "
                << static_cast<int>(
                       gripper_state.motorStateGripper[j].operation_mode)
                << std::endl;
      std::cout << "  Arrive Signal: "
                << static_cast<int>(
                       gripper_state.motorStateGripper[j].arrive_signal)
                << std::endl;
      std::cout << "  Position (q): " << gripper_state.motorStateGripper[j].q
                << " rad" << std::endl;
      std::cout << "  Velocity (dq): " << gripper_state.motorStateGripper[j].dq
                << " rad/s" << std::endl;
      std::cout << "  Finger1 Force: "
                << gripper_state.motorStateGripper[j].finger1_force << " N"
                << std::endl;
      std::cout << "  Finger2 Force: "
                << gripper_state.motorStateGripper[j].finger2_force << " N"
                << std::endl;
      std::cout << "  Temperature: "
                << gripper_state.motorStateGripper[j].temperature << " C"
                << std::endl;
      std::cout << "  Current: " << gripper_state.motorStateGripper[j].cur
                << " A" << std::endl;
      std::cout << "  Error Code: "
                << gripper_state.motorStateGripper[j].error_code << std::endl;
      std::cout << "  Warning Code: "
                << static_cast<int>(
                       gripper_state.motorStateGripper[j].warning_code)
                << std::endl;
    }
    std::cout << "  Tick: " << gripper_state.tick << std::endl;
    std::cout << "  Is Data Valid: "
              << static_cast<int>(gripper_state.is_data_valid) << std::endl;
    std::cout << std::endl;

    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed =
        std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::this_thread::sleep_for(std::chrono::milliseconds(READ_INTERVAL_MS) -
                                elapsed);
  }

  std::cout << "Gripper state reading test completed successfully" << std::endl;
  return 0;
}
