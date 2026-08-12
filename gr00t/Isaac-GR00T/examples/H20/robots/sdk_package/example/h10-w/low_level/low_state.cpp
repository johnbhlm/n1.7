// low_state.cpp

#include <chrono>
#include <iostream>
#include <thread>

#include "common/common_def.h"
#include "common/h10w_def.h"
#include "h10-w/h10w_low_level.h"

using namespace humanoid;
using namespace humanoid::h10w;

int main() {
  std::cout << "=== Low State Reading Test ===" << std::endl;

  H10wLowLevel low_level;
  LowState low_state;

  // Read low state for 5 seconds
  constexpr int DURATION_MS = 5000;
  constexpr int READ_INTERVAL_MS = 100;
  constexpr int read_count = DURATION_MS / READ_INTERVAL_MS;

  for (int i = 0; i < read_count; ++i) {
    auto start = std::chrono::high_resolution_clock::now();

    int ret = low_level.readLowState(low_state);
    if (ret != 0) {
      std::cout << "Failed to read low state!" << std::endl;
      return -1;
    }

    // Print some state information
    std::cout << "=== Low State Reading " << i + 1 << " ===" << std::endl;
    std::cout << "Version: " << low_state.version[0] << "."
              << low_state.version[1] << std::endl;
    std::cout << "Tick: " << low_state.tick << std::endl;
    std::cout << "Data valid: " << static_cast<int>(low_state.data_valid)
              << std::endl;

    // Print first joint state as example
    if (low_state.data_valid > 0) {
      const auto& joint0 = low_state.joint_motor_state[0];
      std::cout << "Joint 0 - Mode: " << static_cast<int>(joint0.mode)
                << ", Op mode: " << static_cast<int>(joint0.op_mode)
                << ", Enable: " << static_cast<int>(joint0.enable_state)
                << ", Position: " << joint0.q << ", Velocity: " << joint0.dq
                << ", Acceleration: " << joint0.ddq
                << ", Torque: " << joint0.tau_est << ", Current: " << joint0.cur
                << ", Voltage: " << joint0.vol << ", Temp: [" << joint0.temp[0]
                << ", " << joint0.temp[1] << "], Kp: " << joint0.kp
                << ", Kd: " << joint0.kd << ", Error: " << joint0.error_code
                << ", Warning: " << joint0.warning_code << std::endl;
      const auto& wheel0 = low_state.wheel_motor_state[0];
      std::cout << "Wheel 0 - Mode: " << static_cast<int>(wheel0.mode)
                << ", Op mode: " << static_cast<int>(wheel0.op_mode)
                << ", Enable: " << static_cast<int>(wheel0.enable_state)
                << ", Velocity: " << wheel0.v << ", Torque: " << wheel0.tau_est
                << ", Current: " << wheel0.cur << ", Voltage: " << wheel0.vol
                << ", Temp: [" << wheel0.temp[0] << ", " << wheel0.temp[1]
                << "], Error: " << wheel0.error_code
                << ", Warning: " << wheel0.warning_code << std::endl;

      const auto& imu = low_state.imu_state;
      std::cout << "IMU - Accel: [" << imu.accelerometer[0] << ", "
                << imu.accelerometer[1] << ", " << imu.accelerometer[2] << "]"
                << ", Gyro: [" << imu.gyroscope[0] << ", " << imu.gyroscope[1]
                << ", " << imu.gyroscope[2] << "], Temp: " << imu.temp
                << ", Error: " << imu.error_code
                << ", Warning: " << imu.warning_code << std::endl;
    }

    std::cout << "Power state: "
              << static_cast<int>(low_state.pcu_state.power_state)
              << ", Emergency stop: "
              << static_cast<int>(low_state.pcu_state.emergency_stop_state)
              << ", Soft emergency stop: "
              << static_cast<int>(low_state.pcu_state.soft_emergency_stop_state)
              << ", Bumper[0]: "
              << static_cast<int>(low_state.pcu_state.bumper_switch_state[0])
              << ", PCU Error: " << low_state.pcu_state.error_code
              << ", PCU Warning: " << low_state.pcu_state.warning_code
              << std::endl;
    std::cout << "Upper enable state: "
              << static_cast<int>(low_state.enable_state.upper_enable_state)
              << ", Base enable state: "
              << static_cast<int>(low_state.enable_state.base_enable_state)
              << std::endl;
    std::cout << "Time seconds: " << low_state.time_seconds << std::endl;
    std::cout << "Error code: " << low_state.error_code << std::endl;
    std::cout << "Warning code: " << low_state.warning_code << std::endl;
    std::cout << std::endl;

    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed =
        std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::this_thread::sleep_for(std::chrono::milliseconds(READ_INTERVAL_MS) -
                                elapsed);
  }

  std::cout << "Low state reading test completed successfully" << std::endl;
  return 0;
}
