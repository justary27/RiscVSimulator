#include <iostream>
#include<vector>
#include <BaseInstruction.h>

using std::copy, std::cout, std::string, std::vector;

class ITypeInstruction : BaseInstruction
{
    int opcode[7];
    int rd[5];
    int func3[3];
    int rs1[5];
    int func7[12];

public:
    explicit ITypeInstruction(const vector<string> inputInstrunction)
    {
        encode(inputInstrunction);
        instructionType = InstructionType(iType);
    }

    void encode(vector<string> instruction)
    {
        copy(instruction, instruction + 6, opcode);
        copy(instruction + 7, instruction + 11, rd);
        copy(instruction + 12, instruction + 14, func3);
        copy(instruction + 15, instruction + 19, rs1);
        copy(instruction + 20, instruction + 31, func7);
    }

    void execute() {}

    void print()
    {
        for (int i = 0; i < 32; i++)
        {
            cout << instruction[i];
        }
    }

    // Risc-V I instruction implementations

    /// @brief The add immediate risc-v I type instruction
    void addi() {}
};
