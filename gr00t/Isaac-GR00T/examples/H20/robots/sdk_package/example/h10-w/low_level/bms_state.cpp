// bms_state.cpp

#include <iostream>
#include <thread>
#include <chrono>

#include "common/common_def.h"
#include "common/h10w_def.h"
#include "h10-w/h10w_low_level.h"

using namespace humanoid;
using namespace humanoid::h10w;

int main() {
  std::cout << "=== BMS State Reading Test ===" << std::endl;

  H10wLowLevel low_level;
  BmsState bms_state;

  // Read BMS state for 10 seconds
  constexpr int DURATION_MS = 10000;
  constexpr int READ_INTERVAL_MS = 1000;
  constexpr int read_count = DURATION_MS / READ_INTERVAL_MS;

  for (int i = 0; i < read_count; ++i) {
    auto start = std::chrono::high_resolution_clock::now();

    // Read BMS state
    int ret = low_level.readBmsState(bms_state);
    if (ret != 0) {
      std::cout << "Failed to read BMS state!" << std::endl;
      return -1;
    }

    // Print BMS state information
    std::cout << "=== BMS State Reading " << i + 1 << " ===" << std::endl;
    std::cout << "Power Mode: " << static_cast<int>(bms_state.power_mode)
              << (bms_state.power_mode == 0 ? " (External)" : " (Battery)")
              << std::endl;
    std::cout << "Charge State: " << static_cast<int>(bms_state.charge_state);
    switch (bms_state.charge_state) {
      case 0:
        std::cout << " (Invalid)" << std::endl;
        break;
      case 1:
        std::cout << " (Charging)" << std::endl;
        break;
      case 2:
        std::cout << " (Discharging)" << std::endl;
        break;
      case 3:
        std::cout << " (Idle)" << std::endl;
        break;
      default:
        std::cout << " (Unknown)" << std::endl;
        break;
    }
    std::cout << "SOC: " << bms_state.soc << "%" << std::endl;
    std::cout << std::endl;

    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed =
        std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::this_thread::sleep_for(std::chrono::milliseconds(READ_INTERVAL_MS) -
                                elapsed);
  }

  std::cout << "BMS state reading test completed successfully" << std::endl;
  return 0;
}
