#!/usr/bin/env bash
set -euo pipefail

# =============================================================================
# H20 selected multi-dataset preparation script for Isaac-GR00T
#
# 功能：
#   1. 只处理白名单里的 H20 LeRobot 子数据集
#   2. 检查每个子数据集是否具备 meta/data/videos
#   3. 生成 stats.json 和 relative_stats.json
#   4. 输出冒号分隔的 DATASETS 路径，供 launch_finetune.py 使用
#
# 使用：
#   chmod +x examples/H20/prepare_selected_h20_datasets.sh
#   bash examples/H20/prepare_selected_h20_datasets.sh
# =============================================================================

cd /home/user/code/Isaac-GR00T
ROOT=/home/user/data_h20_merge
CONFIG=examples/H20/train/h20_config.py

OUT_PATH_FILE=examples/H20/train/selected_0612_dataset_paths.txt

# =============================================================================
# 白名单：只处理这里列出的数据集文件夹名
#
# 注意：
#   1. 只写文件夹名，不要写完整路径
#   2. 想启用哪个就保留
#   3. 不想用哪个就注释掉或删除
# =============================================================================
        
SELECTED_DATASETS=(
  "lerobot_h20_1_place_empty"
  "lerobot_h20_2_r_place_empty_clean"
  "lerobot_h20_3_follow_hand_clean"
  "lerobot_h20_4_r_follow_hand_clean"
  "lerobot_h20_21_new_pose_pick"
  "lerobot_h20_22_r_new_pose_pick"
  "lerobot_h20_23_random_desk_pick_clean"
  "lerobot_h20_24_r_random_desk_pick"
  "lerobot_h20_25_pick_center"
  "lerobot_h20_26_r_pick_center"
  "lerobot_h20_27_one_hand_hold_pick"
  "lerobot_h20_28_r_one_hand_hold_pick_clean"
  "lerobot_h20_31_face_down"
  "lerobot_h20_32_r_face_down"
  "lerobot_h20_33_retry1"
  "lerobot_h20_34_r_retry1"
  "lerobot_h20_35_retry2"
  "lerobot_h20_36_r_retry2"
  "lerobot_h20_37_place_dog_clean"
  "lerobot_h20_38_r_place_dog"
  "lerobot_h20_39_place"
  "lerobot_h20_40_r_place_clean"
  "lerobot_h20_41_one_hand_hold_place"
  "lerobot_h20_42_r_one_hand_hold_place_clean"
  "lerobot_h20_43_dog_give"
  "lerobot_h20_44_r_dog_give_clean"
  "lerobot_h20_45_place_new"
  "lerobot_h20_46_r_place_new_clean"
  "lerobot_h20_47_pick_dog"
  "lerobot_h20_48_r_pick_dog"
  "lerobot_h20_49_pick_sup_new"
  "lerobot_h20_50_r_pick_sup_new"
  "lerobot_h20_51_pick_black"
  "lerobot_h20_52_r_pick_black"
  "lerobot_h20_53_place_black"
  "lerobot_h20_54_r_place_black"
  "lerobot_h20_55_face_down_dog"
  "lerobot_h20_56_r_face_down_dog"
  "lerobot_h20_57_one_hand_hold_pick_dog"
  "lerobot_h20_58_r_one_hand_hold_pick_dog"
  "lerobot_h20_59_near_pick"
  "lerobot_h20_60_r_near_pick"
  "lerobot_h20_61_one_hand_hold_place_dog"
  "lerobot_h20_62_r_one_hand_hold_place_dog"


  # 下面按需继续添加：
  # "lerobot_h20_xxx"
  # "lerobot_h20_xxx"
)

# =============================================================================
# 基础检查
# =============================================================================

echo "=============================================================================="
echo "H20 selected dataset preparation"
echo "=============================================================================="
echo "Repo:   $(pwd)"
echo "Root:   $ROOT"
echo "Config: $CONFIG"
echo

if [ ! -d "$ROOT" ]; then
  echo "[ERROR] ROOT does not exist: $ROOT"
  exit 1
fi

if [ ! -f "$CONFIG" ]; then
  echo "[ERROR] H20 modality config does not exist: $CONFIG"
  exit 1
fi

if [ "${#SELECTED_DATASETS[@]}" -eq 0 ]; then
  echo "[ERROR] SELECTED_DATASETS is empty"
  exit 1
fi

SELECTED_PATHS=()

# =============================================================================
# 逐个处理白名单数据集
# =============================================================================

for name in "${SELECTED_DATASETS[@]}"; do
  d="$ROOT/$name"

  echo
  echo "=============================================================================="
  echo "Checking dataset: $name"
  echo "Path: $d"
  echo "=============================================================================="

  if [ ! -d "$d" ]; then
    echo "[ERROR] Dataset folder not found: $d"
    exit 1
  fi

  # ---------------------------------------------------------------------------
  # 检查 LeRobot / GR00T dataset 基本结构
  # ---------------------------------------------------------------------------

  test -f "$d/meta/info.json" || {
    echo "[ERROR] missing: $d/meta/info.json"
    exit 1
  }

  test -f "$d/meta/episodes.jsonl" || {
    echo "[ERROR] missing: $d/meta/episodes.jsonl"
    exit 1
  }

  test -f "$d/meta/tasks.jsonl" || {
    echo "[ERROR] missing: $d/meta/tasks.jsonl"
    exit 1
  }

  test -f "$d/meta/modality.json" || {
    echo "[ERROR] missing: $d/meta/modality.json"
    exit 1
  }

  test -d "$d/data" || {
    echo "[ERROR] missing directory: $d/data"
    exit 1
  }

  test -d "$d/videos" || {
    echo "[ERROR] missing directory: $d/videos"
    exit 1
  }

  # ---------------------------------------------------------------------------
  # 统计 parquet / video 数量
  # ---------------------------------------------------------------------------

  parquet_count=$(find "$d/data" -name "*.parquet" | wc -l)
  video_count=$(find "$d/videos" -name "*.mp4" | wc -l)

  echo "parquet count: $parquet_count"
  echo "video count:   $video_count"

  if [ "$parquet_count" -eq 0 ]; then
    echo "[ERROR] no parquet files found in $d/data"
    exit 1
  fi

  if [ "$video_count" -eq 0 ]; then
    echo "[ERROR] no mp4 files found in $d/videos"
    exit 1
  fi

  # H20 当前通常是三路相机，所以 video_count 应该约等于 parquet_count * 3。
  # 这里只做 warning，不强制退出，避免有些数据集相机数不同。
  expected_video_count=$((parquet_count * 3))
  if [ "$video_count" -ne "$expected_video_count" ]; then
    echo "[WARN] video count is not parquet_count * 3"
    echo "       parquet_count:        $parquet_count"
    echo "       expected video count: $expected_video_count"
    echo "       actual video count:   $video_count"
  fi

  # ---------------------------------------------------------------------------
  # 生成 stats.json / relative_stats.json
  # ---------------------------------------------------------------------------

  echo
  echo "Generating stats for: $d"

  uv run uv run python gr00t/data/stats.py \
    --dataset-path "$d" \
    --embodiment-tag NEW_EMBODIMENT \
    --modality-config-path "$CONFIG"

  # ---------------------------------------------------------------------------
  # 检查生成结果
  # ---------------------------------------------------------------------------

  test -s "$d/meta/stats.json" || {
    echo "[ERROR] stats.json was not generated or is empty: $d/meta/stats.json"
    exit 1
  }

  test -s "$d/meta/relative_stats.json" || {
    echo "[ERROR] relative_stats.json was not generated or is empty: $d/meta/relative_stats.json"
    exit 1
  }

  echo
  echo "Checking relative_stats keys..."

  python - <<PY
import json
from pathlib import Path

p = Path("$d/meta/relative_stats.json")
data = json.load(open(p, "r"))

required = ["left_joint_action", "right_joint_action"]
missing = [k for k in required if k not in data]

print("relative_stats keys:", list(data.keys()))

if missing:
    raise RuntimeError(f"Missing relative stats keys: {missing}")

print("relative_stats OK")
PY

  echo "Done: $d"

  SELECTED_PATHS+=("$d")
done

# =============================================================================
# 生成冒号分隔 DATASETS 文件
# =============================================================================

echo
echo "=============================================================================="
echo "Selected dataset paths"
echo "=============================================================================="

DATASETS=$(
  IFS=:
  echo "${SELECTED_PATHS[*]}"
)

echo "$DATASETS" | tr ':' '\n'

echo "$DATASETS" > "$OUT_PATH_FILE"

echo
echo "Saved dataset path list to:"
echo "  $OUT_PATH_FILE"

echo
echo "DATASETS string:"
echo "$DATASETS"

# =============================================================================
# 给出下一步训练命令
# =============================================================================

echo
echo "=============================================================================="
echo "Next step: smoke train"
echo "=============================================================================="
cat <<'EOF'

# cd /root/data/code/Isaac-GR00T

# DATASETS=$(cat examples/H20/selected_0612_dataset_paths.txt)

# CUDA_VISIBLE_DEVICES=0 uv run python \
#   gr00t/experiment/launch_finetune.py \
#   --base-model-path nvidia/GR00T-N1.7-3B \
#   --dataset-path "$DATASETS" \
#   --embodiment-tag NEW_EMBODIMENT \
#   --modality-config-path examples/H20/h20_config.py \
#   --num-gpus 1 \
#   --output-dir /root/data/results/Checkpoints/bao.he/h20/groot/groot_h20_selected_smoke_200 \
#   --save-steps 200 \
#   --max-steps 200 \
#   --global-batch-size 32 \
#   --dataloader-num-workers 4

EOF

echo "All selected datasets prepared successfully."