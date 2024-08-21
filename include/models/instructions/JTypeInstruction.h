#ifndef J_TYPE_INSTRUCTION_H
#define J_TYPE_INSTRUCTION_H

#include <cstdint>
#include <iostream>

#include "interface/BaseInstruction.h"

using std::copy, std::cout, std::string;

class JTypeInstruction : BaseInstruction {
    uint32_t rd : 5;
    uint32_t imm4;
    uint32_t imm3;
    uint32_t imm2;
    uint32_t imm;

   public:
    JTypeInstruction() {
        instructionType = InstructionType(jType);
    }

    void encode() {}
};

#endif
