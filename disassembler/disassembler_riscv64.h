/*
 * Copyright (C) 2023 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ART_DISASSEMBLER_DISASSEMBLER_RISCV64_H_
#define ART_DISASSEMBLER_DISASSEMBLER_RISCV64_H_

#include "disassembler.h"

namespace art {
namespace riscv64 {

class DisassemblerRiscv64 final : public Disassembler {
 public:
  explicit DisassemblerRiscv64(DisassemblerOptions* options)
      : Disassembler(options) {}

  size_t Dump(std::ostream& os, const uint8_t* begin) override;
  void Dump(std::ostream& os, const uint8_t* begin, const uint8_t* end) override;

 private:
  class Printer;

  DISALLOW_COPY_AND_ASSIGN(DisassemblerRiscv64);
};

}  // namespace riscv64
}  // namespace art

#endif  // ART_DISASSEMBLER_DISASSEMBLER_RISCV64_H_
