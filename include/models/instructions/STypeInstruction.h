#ifndef S_TYPE_INSTRUCTION_H
#define S_TYPE_INSTRUCTION_H

#include <cstdint>
#include <iostream>

#include "interface/BaseInstruction.h"

using std::copy, std::cout, std::string;

class STypeInstruction : BaseInstruction {
    uint32_t imm2 : 7;
    uint32_t rs2 : 5;
    uint32_t rs1 : 5;
    uint32_t func3 : 3;
    uint32_t imm : 5;

   public:
    STypeInstruction() {
        instructionType = InstructionType(sType);
    }
};

#endif
