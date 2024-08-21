#include "models/instructions/BTypeInstruction.h"

void BTypeInstruction::encode(){};

BTypeInstruction::BTypeInstruction() {
    // encode();
    instructionType = InstructionType(bType);
}
