#include <InstructionType.h>

class BaseInstruction
{

protected:
    /// @brief The 32 bit Risc-V instruction
    int instruction[32];

public:
    /// @brief The Risc-V instruction type
    InstructionType instructionType;

    // void set_instruction();

    /// @brief Decodes the instruction
    virtual void encode() = 0;

    /// @brief Executes the instruction
    virtual void execute() = 0;

    /// @brief Prints the instruction
    virtual void print() const = 0;

    // Virtual destructor for polymorphism
    virtual ~BaseInstruction() {}
};
