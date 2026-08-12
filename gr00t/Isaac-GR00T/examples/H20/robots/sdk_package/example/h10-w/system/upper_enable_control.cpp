// upper_enable_control.cpp
// Upper-body enable control example (上半身使能控制示例)

#include <iostream>
#include <iomanip>
#include <thread>
#include <chrono>
#include "h10-w/h10w_system.h"
#include "common/common_def.h"

using namespace humanoid;
using namespace humanoid::h10w;

int main() {
  std::cout << "=== 上半身使能控制示例 / Upper-body enable control example ==="
            << std::endl;
  H10wSystem system;

  std::cout << "正在进行上半身使能控制... / Enabling upper body..."
            << std::endl;
  if (system.upperEnableControl(humanoid::EnableState::ENABLE_ON) == 0) {
    std::cout << "上半身使能控制成功 / Upper body enabled successfully"
              << std::endl;
  } else {
    std::cerr << "上半身使能控制失败 / Upper body enable failed" << std::endl;
  }

  std::this_thread::sleep_for(std::chrono::seconds(3));

  std::cout << "正在进行上半身失能控制... / Disabling upper body..."
            << std::endl;
  if (system.upperEnableControl(humanoid::EnableState::ENABLE_OFF) == 0) {
    std::cout << "上半身失能控制成功 / Upper body disabled successfully"
              << std::endl;
  } else {
    std::cerr << "上半身失能控制失败 / Upper body disable failed" << std::endl;
  }

  return 0;
}
