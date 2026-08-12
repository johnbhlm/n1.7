// lrcu_state.cpp

#include <iostream>
#include <thread>
#include <chrono>

#include "common/common_def.h"
#include "common/h10w_def.h"
#include "h10-w/h10w_low_level.h"

using namespace humanoid;
using namespace humanoid::h10w;

int main() {
  std::cout << "=== LRCU State Reading Test ===" << std::endl;

  H10wLowLevel low_level;
  LRCUState lrcu_state;

  // Read LRCU state for 10 seconds
  constexpr int DURATION_MS = 10000;
  constexpr int READ_INTERVAL_MS = 500;
  constexpr int read_count = DURATION_MS / READ_INTERVAL_MS;

  for (int i = 0; i < read_count; ++i) {
    auto start = std::chrono::high_resolution_clock::now();

    // Read LRCU state
    int ret = low_level.readLrcuState(lrcu_state);
    if (ret != 0) {
      std::cout << "Failed to read LRCU state!" << std::endl;
      return -1;
    }

    // Print LRCU state information
    std::cout << "=== LRCU State Reading " << i + 1 << " ===" << std::endl;
    std::cout << "Mode: " << static_cast<int>(lrcu_state.mode) << std::endl;
    std::cout << "LED Mode: " << static_cast<int>(lrcu_state.led_mode)
              << std::endl;
    std::cout << "LED Frequency: " << static_cast<int>(lrcu_state.led_frequency)
              << std::endl;
    std::cout << "LED Color - R: " << static_cast<int>(lrcu_state.led_r)
              << ", G: " << static_cast<int>(lrcu_state.led_g)
              << ", B: " << static_cast<int>(lrcu_state.led_b) << std::endl;
    std::cout << std::endl;

    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed =
        std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::this_thread::sleep_for(std::chrono::milliseconds(READ_INTERVAL_MS) -
                                elapsed);
  }

  std::cout << "LRCU state reading test completed successfully" << std::endl;
  return 0;
}
