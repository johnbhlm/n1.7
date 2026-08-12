// get_cartesian_control_params.cpp

#include <iomanip>
#include <iostream>

#include "common/common_def.h"
#include "h10-w/h10w_params.h"

using namespace humanoid;
using namespace humanoid::h10w;

int main() {
  std::cout << "=== 获取笛卡尔空间控制参数示例 ===" << std::endl;
  H10wParams params;
  CartesianControlParams get_params;

  if (params.getCartesianControlParams(get_params) != 0) {
    std::cerr << "获取笛卡尔空间控制参数失败" << std::endl;
    return -1;
  }

  std::cout << "获取笛卡尔空间控制参数成功，共 " << get_params.size() << " 项"
            << std::endl;
  std::cout << std::fixed << std::setprecision(3);
  for (const auto& item : get_params) {
    const auto& [cart_index, kp, kd, kpv] = item;
    std::cout << "  cart=" << cart_index << std::endl;
    std::cout << "    kp : [" << kp[0] << ", " << kp[1] << ", " << kp[2] << ", "
              << kp[3] << ", " << kp[4] << ", " << kp[5] << "]" << std::endl;
    std::cout << "    kd : [" << kd[0] << ", " << kd[1] << ", " << kd[2] << ", "
              << kd[3] << ", " << kd[4] << ", " << kd[5] << "]" << std::endl;
    std::cout << "    kpv: [" << kpv[0] << ", " << kpv[1] << ", " << kpv[2]
              << ", " << kpv[3] << ", " << kpv[4] << ", " << kpv[5] << "]"
              << std::endl;
  }

  return 0;
}
