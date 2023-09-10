#include <RiscVSimulator.h>

int main()
{
    // Intializing the simulator
    RiscVSimulator simulator = RiscVSimulator();

    // Simulating the Prime check program
    simulator.simulateProgram("commands/primeCommands.txt");

    // Simulating the Factorial Calculating command
    simulator.simulateProgram("commands/factorialCommands.txt");

    // Simulating the Gcd & Lcm program
    simulator.simulateProgram("commands/gcdLcmCommands.txt");
}
