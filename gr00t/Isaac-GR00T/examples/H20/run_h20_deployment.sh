#!/bin/bash
set -e

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
REPO_ROOT="$(cd "${SCRIPT_DIR}/../.." && pwd)"

# MODEL_HOST="${1:-10.8.26.63}"
# MODEL_HOST="${1:-10.8.24.158}"
MODEL_HOST="${1:-192.168.50.220}"
MODEL_PORT="${2:-5555}"

cd "${REPO_ROOT}"

source ~/miniforge3/etc/profile.d/conda.sh
conda activate groot_client

export H20_SDK_DIR="${REPO_ROOT}/examples/H20/robots/sdk_package"

export LD_LIBRARY_PATH="${H20_SDK_DIR}/lib/linux/arm/aarch64:${H20_SDK_DIR}/dependency/sdk/Runtime_Env/linux/arm/aarch64:${H20_SDK_DIR}/dependency/fastdds/linux/arm/aarch64:${LD_LIBRARY_PATH}"

export PYTHONPATH="${H20_SDK_DIR}/lib/linux/arm/aarch64:${REPO_ROOT}:${PYTHONPATH}"

source examples/H20/robots/gripper/h2x/install/setup.bash
source examples/H20/vla_sdk/vla/install/setup.bash

python -m examples.H20.deploy.main \
  --host "${MODEL_HOST}" \
  --port "${MODEL_PORT}"
