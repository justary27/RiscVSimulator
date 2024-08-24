#ifndef B_TYPE_INSTRUCTION_H
#define B_TYPE_INSTRUCTION_H

#include <cstdint>

#include "base/BaseInstruction.h"

/// @brief The `BTypeInstruction` class that represents the
/// B-type instruction in the Risc-V architecture.
class BTypeInstruction : BaseInstruction {
    private:
        uint32_t func3 : 3;
        uint32_t rs1 : 5;
        uint32_t rs2 : 5;
        uint32_t imm2 : 7;
        uint32_t imm : 12;

        // Memory operating functions

        void decode();

        void execute();

        // Risc-V B instruction definitions

};

#endif