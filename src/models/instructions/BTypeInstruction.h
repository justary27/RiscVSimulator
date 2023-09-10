#include <BaseInstruction.h>

class BTypeInstruction : BaseInstruction
{
public:
    BTypeInstruction()
    {
        // encode();
        instructionType = InstructionType(bType);
    }

    void encode() {}
};