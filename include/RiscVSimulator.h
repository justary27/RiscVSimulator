#ifndef RISC_V_SIMULATOR_H
#define RISC_V_SIMULATOR_H

#include <string>
#include <vector>

#include "base/BaseInstruction.h"

class RiscVSimulator {
    std::vector<BaseInstruction> instructions;

   public:
    void simulateProgram(const std::string programPath);
};

#endif
