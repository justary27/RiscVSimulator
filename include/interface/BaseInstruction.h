#ifndef BASE_INSTRUCTION_H
#define BASE_INSTRUCTION_H

#include <cstdint>

#include "enums/InstructionType.h"

class BaseInstruction {
   protected:
    /// @brief The 32 bit Risc-V instruction
    uint32_t instruction;

   public:
    /// @brief The Risc-V instruction type
    InstructionType instructionType;

    // void set_instruction();
    // BaseInstruction(uint32_t instruction) {}

    /// @brief Decodes the instruction
    virtual void encode() = 0;

    /// @brief Executes the instruction
    virtual void execute() = 0;

    /// @brief Prints the instruction
    virtual void print() const = 0;

    // Virtual destructor for polymorphism
    virtual ~BaseInstruction() {}
};

#endif
