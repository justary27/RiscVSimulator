#ifndef RISC_V_SIMULATOR_H
#define RISC_V_SIMULATOR_H

#include <string>
#include <vector>

#include "interface/BaseInstruction.h"

class RiscVSimulator {
    std::vector<BaseInstruction> instructions;

   public:
    static void simulateProgram(const std::string programPath);
};

#endif
