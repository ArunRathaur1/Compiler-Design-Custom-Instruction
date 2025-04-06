// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVexRiscv.h for the primary calling header

#include "VVexRiscv__pch.h"
#include "VVexRiscv_VexRiscv.h"
#include "VVexRiscv__Syms.h"

void VVexRiscv_VexRiscv___ctor_var_reset(VVexRiscv_VexRiscv* vlSelf);

VVexRiscv_VexRiscv::VVexRiscv_VexRiscv(VVexRiscv__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VVexRiscv_VexRiscv___ctor_var_reset(this);
}

void VVexRiscv_VexRiscv::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VVexRiscv_VexRiscv::~VVexRiscv_VexRiscv() {
}
