// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVexRiscv.h for the primary calling header

#include "VVexRiscv__pch.h"
#include "VVexRiscv___024root.h"

VL_ATTR_COLD void VVexRiscv___024root___eval_static(VVexRiscv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root___eval_static\n"); );
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VVexRiscv___024root___eval_initial(VVexRiscv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root___eval_initial\n"); );
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__reset__0 = vlSelfRef.reset;
}

VL_ATTR_COLD void VVexRiscv___024root___eval_final(VVexRiscv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root___eval_final\n"); );
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VVexRiscv___024root___dump_triggers__stl(VVexRiscv___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VVexRiscv___024root___eval_phase__stl(VVexRiscv___024root* vlSelf);

VL_ATTR_COLD void VVexRiscv___024root___eval_settle(VVexRiscv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root___eval_settle\n"); );
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            VVexRiscv___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("VexRiscv.v", 7, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VVexRiscv___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VVexRiscv___024root___dump_triggers__stl(VVexRiscv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root___dump_triggers__stl\n"); );
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VVexRiscv___024root___eval_triggers__stl(VVexRiscv___024root* vlSelf);
VL_ATTR_COLD void VVexRiscv___024root___eval_stl(VVexRiscv___024root* vlSelf);

VL_ATTR_COLD bool VVexRiscv___024root___eval_phase__stl(VVexRiscv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root___eval_phase__stl\n"); );
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VVexRiscv___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VVexRiscv___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VVexRiscv___024root___dump_triggers__ico(VVexRiscv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root___dump_triggers__ico\n"); );
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VVexRiscv___024root___dump_triggers__act(VVexRiscv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root___dump_triggers__act\n"); );
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge reset)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VVexRiscv___024root___dump_triggers__nba(VVexRiscv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root___dump_triggers__nba\n"); );
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge reset)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VVexRiscv___024root____Vm_traceActivitySetAll(VVexRiscv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root____Vm_traceActivitySetAll\n"); );
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
}

VL_ATTR_COLD void VVexRiscv___024root___ctor_var_reset(VVexRiscv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root___ctor_var_reset\n"); );
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->iBus_cmd_valid = VL_RAND_RESET_I(1);
    vlSelf->iBus_cmd_ready = VL_RAND_RESET_I(1);
    vlSelf->iBus_cmd_payload_pc = VL_RAND_RESET_I(32);
    vlSelf->iBus_rsp_valid = VL_RAND_RESET_I(1);
    vlSelf->iBus_rsp_payload_error = VL_RAND_RESET_I(1);
    vlSelf->iBus_rsp_payload_inst = VL_RAND_RESET_I(32);
    vlSelf->dBus_cmd_valid = VL_RAND_RESET_I(1);
    vlSelf->dBus_cmd_ready = VL_RAND_RESET_I(1);
    vlSelf->dBus_cmd_payload_wr = VL_RAND_RESET_I(1);
    vlSelf->dBus_cmd_payload_mask = VL_RAND_RESET_I(4);
    vlSelf->dBus_cmd_payload_address = VL_RAND_RESET_I(32);
    vlSelf->dBus_cmd_payload_data = VL_RAND_RESET_I(32);
    vlSelf->dBus_cmd_payload_size = VL_RAND_RESET_I(2);
    vlSelf->dBus_rsp_ready = VL_RAND_RESET_I(1);
    vlSelf->dBus_rsp_error = VL_RAND_RESET_I(1);
    vlSelf->dBus_rsp_data = VL_RAND_RESET_I(32);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
