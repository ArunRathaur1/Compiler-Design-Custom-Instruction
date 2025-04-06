// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVexRiscv.h for the primary calling header

#include "VVexRiscv__pch.h"
#include "VVexRiscv__Syms.h"
#include "VVexRiscv___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VVexRiscv___024root___dump_triggers__stl(VVexRiscv___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VVexRiscv___024root___eval_triggers__stl(VVexRiscv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root___eval_triggers__stl\n"); );
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VVexRiscv___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void VVexRiscv___024root___stl_sequent__TOP__0(VVexRiscv___024root* vlSelf);
VL_ATTR_COLD void VVexRiscv___024root____Vm_traceActivitySetAll(VVexRiscv___024root* vlSelf);
VL_ATTR_COLD void VVexRiscv_VexRiscv___stl_sequent__TOP__VexRiscv__0(VVexRiscv_VexRiscv* vlSelf);
VL_ATTR_COLD void VVexRiscv___024root___stl_sequent__TOP__1(VVexRiscv___024root* vlSelf);

VL_ATTR_COLD void VVexRiscv___024root___eval_stl(VVexRiscv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root___eval_stl\n"); );
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VVexRiscv___024root___stl_sequent__TOP__0(vlSelf);
        VVexRiscv___024root____Vm_traceActivitySetAll(vlSelf);
        VVexRiscv_VexRiscv___stl_sequent__TOP__VexRiscv__0((&vlSymsp->TOP__VexRiscv));
        VVexRiscv___024root___stl_sequent__TOP__1(vlSelf);
    }
}

VL_ATTR_COLD void VVexRiscv___024root___stl_sequent__TOP__0(VVexRiscv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root___stl_sequent__TOP__0\n"); );
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dBus_cmd_payload_size = (3U & (vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                             >> 0xcU));
    vlSelfRef.dBus_cmd_payload_wr = vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_MEMORY_STORE;
    vlSelfRef.iBus_cmd_payload_pc = (0xfffffffcU & vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_iBusRsp_stages_0_output_m2sPipe_payload);
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
}

VL_ATTR_COLD void VVexRiscv___024root___stl_sequent__TOP__1(VVexRiscv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root___stl_sequent__TOP__1\n"); );
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dBus_cmd_payload_address = vlSymsp->TOP__VexRiscv.__PVT__execute_SrcPlugin_addSub;
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
    vlSelfRef.iBus_cmd_valid = vlSymsp->TOP__VexRiscv.iBus_cmd_valid;
    vlSelfRef.dBus_cmd_valid = ((~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__memory_arbitration_flushNext)) 
                                & ((~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__memory_arbitration_haltItself)) 
                                   & (IData)(vlSymsp->TOP__VexRiscv.__VdfgRegularize_h16d7421c_0_14)));
}
