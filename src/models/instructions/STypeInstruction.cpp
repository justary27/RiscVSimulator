#include "models/instructions/STypeInstruction.h"

#include <iostream>

using std::copy, std::cout, std::string;

class STypeInstruction : BaseInstruction {
   public:
    STypeInstruction() {
        instructionType = InstructionType(sType);
    }
};
