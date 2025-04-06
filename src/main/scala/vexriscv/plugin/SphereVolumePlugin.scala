package vexriscv.plugin

import spinal.core._
import spinal.lib._
import vexriscv.{Stageable, VexRiscv}
import vexriscv.plugin.DecoderService

class SphereVolumePlugin extends Plugin[VexRiscv] {
  // Define custom signals
  object SPHERE_VOLUME extends Stageable(UInt(32 bits))
  object IS_SPHERE_VOLUME extends Stageable(Bool)

  override def setup(pipeline: VexRiscv): Unit = {
    import pipeline.config._
    val decoderService = pipeline.service(classOf[DecoderService])

    decoderService.add(
      key = M"0000001----------000-----0110011", // Custom R-type encoding (you can customize funct7/funct3)
      List(
        IS_SPHERE_VOLUME -> True,
        REGFILE_WRITE_VALID -> True,
        BYPASSABLE_EXECUTE_STAGE -> False
      )
    )
  }

  override def build(pipeline: VexRiscv): Unit = {
    import pipeline._
    import pipeline.config._

    execute plug new Area {
      import execute._

      val radius = input(SRC1).asUInt // Take radius from SRC1 (e.g., rs1)

      // r^3 = r * r * r
      val rSquared = radius * radius
      val rCubed = rSquared * radius

      // Fixed-point constants (scaled by 1024)
      val PI = U(3217, 32 bits)            // ≈ 3.14159 * 1024
      val FOUR_BY_THREE = U(1365, 32 bits) // ≈ (4/3) * 1024

      // Multiply r³ * π (scaled)
      val step1 = (rCubed * PI) >> 10      // Scale back from PI factor (1024)
      val step2 = (step1 * FOUR_BY_THREE) >> 10 // Scale back again

      val volume = step2.resized

      insert(SPHERE_VOLUME) := volume
    }

    memory plug new Area {
      import memory._
      when(arbitration.isValid && input(IS_SPHERE_VOLUME)) {
        output(REGFILE_WRITE_DATA) := input(SPHERE_VOLUME).asBits
      }
    }
  }
}
