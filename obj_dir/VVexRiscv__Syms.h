// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VVEXRISCV__SYMS_H_
#define VERILATED_VVEXRISCV__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VVexRiscv.h"

// INCLUDE MODULE CLASSES
#include "VVexRiscv___024root.h"
#include "VVexRiscv_VexRiscv.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VVexRiscv__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VVexRiscv* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VVexRiscv___024root            TOP;
    VVexRiscv_VexRiscv             TOP__VexRiscv;

    // SCOPE NAMES
    VerilatedScope __Vscope_VexRiscv;

    // CONSTRUCTORS
    VVexRiscv__Syms(VerilatedContext* contextp, const char* namep, VVexRiscv* modelp);
    ~VVexRiscv__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
