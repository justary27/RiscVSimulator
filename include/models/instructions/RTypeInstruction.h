#ifndef R_TYPE_INSTRUCTION_H
#define R_TYPE_INSTRUCTION_H

#include <cstdint>
#include <iostream>

#include "interface/BaseInstruction.h"

using std::copy, std::cout, std::string;

class RTypeInstruction : BaseInstruction {
    uint32_t opcode : 7;
    uint32_t rd : 5;
    uint32_t func3 : 3;
    uint32_t rs1 : 5;
    uint32_t func7 : 12;

   public:
    explicit RTypeInstruction(const string inputInstrunction) {
        encode(inputInstrunction);
        instructionType = InstructionType(rType);
    }

    void encode(string instruction) {
        // std::copy(instruction, instruction + 6, opcode);
        // std::copy(instruction + 7, instruction + 11, rd);
        // std::copy(instruction + 12, instruction + 14, func3);
        // std::copy(instruction + 15, instruction + 19, rs1);
        // std::copy(instruction + 20, instruction + 31, func7);
    }

    void execute() {}

    void print() {
        // for (int i = 0; i < 32; i++) {
        //     cout << instruction[i];
        // }
    }
};

#endif
