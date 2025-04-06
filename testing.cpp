#include "VVexRiscv.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <fstream>
double read_result(VVexRiscv* cpu) {
    return cpu->VexRiscv__DOT__RegFile_1__DOT__registers[10];
} 

VVexRiscv* top;
vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

void loadElfToMemory(VVexRiscv* cpu, const char* elfPath) {
    std::ifstream elf(elfPath, std::ios::binary);
    if (!elf) {
        std::cerr << "⚠️ ELF file not found: " << elfPath << "\n";
        return;
    }
    // Dummy
    std::cout << "✅ ELF assumed loaded\n";
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);

    top = new VVexRiscv;

    VerilatedVcdC* tfp = new VerilatedVcdC;
    Verilated::traceEverOn(true);
    top->trace(tfp, 99);
    tfp->open("trace.vcd");

    // Get radius input from user
    double radius;
    std::cout << "Enter sphere radius: ";
    std::cin >> radius;

    // Calculate sphere volume using the dedicated function
    double volume = read_result(radius);
    std::cout << "🧮 Sphere Volume Calculated: " << volume << std::endl;

    // Reset
    top->reset = 1;
    for (int i = 0; i < 10; i++) {
        top->clk = 0; top->eval(); tfp->dump(main_time++);
        top->clk = 1; top->eval(); tfp->dump(main_time++);
    }
    top->reset = 0;

    // Run simulation
    for (int i = 0; i < 1000; i++) {
        top->clk = 0; top->eval(); tfp->dump(main_time++);
        top->clk = 1; top->eval(); tfp->dump(main_time++);

        // Check result register value (e.g., x10 = a0)
        if (i == 999) {
            double result = read_result(top);
            std::cout << "🧠 Sphere Volume Computed by CPU: " << result << std::endl;
            // Exit after showing both results
            break;
        }
    }

    tfp->close();
    delete tfp;
    delete top;
    return 0;
}
