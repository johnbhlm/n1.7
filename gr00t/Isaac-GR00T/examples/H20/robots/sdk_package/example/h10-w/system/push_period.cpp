// push_period.cpp

#include <iostream>

#include "common/common_def.h"
#include "h10-w/h10w_system.h"

using namespace humanoid;
using namespace humanoid::h10w;

int main() {
  std::cout << "=== 设置与获取推送周期示例 ===" << std::endl;
  H10wSystem system;

  uint32_t old_period = 0;
  if (system.getPushPeriod(old_period) != 0) {
    std::cerr << "获取当前推送周期失败" << std::endl;
    return -1;
  }
  std::cout << "当前推送周期: " << old_period << " ms" << std::endl;

  constexpr uint32_t new_period = 20;
  if (system.setPushPeriod(new_period) != 0) {
    std::cerr << "设置推送周期失败" << std::endl;
    return -1;
  }
  std::cout << "设置推送周期成功: " << new_period << " ms" << std::endl;

  uint32_t current_period = 0;
  if (system.getPushPeriod(current_period) != 0) {
    std::cerr << "再次获取推送周期失败" << std::endl;
    return -1;
  }
  std::cout << "当前推送周期(复核): " << current_period << " ms" << std::endl;

  return 0;
}
