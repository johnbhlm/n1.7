#!/usr/bin/env bash
set -euo pipefail

cd /home/user/code/Isaac-GR00T
# export HF_ENDPOINT=https://hf-mirror.com

# =============================================================================
# Local model paths
# =============================================================================
export GR00T_LOCAL=/home/user/.cache/huggingface/hub/models--nvidia--GR00T-N1.7-3B/snapshots/2fc962b973bccdd5d8ce4f67cc63b264d6886495
export COSMOS_LOCAL=/home/user/.cache/huggingface/hub/models--nvidia--Cosmos-Reason2-2B/snapshots/9ce19a195e423419c349abfc86fd07178b230561

# =============================================================================
# Offline HF cache settings
# =============================================================================
export HF_HOME=/home/user/.cache/huggingface
export HF_HUB_CACHE=/home/user/.cache/huggingface/hub
export HF_HUB_OFFLINE=1
export TRANSFORMERS_OFFLINE=1
export NO_ALBUMENTATIONS_UPDATE=1
export UV_LINK_MODE=copy

# =============================================================================
# Training config
# =============================================================================
DATASETS=$(cat examples/H20/train/selected_0612_dataset_paths.txt)

OUTPUT_DIR=/home/user/code/groot_models/groot_h20_0612_full_abs
LOG_DIR=/home/user/code/groot_models/logs
LOG_FILE=${LOG_DIR}/groot_h20_0612_full_abs$(date +%Y%m%d_%H%M%S).log

mkdir -p "$OUTPUT_DIR"
mkdir -p "$LOG_DIR"

echo "=============================================================================="
echo "H20 8-GPU GR00T training"
echo "=============================================================================="
echo "GR00T_LOCAL: $GR00T_LOCAL"
echo "COSMOS_LOCAL: $COSMOS_LOCAL"
echo "OUTPUT_DIR:  $OUTPUT_DIR"
echo "LOG_FILE:    $LOG_FILE"
echo
echo "Datasets:"
echo "$DATASETS" | tr ':' '\n'
echo "=============================================================================="

export CUDA_VISIBLE_DEVICES=0,1,2,3,4,5,6,7

export TORCH_NCCL_ASYNC_ERROR_HANDLING=1
export NCCL_DEBUG=WARN

# 单机多卡，先关闭容易出问题的 RDMA / NVLS / IB 路径
export NCCL_IB_DISABLE=1
export NCCL_NVLS_ENABLE=0

# 如果机器 P2P/NVLink 拓扑不稳定，先关闭 P2P，牺牲一点速度换稳定性
export NCCL_P2P_DISABLE=1

# 避免一些共享内存/容器环境问题
export NCCL_SHM_DISABLE=0

# 建议固定 master port，避免残留冲突
export MASTER_ADDR=127.0.0.1
export MASTER_PORT=29501
uv run --no-sync torchrun \
  --nproc_per_node=8 \
  --master_addr=127.0.0.1 \
  --master_port=29501 \
  gr00t/experiment/launch_finetune.py \
  --base-model-path  "$GR00T_LOCAL" \
  --dataset-path "$DATASETS" \
  --embodiment-tag NEW_EMBODIMENT \
  --modality-config-path examples/H20/train/h20_config.py \
  --num-gpus 8 \
  --output-dir "$OUTPUT_DIR" \
  --save-total-limit 10 \
  --save-steps 10000 \
  --max-steps 200000 \
  --global-batch-size 32 \
  --dataloader-num-workers 8 \
  --state-dropout-prob 0.2 \
  --tune-llm \
  --tune-visual \
  --tune-projector \
  --tune-diffusion-model \
  2>&1 | tee "$LOG_FILE"
