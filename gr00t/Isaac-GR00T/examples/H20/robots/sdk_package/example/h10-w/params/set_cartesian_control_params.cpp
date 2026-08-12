// set_cartesian_control_params.cpp

#include <array>
#include <iostream>

#include "common/common_def.h"
#include "common/h10w_def.h"
#include "h10-w/h10w_params.h"

using namespace humanoid;
using namespace humanoid::h10w;

int main() {
  std::cout << "=== 设置笛卡尔空间控制参数示例 ===" << std::endl;
  H10wParams params;

  CartesianControlParams set_params = {
      {static_cast<uint32_t>(CartIndex::LEFT_ARM),
       std::array<double, 6>{10000.0, 10000.0, 10000.0, 10000.0, 10000.0,
                             10000.0},
       std::array<double, 6>{300.0, 300.0, 300.0, 300.0, 300.0, 300.0},
       std::array<double, 6>{800.0, 800.0, 800.0, 800.0, 800.0, 800.0}},
      {static_cast<uint32_t>(CartIndex::RIGHT_ARM),
       std::array<double, 6>{10500.0, 10500.0, 10500.0, 10500.0, 10500.0,
                             10500.0},
       std::array<double, 6>{320.0, 320.0, 320.0, 320.0, 320.0, 320.0},
       std::array<double, 6>{850.0, 850.0, 850.0, 850.0, 850.0, 850.0}},
  };

  if (params.setCartesianControlParams(set_params) != 0) {
    std::cerr << "设置笛卡尔空间控制参数失败" << std::endl;
    return -1;
  }

  std::cout << "设置笛卡尔空间控制参数成功" << std::endl;
  return 0;
}
