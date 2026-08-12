/*
 * 注意事项
 *
 * 1. 机器人模式切换需要确保当前状态安全
 * 2. 移动命令需要在合适的模式下执行
 * 3. 所有操作结果通过result字段返回，0表示成功，非0表示错误
 */

// low_cmd.cpp

#include <iostream>
#include <algorithm>
#include <thread>
#include <cmath>
#include <chrono>

#include "common/common_def.h"
#include "common/h2x_def.h"
#include "h2x/h2x_low_level.h"
#include "h2x/h2x_system.h"

using namespace humanoid;
using namespace humanoid::h2x;

constexpr double MAX_POS = M_PI * 10.0 / 180.0;
constexpr double DURATION = 10;      // unit: ms
constexpr double TOTAL_TIME = 2000;  // unit: ms
constexpr int TEST_JOINT_INDEX = JointIndexValue::L_HIP_YAW - 1;

int main() {
  std::cout << "=== Low Level Command Test ===" << std::endl;
  H2xSystem system;
  H2xLowLevel low_level;
  LowCmd low_cmd{};
  LowState low_state{};
  auto ret = low_level.readLowState(low_state);
  if (ret != 0) {
    std::cerr << "read low state failed! ret = " << ret << std::endl;
    return -1;
  }
  const float init_pos = low_state.motor_state[TEST_JOINT_INDEX].q;

  if (system.enableController(false) != 0) {
    std::cerr << "disable controller failed!" << std::endl;
    return -1;
  }

  // start control loop
  constexpr size_t control_count = TOTAL_TIME / DURATION;
  for (size_t i = 0; i < control_count; ++i) {
    auto start = std::chrono::high_resolution_clock::now();
    auto pos = std::sin(M_PI * i * DURATION / 1000.0) * MAX_POS;
    auto vel = std::cos(M_PI * i * DURATION / 1000.0) * MAX_POS * M_PI;
    low_cmd.motor_cmd[TEST_JOINT_INDEX].mode = 1;
    low_cmd.motor_cmd[TEST_JOINT_INDEX].kp = 15.0;
    low_cmd.motor_cmd[TEST_JOINT_INDEX].kd = 0.5;
    low_cmd.motor_cmd[TEST_JOINT_INDEX].q = init_pos + pos;
    low_cmd.motor_cmd[TEST_JOINT_INDEX].dq = vel;
    if (low_level.writeLowCmd(low_cmd) != 0) {
      std::cout << "pub low cmd failed!" << std::endl;
      system.enableController(true);
      return 0;
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = end - start;
    std::this_thread::sleep_for(
        std::chrono::microseconds(static_cast<int>(DURATION * 1000)) - elapsed);
  }

  system.enableController(true);
  return 0;
}
