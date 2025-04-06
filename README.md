📘 Compiler Design Assignment

🧪 Custom VexRiscv Instruction: Sphere Volume Calculator

This project extends the VexRiscv RISC-V processor with a custom hardware instruction to calculate the volume of a sphere, using the formula:

Volume = 4/3 × π × r³

The custom instruction is implemented as a Scala plugin that integrates with the VexRiscv pipeline to provide hardware acceleration for this computation.

📁 Project Structure

VexRiscv/
├── build.sbt
├── Makefile
├── README.md
├── src/
│   └── main/
│       └── scala/
│           └── vexriscv/
│               ├── VexRiscv.scala
│               ├── VexRiscvConfigs.scala
│               ├── plugin/
│               │   ├── Decoder.scala
│               │   ├── FetchCachePlugin.scala
│               │   ├── RegFilePlugin.scala
│               │   └── SphereVolumePlugin.scala       # ✅ Custom plugin
│               └── demo/
│                   └── GenCustomSimdAdd.scala         # ✅ Modified to include your plugin

🧩 Implementation Steps

1. Clone the Repository

git clone https://github.com/SpinalHDL/VexRiscv
cd VexRiscv

2. Create the Custom Plugin

Create a new file: src/main/scala/vexriscv/plugin/SphereVolumePlugin.scala

In this file:

Define a custom opcode

Implement the calculation logic

Use fixed-point math (e.g. π ≈ 3.14 → 314/100)

Compute r³ efficiently

3. Register the Plugin

Edit src/main/scala/vexriscv/demo/GenCustomSimdAdd.scala:

plugins += new SphereVolumePlugin()

🛠 Development Environment Setup

4.1 Install SBT (Scala Build Tool)

Download: https://www.scala-sbt.org/download/

Install and add to PATH

Verify: sbt --version

4.2 Install MSYS2 and Tools

pacman -Syu
pacman -S base-devel mingw-w64-x86_64-toolchain git

4.3 Install Verilator

pacman -S mingw-w64-x86_64-verilator

🏗️ Build and Compile Process

5.1 Compile Scala Project

sbt compile

This generates VexRiscv.v with your plugin logic.

5.2 Verify Generated Verilog

Ensure SphereVolumePlugin logic is present in VexRiscv.v

🧪 Testing the Custom Instruction

6.1 Create C++ Testbench

Create a file like main.cpp:

Include VVexRiscv.h

Inject test radius value to register x1

Observe result in x2

6.2 Compile the Testbench

verilator -Wall --cc VexRiscv.v --exe main.cpp --trace
make -C obj_dir -f VVexRiscv.mk VVexRiscv -j

6.3 Run the Simulation

cd obj_dir
./VVexRiscv

⚙️ Implementation Notes

Mathematical Logic

Fixed-point π: 314/100

r³ via multiplier chaining

Final formula: (4 * 314 * r³) / (3 * 100)

Instruction Format

R-type custom instruction

Custom opcode from reserved space

Assembly Example

# r1 = input radius
SPHERE_VOL r2, r1    # r2 = volume result

🚀 Optimization Considerations

Pipelining for performance

Tradeoffs: single-cycle vs. multi-cycle

Option to use floating-point extensions