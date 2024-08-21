#include "models/instructions/ITypeInstruction.h"

#include <iostream>
#include <vector>

using std::copy, std::cout, std::string, std::vector;

class ITypeInstruction : BaseInstruction {
   public:
    ITypeInstruction(uint32_t instruction) {
        instructionType = InstructionType(iType);
    }
    explicit ITypeInstruction(const vector<string> inputInstrunction) {
        encode(inputInstrunction);
        instructionType = InstructionType(iType);
    }

    void encode(vector<string> instruction) {
    }

    void print() {
    }

    // Risc-V I instruction implementations

    /// @brief The add immediate risc-v I type instruction
    void addi();
};
