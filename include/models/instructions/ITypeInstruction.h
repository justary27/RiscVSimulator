#ifndef I_TYPE_INSTRUCTION_H
#define I_TYPE_INSTRUCTION_H

#include <cstdint>

#include "base/BaseInstruction.h"

/// @brief The `ITypeInstruction` class that represents the 
/// I-type instruction in the Risc-V architecture.
class ITypeInstruction : BaseInstruction {
    private:
        uint32_t opcode : 7;
        uint32_t rd : 5;
        uint32_t func3 : 3;
        uint32_t rs1 : 5;
        uint32_t imm : 12;

        // Memory operating functions

        void encode();

        void execute();

        // Risc-V I instruction definitions

        /// @brief The add immediate risc-v I type instruction
        void addi();

        void andi();

        void ori();

        void xori();

    public:
        ITypeInstruction();
};

#endif
