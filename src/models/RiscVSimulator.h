#include <iostream>
#include<vector>
#include <BaseInstruction.h>

using std::cout, std::string, std::vector;

class RiscVSimulator
{
    vector<BaseInstruction> instructions;
public:
    static void simulateProgram(const string programPath)
    {
        cout << programPath;
    }
};
