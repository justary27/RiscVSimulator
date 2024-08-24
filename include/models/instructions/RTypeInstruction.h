#ifndef R_TYPE_INSTRUCTION_H
#define R_TYPE_INSTRUCTION_H

#include <cstdint>

#include "base/BaseInstruction.h"

/// @brief The `RTypeInstruction` class that represents the
/// R-type instruction in the Risc-V architecture.
class RTypeInstruction : BaseInstruction {
    private:
        uint32_t opcode : 7;
        uint32_t rd : 5;
        uint32_t func3 : 3;
        uint32_t rs1 : 5;
        uint32_t func7 : 12;

        // Memory operating functions

        void decode();

        void execute();
};

#endif
