// lrcu_cmd.cpp

#include <iostream>
#include <thread>
#include <chrono>

#include "common/common_def.h"
#include "common/h10w_def.h"
#include "h10-w/h10w_low_level.h"

using namespace humanoid;
using namespace humanoid::h10w;

int main() {
  std::cout << "=== LRCU Command Test ===" << std::endl;

  H10wLowLevel low_level;
  LRCUCmd lrcu_cmd;

  // Test LED control for 10 seconds
  constexpr int DURATION_MS = 10000;
  constexpr int CMD_INTERVAL_MS = 5000;
  constexpr int cmd_count = DURATION_MS / CMD_INTERVAL_MS;

  for (int i = 0; i < cmd_count; ++i) {
    auto start = std::chrono::high_resolution_clock::now();

    // Set LED parameters
    lrcu_cmd.mode = 1;  // Enable LED

    // Cycle through different colors
    int color_phase = i % 6;
    switch (color_phase) {
      case 0:  // Red
        lrcu_cmd.led_r = 255;
        lrcu_cmd.led_g = 0;
        lrcu_cmd.led_b = 0;
        lrcu_cmd.led_mode = 1;  // Solid color
        lrcu_cmd.led_frequency = 0;
        std::cout << "Setting LED to RED" << std::endl;
        break;
      case 1:  // Green
        lrcu_cmd.led_r = 0;
        lrcu_cmd.led_g = 255;
        lrcu_cmd.led_b = 0;
        lrcu_cmd.led_mode = 1;
        lrcu_cmd.led_frequency = 0;
        std::cout << "Setting LED to GREEN" << std::endl;
        break;
      case 2:  // Blue
        lrcu_cmd.led_r = 0;
        lrcu_cmd.led_g = 0;
        lrcu_cmd.led_b = 255;
        lrcu_cmd.led_mode = 1;
        lrcu_cmd.led_frequency = 0;
        std::cout << "Setting LED to BLUE" << std::endl;
        break;
      case 3:  // Yellow
        lrcu_cmd.led_r = 255;
        lrcu_cmd.led_g = 255;
        lrcu_cmd.led_b = 0;
        lrcu_cmd.led_mode = 2;  // Blinking
        lrcu_cmd.led_frequency = 1;
        std::cout << "Setting LED to YELLOW (Blinking)" << std::endl;
        break;
      case 4:  // Cyan
        lrcu_cmd.led_r = 0;
        lrcu_cmd.led_g = 255;
        lrcu_cmd.led_b = 255;
        lrcu_cmd.led_mode = 3;  // Breathing
        lrcu_cmd.led_frequency = 5;
        std::cout << "Setting LED to CYAN (Breathing)" << std::endl;
        break;
      case 5:  // Magenta
        lrcu_cmd.led_r = 255;
        lrcu_cmd.led_g = 0;
        lrcu_cmd.led_b = 255;
        lrcu_cmd.led_mode = 2;  // Blink
        lrcu_cmd.led_frequency = 2;
        std::cout << "Setting LED to MAGENTA (Blink)" << std::endl;
        break;
    }

    // Send LRCU command
    int ret = low_level.writeLrcuCmd(lrcu_cmd);
    if (ret != 0) {
      std::cout << "Failed to write LRCU command!" << std::endl;
      return -1;
    }

    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed =
        std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::this_thread::sleep_for(std::chrono::milliseconds(CMD_INTERVAL_MS) -
                                elapsed);
  }

  // Turn off LED at the end
  lrcu_cmd.mode = 0;
  low_level.writeLrcuCmd(lrcu_cmd);
  std::cout << "LED turned off" << std::endl;

  std::cout << "LRCU command test completed successfully" << std::endl;
  return 0;
}
