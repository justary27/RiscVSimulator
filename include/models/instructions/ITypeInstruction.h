#ifndef I_TYPE_INSTRUCTION_H
#define I_TYPE_INSTRUCTION_H

#include <cstdint>
#include <iostream>
#include <vector>

#include "interface/BaseInstruction.h"

using std::copy, std::cout, std::string, std::vector;

class ITypeInstruction : BaseInstruction {
    uint32_t opcode : 7;
    uint32_t rd : 5;
    uint32_t func3 : 3;
    uint32_t rs1 : 5;
    uint32_t imm : 12;

   public:
    ITypeInstruction(uint32_t instruction);
    explicit ITypeInstruction(const vector<string> inputInstrunction) {
        encode(inputInstrunction);
        instructionType = InstructionType(iType);
    }

    void encode(vector<string> instruction) {
        // copy(instruction, instruction + 6, opcode);
        // copy(instruction + 7, instruction + 11, rd);
        // copy(instruction + 12, instruction + 14, func3);
        // copy(instruction + 15, instruction + 19, rs1);
        // copy(instruction + 20, instruction + 31, func7);
    }

    void execute();

    void print() {
        // for (int i = 0; i < 32; i++) {
        //     cout << instruction[i];
        // }
    }

    // Risc-V I instruction implementations

    /// @brief The add immediate risc-v I type instruction
    void addi();
};

#endif
