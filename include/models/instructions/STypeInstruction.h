#ifndef S_TYPE_INSTRUCTION_H
#define S_TYPE_INSTRUCTION_H

#include <cstdint>

#include "base/BaseInstruction.h"

/// @brief The `STypeInstruction` class that represents the
/// S-type instruction in the Risc-V architecture.
class STypeInstruction : BaseInstruction {
    private:
        uint32_t imm2 : 7;
        uint32_t rs2 : 5;
        uint32_t rs1 : 5;
        uint32_t func3 : 3;
        uint32_t imm : 5;

        // Memory operating functions

        void decode();

        void execute();
};

#endif
