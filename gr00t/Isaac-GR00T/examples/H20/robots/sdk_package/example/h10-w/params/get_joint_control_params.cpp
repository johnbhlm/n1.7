// get_joint_control_params.cpp

#include <iomanip>
#include <iostream>

#include "common/common_def.h"
#include "h10-w/h10w_params.h"

using namespace humanoid;
using namespace humanoid::h10w;

int main() {
  std::cout << "=== 获取关节空间控制参数示例 ===" << std::endl;
  H10wParams params;
  JointControlParams get_params;

  if (params.getJointControlParams(get_params) != 0) {
    std::cerr << "获取关节空间控制参数失败" << std::endl;
    return -1;
  }

  std::cout << "获取关节空间控制参数成功，共 " << get_params.size() << " 项"
            << std::endl;
  std::cout << std::fixed << std::setprecision(3);
  for (const auto& item : get_params) {
    const auto& [joint_index, kp, kd, kpv] = item;
    std::cout << "  joint=" << joint_index << ", kp=" << kp << ", kd=" << kd
              << ", kpv=" << kpv << std::endl;
  }

  return 0;
}
