#include "models/instructions/JTypeInstruction.h"

#include <iostream>

using std::copy, std::cout, std::string;

class JTypeInstruction : BaseInstruction {
   public:
    JTypeInstruction() {
        instructionType = InstructionType(jType);
    }

    void encode() {}
};
