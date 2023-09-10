#include <iostream>
#include <BaseInstruction.h>

using std::copy, std::cout, std::string;

class RTypeInstruction : BaseInstruction
{
    int opcode[7];
    int rd[5];
    int func3[3];
    int rs1[5];
    int func7[12];

public:
    explicit RTypeInstruction(const string inputInstrunction)
    {
        encode(inputInstrunction);
        instructionType = InstructionType(rType);
    }

    void encode(string instruction)
    {
        // std::copy(instruction, instruction + 6, opcode);
        // std::copy(instruction + 7, instruction + 11, rd);
        // std::copy(instruction + 12, instruction + 14, func3);
        // std::copy(instruction + 15, instruction + 19, rs1);
        // std::copy(instruction + 20, instruction + 31, func7);
    }

    void execute() {}

    void print()
    {
        for (int i = 0; i < 32; i++)
        {
            cout << instruction[i];
        }
    }
};
