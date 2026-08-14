# SPDX-FileCopyrightText: Copyright (c) 2026 NVIDIA CORPORATION & AFFILIATES.
# SPDX-License-Identifier: Apache-2.0

from pathlib import Path

from gr00t.configs.training.training_config import TrainingConfig
from gr00t.experiment.trainer import Gr00tTrainer
import pytest
import torch
from torch import nn
from transformers import TrainingArguments


class _TinyModel(nn.Module):
    def __init__(self):
        super().__init__()
        self.backbone = nn.Sequential(nn.Linear(4, 4), nn.LayerNorm(4))
        self.action_head = nn.ModuleDict(
            {
                "state_encoder": nn.Linear(4, 4),
                "model": nn.Linear(4, 4),
            }
        )
        self.foo = nn.Linear(4, 1)

    def forward(self, input_ids=None, labels=None):
        del input_ids, labels
        return {"loss": self.foo(self.backbone(torch.ones(1, 4))).sum()}


def _make_trainer(
    tmp_path: Path, module_learning_rates: dict[str, float]
) -> tuple[Gr00tTrainer, _TinyModel]:
    model = _TinyModel()
    args = TrainingArguments(
        output_dir=tmp_path,
        learning_rate=1e-4,
        weight_decay=1e-2,
        optim="adamw_torch",
        use_cpu=True,
        report_to="none",
    )
    trainer = Gr00tTrainer(
        model=model,
        args=args,
        module_learning_rates=module_learning_rates,
    )
    trainer.create_optimizer()
    return trainer, model


def _parameter_options(trainer: Gr00tTrainer) -> dict[int, tuple[float, float]]:
    return {
        id(parameter): (group["lr"], group["weight_decay"])
        for group in trainer.optimizer.param_groups
        for parameter in group["params"]
    }


def test_empty_overrides_preserve_single_learning_rate(tmp_path):
    trainer, model = _make_trainer(tmp_path, {})
    options = _parameter_options(trainer)

    assert {lr for lr, _ in options.values()} == {1e-4}
    assert set(options) == {id(parameter) for parameter in model.parameters()}


def test_module_rates_fallback_nested_priority_and_unique_parameters(tmp_path):
    trainer, model = _make_trainer(
        tmp_path,
        {"backbone": 1e-5, "action_head": 5e-5, "action_head.model": 1e-4},
    )
    options = _parameter_options(trainer)
    grouped_ids = [
        id(parameter) for group in trainer.optimizer.param_groups for parameter in group["params"]
    ]

    for name, parameter in model.named_parameters():
        expected = 1e-4
        if name.startswith("backbone."):
            expected = 1e-5
        elif name.startswith("action_head.state_encoder."):
            expected = 5e-5
        elif name.startswith("action_head.model."):
            expected = 1e-4
        assert options[id(parameter)][0] == expected, name
    assert len(grouped_ids) == len(set(grouped_ids))


def test_frozen_parameters_are_excluded(tmp_path):
    trainer, model = _make_trainer(tmp_path, {"backbone": 1e-5, "action_head": 1e-4})
    for parameter in model.backbone.parameters():
        parameter.requires_grad = False
    trainer.optimizer = None
    trainer.create_optimizer()

    options = _parameter_options(trainer)
    assert all(id(parameter) not in options for parameter in model.backbone.parameters())


def test_weight_decay_preserves_bias_and_layer_norm_exclusions(tmp_path):
    trainer, model = _make_trainer(tmp_path, {"backbone": 1e-5, "action_head": 1e-4})
    options = _parameter_options(trainer)

    for name, parameter in model.named_parameters():
        weight_decay = options[id(parameter)][1]
        if name.endswith("bias") or name.startswith("backbone.1."):
            assert weight_decay == 0, name
        else:
            assert weight_decay == trainer.args.weight_decay, name


@pytest.mark.parametrize(
    "kwargs",
    [
        {"learning_rate": 0},
        {"module_learning_rates": {"": 1e-5}},
        {"module_learning_rates": {"backbone": 0}},
    ],
)
def test_learning_rate_config_validation(kwargs):
    with pytest.raises(ValueError):
        TrainingConfig(**kwargs)
