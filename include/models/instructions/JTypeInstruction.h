#ifndef J_TYPE_INSTRUCTION_H
#define J_TYPE_INSTRUCTION_H

#include <cstdint>

#include "base/BaseInstruction.h"

/// @brief The `JTypeInstruction` class that represents the
/// J-type instruction in the Risc-V architecture.
class JTypeInstruction : BaseInstruction {
    private:
        uint32_t rd : 5;
        uint32_t imm4;
        uint32_t imm3;
        uint32_t imm2;
        uint32_t imm;

        // Memory operating functions

        void decode();

        void execute();
};

#endif
