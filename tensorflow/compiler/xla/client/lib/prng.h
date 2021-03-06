/* Copyright 2018 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#ifndef TENSORFLOW_COMPILER_XLA_CLIENT_LIB_PRNG_H_
#define TENSORFLOW_COMPILER_XLA_CLIENT_LIB_PRNG_H_

#include <array>

#include "tensorflow/compiler/xla/client/xla_client/xla_builder.h"
#include "tensorflow/compiler/xla/xla_data.pb.h"

namespace xla {

// Returns a tensor containing 'shape' random values uniformly distributed in
// the range [minval, maxval). Requires 2 32-bit integer seeds.
// Currently only 'shape's of type F32 are implemented.
XlaOp StatelessRngUniform(std::array<XlaOp, 2> seeds, const Shape& shape,
                          XlaOp minval, XlaOp maxval);

}  // namespace xla

#endif  // TENSORFLOW_COMPILER_XLA_CLIENT_LIB_PRNG_H_
