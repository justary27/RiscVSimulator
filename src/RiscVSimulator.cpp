#include "RiscVSimulator.h"

#include <fstream>
#include <iostream>

#include "utils/utils.h"

void RiscVSimulator::simulateProgram(const std::string programPath) {
    std::cout << "Executing program @ " << programPath << std::endl;

    std::ifstream inputFile(programPath);

    if (!inputFile.is_open()) {
        std::cerr << "Error opening file: " << programPath << std::endl;
    }

    std::string instruction;

    while (std::getline(inputFile, instruction)) {
        vector<string> x = utils::splitString(instruction);

        for (auto i : x) {
            std::cout << i << " ";
        }

        std::cout << std::endl;
    }
}
