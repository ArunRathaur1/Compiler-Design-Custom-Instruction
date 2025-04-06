// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVexRiscv.h for the primary calling header

#include "VVexRiscv__pch.h"
#include "VVexRiscv__Syms.h"
#include "VVexRiscv___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VVexRiscv___024root___dump_triggers__ico(VVexRiscv___024root* vlSelf);
#endif  // VL_DEBUG

void VVexRiscv___024root___eval_triggers__ico(VVexRiscv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root___eval_triggers__ico\n"); );
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.set(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VVexRiscv___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

void VVexRiscv_VexRiscv___ico_sequent__TOP__VexRiscv__0(VVexRiscv_VexRiscv* vlSelf);
void VVexRiscv___024root___ico_sequent__TOP__0(VVexRiscv___024root* vlSelf);

void VVexRiscv___024root___eval_ico(VVexRiscv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root___eval_ico\n"); );
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VVexRiscv_VexRiscv___ico_sequent__TOP__VexRiscv__0((&vlSymsp->TOP__VexRiscv));
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        VVexRiscv___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VVexRiscv___024root___ico_sequent__TOP__0(VVexRiscv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root___ico_sequent__TOP__0\n"); );
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dBus_cmd_valid = ((~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__memory_arbitration_flushNext)) 
                                & ((~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__memory_arbitration_haltItself)) 
                                   & (IData)(vlSymsp->TOP__VexRiscv.__VdfgRegularize_h16d7421c_0_14)));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VVexRiscv___024root___dump_triggers__act(VVexRiscv___024root* vlSelf);
#endif  // VL_DEBUG

void VVexRiscv___024root___eval_triggers__act(VVexRiscv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root___eval_triggers__act\n"); );
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.reset) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__reset__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__reset__0 = vlSelfRef.reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VVexRiscv___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void VVexRiscv_VexRiscv___nba_sequent__TOP__VexRiscv__0(VVexRiscv_VexRiscv* vlSelf);
void VVexRiscv___024root___nba_sequent__TOP__0(VVexRiscv___024root* vlSelf);
void VVexRiscv_VexRiscv___nba_sequent__TOP__VexRiscv__1(VVexRiscv_VexRiscv* vlSelf);
void VVexRiscv___024root___nba_sequent__TOP__1(VVexRiscv___024root* vlSelf);
void VVexRiscv_VexRiscv___nba_comb__TOP__VexRiscv__0(VVexRiscv_VexRiscv* vlSelf);

void VVexRiscv___024root___eval_nba(VVexRiscv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root___eval_nba\n"); );
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VVexRiscv_VexRiscv___nba_sequent__TOP__VexRiscv__0((&vlSymsp->TOP__VexRiscv));
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        VVexRiscv___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VVexRiscv_VexRiscv___nba_sequent__TOP__VexRiscv__1((&vlSymsp->TOP__VexRiscv));
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        VVexRiscv___024root___nba_sequent__TOP__1(vlSelf);
        VVexRiscv_VexRiscv___nba_comb__TOP__VexRiscv__0((&vlSymsp->TOP__VexRiscv));
        VVexRiscv___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VVexRiscv___024root___nba_sequent__TOP__0(VVexRiscv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root___nba_sequent__TOP__0\n"); );
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dBus_cmd_payload_wr = vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_MEMORY_STORE;
    vlSelfRef.dBus_cmd_payload_address = vlSymsp->TOP__VexRiscv.__PVT__execute_SrcPlugin_addSub;
    vlSelfRef.dBus_cmd_payload_size = (3U & (vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                             >> 0xcU));
    vlSelfRef.dBus_cmd_payload_data = ((0U == (3U & 
                                               (vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                >> 0xcU)))
                                        ? ((vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_RS2 
                                            << 0x18U) 
                                           | ((0xff0000U 
                                               & (vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_RS2 
                                                  << 0x10U)) 
                                              | ((0xff00U 
                                                  & (vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_RS2 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_RS2))))
                                        : ((1U == (3U 
                                                   & (vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                      >> 0xcU)))
                                            ? ((vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_RS2 
                                                << 0x10U) 
                                               | (0xffffU 
                                                  & vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_RS2))
                                            : vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_RS2));
    vlSelfRef.dBus_cmd_payload_mask = (0xfU & (((0U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                     >> 0xcU)))
                                                 ? 1U
                                                 : 
                                                ((1U 
                                                  == 
                                                  (3U 
                                                   & (vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                      >> 0xcU)))
                                                  ? 3U
                                                  : 0xfU)) 
                                               << (3U 
                                                   & vlSymsp->TOP__VexRiscv.__PVT__execute_SrcPlugin_addSub)));
    vlSelfRef.iBus_cmd_payload_pc = (0xfffffffcU & vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_iBusRsp_stages_0_output_m2sPipe_payload);
}

VL_INLINE_OPT void VVexRiscv___024root___nba_sequent__TOP__1(VVexRiscv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root___nba_sequent__TOP__1\n"); );
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.iBus_cmd_valid = vlSymsp->TOP__VexRiscv.iBus_cmd_valid;
}
