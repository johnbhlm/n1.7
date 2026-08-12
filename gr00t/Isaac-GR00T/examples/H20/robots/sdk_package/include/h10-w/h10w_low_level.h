#pragma once

#include "HumanoidSdkDef.h"
#include "common/common_def.h"
#include "common/h10w_def.h"

namespace humanoid {
namespace h10w {
/**
 * \~Chinese
 * @brief H10w 机器人底层接口
 *
 * domain_id 参数用于指定 DDS 域 ID，默认为
 * 0。用户可以根据实际部署环境设置合适的域 ID，以确保与机器人进行正确的通信。
 *
 * \~English
 * @brief H10w robot low-level interface
 *
 * domain_id parameter is used to specify the DDS domain ID, which defaults to
 * 0. Users can set an appropriate domain ID based on the actual deployment
 * environment to ensure proper communication with the robot.
 *
 */
class HUMANOIDSDK_CLASS H10wLowLevel {
 public:
  explicit H10wLowLevel(int domain_id = 0);
  ~H10wLowLevel();

  /**
   *
   * \~Chinese
   *
   * @brief 发布底层控制命令
   * @param lowCmd [in] 底层控制命令
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   *
   * @brief Publish low-level control command
   * @param lowCmd [in] Low-level control command
   * @return int
   *         - 0: Success;
   *         - Other: Error code;
   */
  int writeLowCmd(const LowCmd& lowCmd);

  /**
   *
   * \~Chinese
   *
   * @brief 订阅底层状态
   * @param lowState [out] 底层状态
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   *
   * @brief Subscribe low-level state
   * @param lowState [out] Low-level state
   * @return int
   *         - 0: Success;
   *         - Other: Error code;
   */
  int readLowState(LowState& lowState);

  /**
   *
   * \~Chinese
   *
   * @brief 发布灯环控制命令
   * @param lrcuCmd [in] 灯环控制命令
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   *
   * @brief Publish lamp ring control command
   * @param lrcuCmd [in] Lamp ring control command
   * @return int
   *         - 0: Success;
   *         - Other: Error code;
   */
  int writeLrcuCmd(const LRCUCmd& lrcuCmd);

  /**
   *
   * \~Chinese
   *
   * @brief 订阅灯环状态
   * @param lrcuState [out] 灯环状态
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   *
   * @brief Subscribe lamp ring state
   * @param lrcuState [out] Lamp ring state
   * @return int
   *         - 0: Success;
   *         - Other: Error code;
   */
  int readLrcuState(LRCUState& lrcuState);

  /**
   *
   * \~Chinese
   *
   * @brief 订阅BMS电池状态
   * @param bmsState [out] BMS电池状态
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   *
   * @brief Subscribe BMS battery state
   * @param bmsState [out] BMS battery state
   * @return int
   *         - 0: Success;
   *         - Other: Error code;
   */
  int readBmsState(BmsState& bmsState);

 private:
  int domain_id_{0};
};

}  // namespace h10w
}  // namespace humanoid
