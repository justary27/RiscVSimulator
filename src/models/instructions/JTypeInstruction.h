#include <iostream>
#include <BaseInstruction.h>

using std::copy, std::cout, std::string;

class JTypeInstruction : BaseInstruction
{
public:
    JTypeInstruction()
    {
        instructionType = InstructionType(jType);
    }

    void encode() {}
};
