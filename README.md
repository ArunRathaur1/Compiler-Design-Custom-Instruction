🧠 VexRiscv Custom Instruction: Sphere Volume Calculator

This project implements a custom instruction for the VexRiscv RISC-V processor core to calculate the volume of a sphere using the formula:

Volume = (4 / 3) × π × r³

Implemented as a Scala plugin, this instruction adds hardware-accelerated computation of the sphere volume using fixed-point arithmetic, integrated directly into the VexRiscv pipeline.

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
│               │   └── SphereVolumePlugin.scala  # ✅ Custom plugin
│               └── demo/
│                   └── GenCustomSimdAdd.scala    # ✅ Modified to include your plugin

✅ Implementation Steps

1. Clone the VexRiscv Repository

git clone https://github.com/SpinalHDL/VexRiscv
cd VexRiscv

2. Create Your Custom Instruction Plugin

Create SphereVolumePlugin.scala in:

src/main/scala/vexriscv/plugin/

Implement:

Custom opcode for volume calculation

Computation logic for 

Fixed-point handling for π

Pipeline integration

3. Register Your Plugin

Edit GenCustomSimdAdd.scala:

new SphereVolumePlugin(),

4. Development Environment Setup

4.1 Install SBT

Download from: https://www.scala-sbt.org/download/

Add sbt to system PATH

Verify:

sbt --version

4.2 Install MSYS2 and Tools

pacman -Syu
pacman -S base-devel mingw-w64-x86_64-toolchain git

4.3 Install Verilator

pacman -S mingw-w64-x86_64-verilator

⚒️ Build and Compile

5.1 Compile Scala Project

sbt compile

Check VexRiscv.v is generated with your plugin logic.

🔧 Testing Your Instruction

6.1 Create C++ Testbench

Create main.cpp with:

#include "VVexRiscv.h"

Set up simulation environment

Inject test values

Print results

6.2 Compile with Verilator

verilator -Wall --cc VexRiscv.v --exe main.cpp --trace
make -C obj_dir -f VVexRiscv.mk VVexRiscv -j

6.3 Run Simulation

cd obj_dir
./VVexRiscv

📊 Mathematical & Hardware Details

π handled using fixed-point (e.g., π ≈ 314/100)

Efficient r³ computation

Fixed-point vs floating-point tradeoffs

Pipelined stages for latency optimization

✨ Assembly Usage Example

# r1 contains radius value
SPHERE_VOL r2, r1   # Custom instruction

⏳ Future Enhancements

Add floating-point support

Implement other volume formulas (cylinder, cone, etc.)

Wrap in C/C++ software API for usage

Explore further RISC-V custom extensions