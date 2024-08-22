#ifndef BASE_INSTRUCTION_H
#define BASE_INSTRUCTION_H

#include "enums/InstructionType.h"

class BaseInstruction {
    /// @brief Decodes the instruction
    virtual void encode() = 0;

    /// @brief Executes the instruction
    virtual void execute() = 0;

   public:
    /// @brief The Risc-V instruction type
    InstructionType instructionType;

    /// @brief Prints the instruction
    virtual void print() const = 0;

    // Virtual destructor for polymorphism
    virtual ~BaseInstruction();
};

#endif
