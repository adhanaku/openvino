// Copyright (C) 2018-2023 Intel Corporation
// SPDX-License-Identifier: Apache-2.0
//

#pragma once

#include <cmath>

#include "openvino/op/loop.hpp"
#include "openvino/op/util/sub_graph_base.hpp"

namespace ov {
namespace reference {
void loop(const std::shared_ptr<Model>& body,
          const op::util::OutputDescriptionVector& out_descs,
          const op::util::InputDescriptionVector& input_descs,
          const op::v5::Loop::SpecialBodyPorts& special_ports,
          const HostTensorVector& out,
          const HostTensorVector& args);
}
}  // namespace ov
