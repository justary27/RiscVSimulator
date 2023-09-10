#include <iostream>
#include <BaseInstruction.h>

using std::copy, std::cout, std::string;

class STypeInstruction : BaseInstruction
{
public:
    STypeInstruction()
    {
        instructionType = InstructionType(sType);
    }
};
