#ifndef B_TYPE_INSTRUCTION_H
#define B_TYPE_INSTRUCTION_H

#include "interface/BaseInstruction.h"

class BTypeInstruction : BaseInstruction {
    uint32_t func3 : 3;
    uint32_t rs1 : 5;
    uint32_t rs2 : 5;
    uint32_t imm2 : 7;
    uint32_t imm : 12;

   public:
    BTypeInstruction();
    // BTypeInstruction() {
    //     // encode();
    //     instructionType = InstructionType(bType);
    // }

    void encode();
};

#endif