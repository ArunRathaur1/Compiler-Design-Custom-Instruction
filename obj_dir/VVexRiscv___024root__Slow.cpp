// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVexRiscv.h for the primary calling header

#include "VVexRiscv__pch.h"
#include "VVexRiscv__Syms.h"
#include "VVexRiscv___024root.h"

void VVexRiscv___024root___ctor_var_reset(VVexRiscv___024root* vlSelf);

VVexRiscv___024root::VVexRiscv___024root(VVexRiscv__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VVexRiscv___024root___ctor_var_reset(this);
}

void VVexRiscv___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VVexRiscv___024root::~VVexRiscv___024root() {
}
