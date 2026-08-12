# 1. H20 训练
生成数据：
```bash
bash examples/H20/train/prepare_selected_h20_datasets.sh
```
- **注意修改路径**
---
训练：
```bash
cd /home/user/code/Isaac-GR00T

setsid nohup bash examples/H20/run_h20_train.sh \
  > /home/user/code/groot_models/logs/groot_h20_0612_nohup.log 2>&1 < /dev/null &

echo $! > /home/user/code/groot_models/logs/groot_h20_0612.pid

disown
```
---
查看日志：
```bash
tail -f /home/user/code/groot_models/logs/groot_h20_0612_nohup.log
```
---
停止训练：
```bash
pkill -f "gr00t/experiment/launch_finetune.py"
pkill -f "torchrun"

sleep 5
nvidia-smi
```
---
# H20 键盘部署说明（Keyboard + VLA 推理）

面向 **H20 人形机器人** 的示例部署：**人在回路**、分阶段键盘控制、通过 **WebSocket 策略服务** 做 VLA 推理，并结合 **RealSense** 与 **H2X SDK** 下发实时指令。

---

## 1. GPU server

```bash
cd /home/maintenance/Code/Isaac-GR00T
source .venv/bin/activate

export COSMOS_LOCAL_PATH=/home/maintenance/Code/models/Cosmos-Reason2-2B
export HF_HUB_OFFLINE=1
export TRANSFORMERS_OFFLINE=1
export NO_ALBUMENTATIONS_UPDATE=1


python gr00t/eval/run_gr00t_server.py \
  --model-path /home/maintenance/Code/models/results/Checkpoints/bao.he/h20/groot_h20_0529 \
  --embodiment-tag NEW_EMBODIMENT \
  --device cuda:0 \
  --host 0.0.0.0 \
  --port 5555 \
  --no-strict
```

## 2. Thor client

```bash
#启动H20
cd ~/Code/Isaac-GR00T/examples/H20/robots/sdk_package/
export LD_LIBRARY_PATH="$(pwd)/lib/linux/arm/aarch64:$(pwd)/dependency/sdk/Runtime_Env/linux/arm/aarch64:$(pwd)/dependency/fastdds/linux/arm/aarch64:$LD_LIBRARY_PATH"
export PYTHONPATH="$(pwd)/lib/linux/arm/aarch64:$PYTHONPATH"
conda activate groot_client
cd ~/Code/Isaac-GR00T

#先执行
python examples/H20/robots/sdk_package/example_py/h2x/system/clear_error.py
#然后
python examples/H20/robots/sdk_package/example_py/h2x/high_level/damp_mode.py
#之后
python examples/H20/robots/sdk_package/example_py/h2x/high_level/lock_stand_mode.py    
#再然后
python examples/H20/robots/sdk_package/example_py/h2x/high_level/walk_run_mode.py 
#结束后再执行
python examples/H20/robots/sdk_package/example_py/h2x/high_level/half_walk_mode.py


#启动客户端
bash examples/H20/run_h20_deployment.sh
```

### 2.1 标准操作顺序（与实现一致）

典型 demo：**桌面抓取 → 标记完成 → 切放置任务 → 行走 → 回操作模式 → 策略继续放置**。

```text
p  → 双臂收到「行走安全」姿态（walk arm）
i  → 过渡到初始抓取姿态，结束后自动启动 infer()（VLA 闭环）
```



说明：

- **策略不会“无模型自动放置”**：放置依赖 **infer** 里模型对当前语言任务与图像的输出；`h` 后是否再次进入 infer 取决于内部标志位（例如 `_deploy_flag`、`_walk_arm_finish`），与 README 旧版“自动放置”表述一致的是 **“在满足条件时再次拉起 init→infer”**，而非脱离策略的硬编码轨迹。

---

# 3. 代码与目录结构（当前）

```text
examples/H20/
├── run_h20_train.sh   #训练入口
├── run_h20_deployment.sh          # 推荐：配置 SDK + ROS + python -m examples.H20.deploy.main
├── deploy/
│   ├── main.py                     # CLI：parse 参数 → 构造 H20VLA → run()
│   ├── controller.py               # H20VLA：SDK、相机、infer、move_arm_pose、键盘监听
│   ├── configs.py                  # DeployArgs 等配置占位
│   └── utils/
│       ├── keyboard_handlers.py    # 键盘 on_press / make_on_press
│       ├── normalizer.py           # 状态归一化 + load_stats
│       └── task_utils.py           # get_task_info / mark_task_done / should_apply_gripper_lock
├── train/
│   ├── h20_config.py    #训练h20配置
│   ├── prepare_selected_h20_datasets.sh                  # 生成数据脚本，注意修改路径
│   └── selected_0612_dataset_paths.txt     #生成的数据列表文件
└── robots/
    ├── sdk_package/                # H20 Python/C++ SDK、lib、dependency（启动脚本 cd 于此）
    ├── gripper/                    # h2x ROS2 安装与 gripper_control 封装
    ├── camera/
    │   ├── realsense.py            # RealSense Camera 封装
    │   └── freeze_frames/          # 可选参考帧等静态资源
    └── groot_h20_interface.py      # ModelClient（WebSocket 调策略）
```

模块化路径下，**推理与运动主逻辑**在 `deploy/controller.py`（类名仍为 `H20VLA`）；键盘逻辑在 `deploy/utils/keyboard_handlers.py`，任务与夹爪锁定辅助在 `deploy/utils/task_utils.py`。

---


## 4. 常见问题

- **连不上策略**：检查 `run_h20_deployment.sh` 传入的 host/port、防火墙、以及 GPU 侧服务是否监听 `0.0.0.0` 或正确网卡。  
- **import 失败**：必须在仓库根执行或保证 `PYTHONPATH` 含仓库根，以便 `examples.H20.*` 可解析。  
- **RealSense 标定路径**：`realsense.py` 内部分 `np.loadtxt` 为相对路径，工作目录需与标定文件布局一致，或后续改为基于 `__file__` 的路径。

---

## 5. 小结

当前推荐形态是：**`run_h20_deployment.sh` → `deploy/main.py` → `controller.H20VLA`**，机器人侧 SDK 与夹爪在 **`robots/`** 下统一管理；**策略服务在另一台机器单独启动**，通过参数注入 IP/端口即可对齐 README 中的分阶段键盘流程。
