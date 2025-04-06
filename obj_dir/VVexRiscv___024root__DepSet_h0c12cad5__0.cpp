// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVexRiscv.h for the primary calling header

#include "VVexRiscv__pch.h"
#include "VVexRiscv___024root.h"

void VVexRiscv___024root___eval_triggers__ico(VVexRiscv___024root* vlSelf);
void VVexRiscv___024root___eval_ico(VVexRiscv___024root* vlSelf);

bool VVexRiscv___024root___eval_phase__ico(VVexRiscv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root___eval_phase__ico\n"); );
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VVexRiscv___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        VVexRiscv___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VVexRiscv___024root___eval_act(VVexRiscv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root___eval_act\n"); );
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void VVexRiscv___024root___eval_triggers__act(VVexRiscv___024root* vlSelf);

bool VVexRiscv___024root___eval_phase__act(VVexRiscv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root___eval_phase__act\n"); );
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VVexRiscv___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VVexRiscv___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void VVexRiscv___024root___eval_nba(VVexRiscv___024root* vlSelf);

bool VVexRiscv___024root___eval_phase__nba(VVexRiscv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root___eval_phase__nba\n"); );
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VVexRiscv___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VVexRiscv___024root___dump_triggers__ico(VVexRiscv___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VVexRiscv___024root___dump_triggers__nba(VVexRiscv___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VVexRiscv___024root___dump_triggers__act(VVexRiscv___024root* vlSelf);
#endif  // VL_DEBUG

void VVexRiscv___024root___eval(VVexRiscv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root___eval\n"); );
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            VVexRiscv___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("VexRiscv.v", 7, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VVexRiscv___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VVexRiscv___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("VexRiscv.v", 7, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VVexRiscv___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("VexRiscv.v", 7, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VVexRiscv___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VVexRiscv___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VVexRiscv___024root___eval_debug_assertions(VVexRiscv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root___eval_debug_assertions\n"); );
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.iBus_cmd_ready & 0xfeU)))) {
        Verilated::overWidthError("iBus_cmd_ready");}
    if (VL_UNLIKELY(((vlSelfRef.iBus_rsp_valid & 0xfeU)))) {
        Verilated::overWidthError("iBus_rsp_valid");}
    if (VL_UNLIKELY(((vlSelfRef.iBus_rsp_payload_error 
                      & 0xfeU)))) {
        Verilated::overWidthError("iBus_rsp_payload_error");}
    if (VL_UNLIKELY(((vlSelfRef.dBus_cmd_ready & 0xfeU)))) {
        Verilated::overWidthError("dBus_cmd_ready");}
    if (VL_UNLIKELY(((vlSelfRef.dBus_rsp_ready & 0xfeU)))) {
        Verilated::overWidthError("dBus_rsp_ready");}
    if (VL_UNLIKELY(((vlSelfRef.dBus_rsp_error & 0xfeU)))) {
        Verilated::overWidthError("dBus_rsp_error");}
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
