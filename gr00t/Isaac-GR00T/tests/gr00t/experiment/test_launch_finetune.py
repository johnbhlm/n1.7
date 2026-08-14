# SPDX-FileCopyrightText: Copyright (c) 2026 NVIDIA CORPORATION & AFFILIATES.
# SPDX-License-Identifier: Apache-2.0

from types import SimpleNamespace

from gr00t.configs.finetune_config import FinetuneConfig
from gr00t.experiment.launch_finetune import apply_module_learning_rates
import pytest


def _finetune_config(**kwargs) -> FinetuneConfig:
    return FinetuneConfig(
        base_model_path="model",
        dataset_path="dataset",
        embodiment_tag="test",
        learning_rate=1e-4,
        **kwargs,
    )


@pytest.mark.parametrize(
    ("overrides", "expected"),
    [
        ({}, {}),
        (
            {"backbone_learning_rate": 1e-5, "action_head_learning_rate": 1e-4},
            {"backbone": 1e-5, "action_head": 1e-4},
        ),
        ({"backbone_learning_rate": 1e-5}, {"backbone": 1e-5}),
    ],
)
def test_apply_module_learning_rates(overrides, expected):
    training_config = SimpleNamespace(module_learning_rates={"stale": 1.0})

    apply_module_learning_rates(_finetune_config(**overrides), training_config)

    assert training_config.module_learning_rates == expected


@pytest.mark.parametrize(
    "overrides",
    [
        {"backbone_learning_rate": 0},
        {"backbone_learning_rate": -1e-5},
        {"action_head_learning_rate": 0},
        {"action_head_learning_rate": -1e-4},
    ],
)
def test_module_learning_rate_validation(overrides):
    with pytest.raises(ValueError, match="must be greater than zero"):
        _finetune_config(**overrides)
