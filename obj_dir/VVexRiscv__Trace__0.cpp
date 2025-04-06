// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VVexRiscv__Syms.h"


void VVexRiscv___024root__trace_chg_0_sub_0(VVexRiscv___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VVexRiscv___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root__trace_chg_0\n"); );
    // Init
    VVexRiscv___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VVexRiscv___024root*>(voidSelf);
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VVexRiscv___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VVexRiscv___024root__trace_chg_0_sub_0(VVexRiscv___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root__trace_chg_0_sub_0\n"); );
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [3U])))) {
        bufp->chgBit(oldp+0,(((~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__memory_arbitration_flushNext)) 
                              & ((~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__memory_arbitration_haltItself)) 
                                 & (IData)(vlSymsp->TOP__VexRiscv.__VdfgRegularize_h16d7421c_0_14)))));
        bufp->chgBit(oldp+1,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_ready));
        bufp->chgBit(oldp+2,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_valid));
        bufp->chgBit(oldp+3,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_error));
        bufp->chgIData(oldp+4,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst),32);
        bufp->chgIData(oldp+5,(vlSymsp->TOP__VexRiscv.__PVT__decode_INSTRUCTION_ANTICIPATED),32);
        bufp->chgBit(oldp+6,(vlSymsp->TOP__VexRiscv.__PVT__decode_arbitration_isStuck));
        bufp->chgBit(oldp+7,((1U & ((~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_arbitration_isStuck)) 
                                    & (~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_arbitration_removeIt))))));
        bufp->chgBit(oldp+8,(((IData)(vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_injector_decodeInput_valid) 
                              & ((~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_arbitration_isStuck)) 
                                 & (~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_arbitration_removeIt))))));
        bufp->chgBit(oldp+9,(vlSymsp->TOP__VexRiscv.__PVT__execute_arbitration_haltItself));
        bufp->chgBit(oldp+10,(vlSymsp->TOP__VexRiscv.__PVT__execute_arbitration_isStuck));
        bufp->chgBit(oldp+11,(vlSymsp->TOP__VexRiscv.__PVT__memory_arbitration_haltItself));
        bufp->chgBit(oldp+12,((1U & ((~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__execute_arbitration_isStuck)) 
                                     & (~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__execute_arbitration_removeIt))))));
        bufp->chgBit(oldp+13,(((IData)(vlSymsp->TOP__VexRiscv.__PVT__execute_arbitration_isValid) 
                               & ((~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__execute_arbitration_isStuck)) 
                                  & (~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__execute_arbitration_removeIt))))));
        bufp->chgBit(oldp+14,((1U & (~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__memory_arbitration_haltItself)))));
        bufp->chgBit(oldp+15,(((IData)(vlSymsp->TOP__VexRiscv.__PVT__memory_arbitration_isValid) 
                               & (~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__memory_arbitration_haltItself)))));
        bufp->chgBit(oldp+16,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_iBusRsp_stages_0_input_ready));
        bufp->chgIData(oldp+17,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_fetchPc_pc),32);
        bufp->chgBit(oldp+18,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_fetchPc_output_fire));
        bufp->chgBit(oldp+19,(((~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_fetchPc_booted)) 
                               & (IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_iBusRsp_stages_0_input_ready))));
        bufp->chgBit(oldp+20,(((IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_fetchPc_booted) 
                               & ((IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_iBusRsp_stages_0_input_ready) 
                                  | (IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_fetchPc_correction)))));
        bufp->chgBit(oldp+21,(((~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_iBusRsp_stages_1_halt)) 
                               & (IData)(vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_iBusRsp_stages_0_output_m2sPipe_valid))));
        bufp->chgBit(oldp+22,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_iBusRsp_stages_1_output_ready));
        bufp->chgBit(oldp+23,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_iBusRsp_stages_1_halt));
        bufp->chgBit(oldp+24,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_iBusRsp_output_valid));
        bufp->chgBit(oldp+25,((1U & (~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_arbitration_isStuck)))));
        bufp->chgBit(oldp+26,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_fetchRsp_rsp_error));
        bufp->chgBit(oldp+27,((1U & (~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__execute_arbitration_isStuck)))));
        bufp->chgBit(oldp+28,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_predictor_historyWrite_valid));
        bufp->chgBit(oldp+29,(((IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_valid) 
                               & (IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_ready))));
        bufp->chgCData(oldp+30,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_pending_next),3);
        bufp->chgBit(oldp+31,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_output_valid));
        bufp->chgBit(oldp+32,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_output_ready));
        bufp->chgBit(oldp+33,((1U & (~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_output_valid)))));
        bufp->chgCData(oldp+34,((0x1fU & (vlSymsp->TOP__VexRiscv.__PVT__decode_INSTRUCTION_ANTICIPATED 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+35,((0x1fU & (vlSymsp->TOP__VexRiscv.__PVT__decode_INSTRUCTION_ANTICIPATED 
                                          >> 0x14U))),5);
        bufp->chgBit(oldp+36,((1U & ((~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__execute_arbitration_isStuck)) 
                                     | (IData)(vlSymsp->TOP__VexRiscv.__PVT__execute_arbitration_removeIt)))));
        bufp->chgBit(oldp+37,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ptr_doPush));
        bufp->chgBit(oldp+38,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ptr_doPop));
        bufp->chgBit(oldp+39,(((IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ptr_doPush) 
                               != (IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ptr_doPop))));
        bufp->chgBit(oldp+40,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__io_push_fire));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+41,((0xfffffffcU & vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_iBusRsp_stages_0_output_m2sPipe_payload)),32);
        bufp->chgBit(oldp+42,(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_MEMORY_STORE));
        bufp->chgCData(oldp+43,((0xfU & (((0U == (3U 
                                                  & (vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                     >> 0xcU)))
                                           ? 1U : (
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & (vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                        >> 0xcU)))
                                                    ? 3U
                                                    : 0xfU)) 
                                         << (3U & vlSymsp->TOP__VexRiscv.__PVT__execute_SrcPlugin_addSub)))),4);
        bufp->chgIData(oldp+44,(vlSymsp->TOP__VexRiscv.__PVT__execute_SrcPlugin_addSub),32);
        bufp->chgIData(oldp+45,(((0U == (3U & (vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                               >> 0xcU)))
                                  ? ((vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_RS2 
                                      << 0x18U) | (
                                                   (0xff0000U 
                                                    & (vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_RS2 
                                                       << 0x10U)) 
                                                   | ((0xff00U 
                                                       & (vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_RS2 
                                                          << 8U)) 
                                                      | (0xffU 
                                                         & vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_RS2))))
                                  : ((1U == (3U & (vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                   >> 0xcU)))
                                      ? ((vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_RS2 
                                          << 0x10U) 
                                         | (0xffffU 
                                            & vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_RS2))
                                      : vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_RS2))),32);
        bufp->chgCData(oldp+46,((3U & (vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                       >> 0xcU))),2);
        bufp->chgQData(oldp+47,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_predictor_history_spinal_port1),56);
        bufp->chgIData(oldp+49,(vlSymsp->TOP__VexRiscv.__PVT__RegFilePlugin_regFile_spinal_port0),32);
        bufp->chgIData(oldp+50,(vlSymsp->TOP__VexRiscv.__PVT__RegFilePlugin_regFile_spinal_port1),32);
        bufp->chgBit(oldp+51,((vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_pc 
                               != (0xfffffffeU & vlSymsp->TOP__VexRiscv.__PVT__execute_BranchPlugin_branchAdder))));
        bufp->chgIData(oldp+52,(((IData)(4U) + vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_PC)),32);
        bufp->chgBit(oldp+53,(((0U != (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL)) 
                               && ((2U == (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL)) 
                                   || ((3U == (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL)) 
                                       || (IData)(vlSymsp->TOP__VexRiscv.__PVT___zz_execute_BRANCH_DO))))));
        bufp->chgIData(oldp+54,((IData)((0x1ffffffffULL 
                                         & VL_SHIFTRS_QQI(33,33,5, 
                                                          (((QData)((IData)(
                                                                            ((3U 
                                                                              == (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL)) 
                                                                             & (vlSymsp->TOP__VexRiscv.__PVT__execute_FullBarrelShifterPlugin_reversed 
                                                                                >> 0x1fU)))) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(vlSymsp->TOP__VexRiscv.__PVT__execute_FullBarrelShifterPlugin_reversed))), 
                                                          (0x1fU 
                                                           & vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_SRC2))))),32);
        bufp->chgIData(oldp+55,(vlSymsp->TOP__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_DATA),32);
        bufp->chgIData(oldp+56,(vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA),32);
        bufp->chgIData(oldp+57,(((2U == (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                                  ? ((2U == (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                      ? (vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_SRC1 
                                         & vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_SRC2)
                                      : ((1U == (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                          ? (vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_SRC1 
                                             | vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_SRC2)
                                          : (vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_SRC1 
                                             ^ vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_SRC2)))
                                  : ((1U == (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                                      ? (IData)(vlSymsp->TOP__VexRiscv.__PVT__execute_SRC_LESS)
                                      : vlSymsp->TOP__VexRiscv.__PVT__execute_SrcPlugin_addSub))),32);
        bufp->chgCData(oldp+58,(vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_MEMORY_ADDRESS_LOW),2);
        bufp->chgCData(oldp+59,((3U & vlSymsp->TOP__VexRiscv.__PVT__execute_SrcPlugin_addSub)),2);
        bufp->chgIData(oldp+60,(((IData)(0x14U) + (vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_SRC1 
                                                   + (IData)(
                                                             (5ULL 
                                                              * (QData)((IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_SRC2))))))),32);
        bufp->chgBit(oldp+61,(((~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_SRC_USE_SUB_LESS)) 
                               & (0x24U == (0x64U & vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)))));
        bufp->chgCData(oldp+62,(vlSymsp->TOP__VexRiscv.__PVT__decode_BRANCH_CTRL),2);
        bufp->chgCData(oldp+63,(vlSymsp->TOP__VexRiscv.__PVT__decode_SHIFT_CTRL),2);
        bufp->chgCData(oldp+64,(vlSymsp->TOP__VexRiscv.__PVT__decode_ALU_BITWISE_CTRL),2);
        bufp->chgBit(oldp+65,(vlSymsp->TOP__VexRiscv.__PVT__decode_SRC_LESS_UNSIGNED));
        bufp->chgCData(oldp+66,(vlSymsp->TOP__VexRiscv.__PVT__decode_ALU_CTRL),2);
        bufp->chgBit(oldp+67,((0x20U == (0x20U & vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst))));
        bufp->chgBit(oldp+68,((0U == (0x58U & vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst))));
        bufp->chgBit(oldp+69,(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_IS_SPHERE_VOLUME));
        bufp->chgBit(oldp+70,(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_MEMORY_STAGE));
        bufp->chgBit(oldp+71,((0x10U == (0x10U & vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst))));
        bufp->chgBit(oldp+72,(vlSymsp->TOP__VexRiscv.__PVT__decode_BYPASSABLE_EXECUTE_STAGE));
        bufp->chgBit(oldp+73,((0x4000030U == (0x4000034U 
                                              & vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst))));
        bufp->chgBit(oldp+74,(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_PREDICTION_CONTEXT_hazard));
        bufp->chgBit(oldp+75,(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_PREDICTION_CONTEXT_hit));
        bufp->chgIData(oldp+76,(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_PREDICTION_CONTEXT_line_source),22);
        bufp->chgCData(oldp+77,(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_PREDICTION_CONTEXT_line_branchWish),2);
        bufp->chgIData(oldp+78,(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_PREDICTION_CONTEXT_line_target),32);
        bufp->chgBit(oldp+79,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_predictor_iBusRspContextOutput_delay_1_hazard));
        bufp->chgBit(oldp+80,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_predictor_iBusRspContextOutput_delay_1_hit));
        bufp->chgIData(oldp+81,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_predictor_iBusRspContextOutput_delay_1_line_source),22);
        bufp->chgCData(oldp+82,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_predictor_iBusRspContextOutput_delay_1_line_branchWish),2);
        bufp->chgIData(oldp+83,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_predictor_iBusRspContextOutput_delay_1_line_target),32);
        bufp->chgIData(oldp+84,(vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_FORMAL_PC_NEXT),32);
        bufp->chgIData(oldp+85,(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_FORMAL_PC_NEXT),32);
        bufp->chgIData(oldp+86,(((IData)(4U) + vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_pc)),32);
        bufp->chgIData(oldp+87,(vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_NEXT_PC1),32);
        bufp->chgIData(oldp+88,(vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_PC),32);
        bufp->chgIData(oldp+89,(vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_BRANCH_CALC),32);
        bufp->chgBit(oldp+90,(vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_TARGET_MISSMATCH1));
        bufp->chgBit(oldp+91,(vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_BRANCH_DO));
        bufp->chgIData(oldp+92,((0xfffffffeU & vlSymsp->TOP__VexRiscv.__PVT__execute_BranchPlugin_branchAdder)),32);
        bufp->chgIData(oldp+93,(((2U == (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                  ? ((((- (IData)((vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                   >> 0x1fU))) 
                                       << 0x15U) | 
                                      (0x100000U & 
                                       (vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                        >> 0xbU))) 
                                     | (((0xff000U 
                                          & vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_INSTRUCTION) 
                                         | (0x800U 
                                            & (vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                               >> 9U))) 
                                        | (0x7feU & 
                                           (vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                            >> 0x14U))))
                                  : ((3U == (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                      ? (((- (IData)(
                                                     (vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                      >> 0x1fU))) 
                                          << 0xcU) 
                                         | (vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                            >> 0x14U))
                                      : (((- (IData)(
                                                     (vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                      >> 0x1fU))) 
                                          << 0xdU) 
                                         | (((0x1000U 
                                              & (vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                 >> 0x13U)) 
                                             | (0x800U 
                                                & (vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                   << 4U))) 
                                            | ((0x7e0U 
                                                & (vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                     >> 7U)))))))),32);
        bufp->chgIData(oldp+94,(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_PC),32);
        bufp->chgCData(oldp+95,(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL),2);
        bufp->chgBit(oldp+96,(vlSymsp->TOP__VexRiscv.__PVT___zz___05Fzz_decode_SRC_LESS_UNSIGNED_51));
        bufp->chgBit(oldp+97,((0U != (IData)(vlSymsp->TOP__VexRiscv.__PVT___zz___05Fzz_decode_SRC_LESS_UNSIGNED_60))));
        bufp->chgBit(oldp+98,(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_REGFILE_WRITE_VALID));
        bufp->chgBit(oldp+99,(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE));
        bufp->chgBit(oldp+100,(vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_VALID));
        bufp->chgIData(oldp+101,(vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_INSTRUCTION),32);
        bufp->chgBit(oldp+102,(vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE));
        bufp->chgBit(oldp+103,(vlSymsp->TOP__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_VALID));
        bufp->chgIData(oldp+104,(vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT),32);
        bufp->chgCData(oldp+105,(vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_SHIFT_CTRL),2);
        bufp->chgCData(oldp+106,(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL),2);
        bufp->chgBit(oldp+107,(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_SRC_LESS_UNSIGNED));
        bufp->chgBit(oldp+108,(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_SRC2_FORCE_ZERO));
        bufp->chgBit(oldp+109,(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_SRC_USE_SUB_LESS));
        bufp->chgCData(oldp+110,(vlSymsp->TOP__VexRiscv.__PVT__decode_SRC2_CTRL),2);
        bufp->chgCData(oldp+111,(vlSymsp->TOP__VexRiscv.__PVT__decode_SRC1_CTRL),2);
        bufp->chgBit(oldp+112,(vlSymsp->TOP__VexRiscv.__PVT__decode_SRC_USE_SUB_LESS));
        bufp->chgBit(oldp+113,((0x24U == (0x64U & vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst))));
        bufp->chgBit(oldp+114,(vlSymsp->TOP__VexRiscv.__PVT__execute_SRC_LESS));
        bufp->chgCData(oldp+115,(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_ALU_CTRL),2);
        bufp->chgCData(oldp+116,(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL),2);
        bufp->chgBit(oldp+117,(vlSymsp->TOP__VexRiscv.__PVT__decode_REGFILE_WRITE_VALID));
        bufp->chgBit(oldp+118,(vlSymsp->TOP__VexRiscv.__PVT__memory_to_writeBack_MEMORY_ENABLE));
        bufp->chgCData(oldp+119,(vlSymsp->TOP__VexRiscv.__PVT__memory_to_writeBack_MEMORY_ADDRESS_LOW),2);
        bufp->chgIData(oldp+120,(vlSymsp->TOP__VexRiscv.__PVT__memory_to_writeBack_MEMORY_READ_DATA),32);
        bufp->chgBit(oldp+121,(vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_MEMORY_STORE));
        bufp->chgBit(oldp+122,(vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_MEMORY_ENABLE));
        bufp->chgIData(oldp+123,(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_INSTRUCTION),32);
        bufp->chgBit(oldp+124,(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_MEMORY_ENABLE));
        bufp->chgBit(oldp+125,(vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_PREDICTION_CONTEXT_hazard));
        bufp->chgBit(oldp+126,(vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_PREDICTION_CONTEXT_hit));
        bufp->chgIData(oldp+127,(vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_PREDICTION_CONTEXT_line_source),22);
        bufp->chgCData(oldp+128,(vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_PREDICTION_CONTEXT_line_branchWish),2);
        bufp->chgIData(oldp+129,(vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_PREDICTION_CONTEXT_line_target),32);
        bufp->chgIData(oldp+130,(vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_pc),32);
        bufp->chgIData(oldp+131,(vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst),32);
        bufp->chgIData(oldp+132,(vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_SPHERE_VOLUME),32);
        bufp->chgBit(oldp+133,(vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_IS_SPHERE_VOLUME));
        bufp->chgIData(oldp+134,(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_SRC2),32);
        bufp->chgIData(oldp+135,(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_SRC1),32);
        bufp->chgBit(oldp+136,(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_IS_SIMD_ADD));
        bufp->chgIData(oldp+137,(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_RS2),32);
        bufp->chgIData(oldp+138,(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_RS1),32);
        bufp->chgIData(oldp+139,(vlSymsp->TOP__VexRiscv.__PVT__memory_to_writeBack_PC),32);
        bufp->chgIData(oldp+140,(vlSymsp->TOP__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION),32);
        bufp->chgBit(oldp+141,(((IData)(vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_PREDICTION_CONTEXT_hit) 
                                & ((~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_PREDICTION_CONTEXT_hazard)) 
                                   & ((IData)(vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_PREDICTION_CONTEXT_line_branchWish) 
                                      >> 1U)))));
        bufp->chgBit(oldp+142,((1U & (~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__memory_BranchPlugin_predictionMissmatch)))));
        bufp->chgIData(oldp+143,(((IData)(vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_BRANCH_DO)
                                   ? vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_BRANCH_CALC
                                   : vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_NEXT_PC1)),32);
        bufp->chgIData(oldp+144,(vlSymsp->TOP__VexRiscv.__PVT__execute_SimdAddPlugin_rd),32);
        bufp->chgQData(oldp+145,((0x14ULL + ((QData)((IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_SRC1)) 
                                             + (5ULL 
                                                * (QData)((IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_SRC2)))))),64);
        bufp->chgIData(oldp+147,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_predictor_line_target),32);
        bufp->chgIData(oldp+148,(vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_iBusRsp_stages_1_output_m2sPipe_payload),32);
        bufp->chgIData(oldp+149,(vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_iBusRsp_stages_0_output_m2sPipe_payload),32);
        bufp->chgBit(oldp+150,(vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_error));
        bufp->chgBit(oldp+151,(vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_isRvc));
        bufp->chgIData(oldp+152,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_injector_formal_rawInDecode),32);
        bufp->chgCData(oldp+153,((0xffU & ((vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_PC 
                                            >> 2U) 
                                           - (IData)(1U)))),8);
        bufp->chgIData(oldp+154,((vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_PC 
                                  >> 0xaU)),22);
        bufp->chgCData(oldp+155,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_predictor_historyWrite_payload_data_branchWish),2);
        bufp->chgCData(oldp+156,((0xffU & (vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_PC 
                                           >> 2U))),8);
        bufp->chgBit(oldp+157,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_predictor_writeLast_valid));
        bufp->chgCData(oldp+158,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_predictor_writeLast_payload_address),8);
        bufp->chgIData(oldp+159,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_predictor_writeLast_payload_data_source),22);
        bufp->chgCData(oldp+160,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_predictor_writeLast_payload_data_branchWish),2);
        bufp->chgIData(oldp+161,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_predictor_writeLast_payload_data_target),32);
        bufp->chgIData(oldp+162,((0x3fffffU & (IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_predictor_history_spinal_port1))),22);
        bufp->chgCData(oldp+163,((3U & (IData)((vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_predictor_history_spinal_port1 
                                                >> 0x16U)))),2);
        bufp->chgIData(oldp+164,((IData)((vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_predictor_history_spinal_port1 
                                          >> 0x18U))),32);
        bufp->chgBit(oldp+165,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_predictor_buffer_pcCorrected));
        bufp->chgBit(oldp+166,(((IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_predictor_writeLast_valid) 
                                & ((IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_predictor_writeLast_payload_address) 
                                   == (0xffU & (vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_iBusRsp_stages_0_output_m2sPipe_payload 
                                                >> 2U))))));
        bufp->chgIData(oldp+167,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_predictor_line_source),22);
        bufp->chgCData(oldp+168,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_predictor_line_branchWish),2);
        bufp->chgBit(oldp+169,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_predictor_buffer_hazard_regNextWhen));
        bufp->chgBit(oldp+170,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_predictor_fetchContext_hazard));
        bufp->chgBit(oldp+171,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_predictor_fetchContext_hit));
        bufp->chgBit(oldp+172,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_predictor_iBusRspContext_hazard));
        bufp->chgBit(oldp+173,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_predictor_iBusRspContext_hit));
        bufp->chgIData(oldp+174,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_predictor_iBusRspContext_line_source),22);
        bufp->chgCData(oldp+175,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_predictor_iBusRspContext_line_branchWish),2);
        bufp->chgIData(oldp+176,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_predictor_iBusRspContext_line_target),32);
        bufp->chgIData(oldp+177,(vlSymsp->TOP__VexRiscv.__PVT__writeBack_DBusSimplePlugin_rspShifted),32);
        bufp->chgCData(oldp+178,((3U & (vlSymsp->TOP__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                        >> 0xcU))),2);
        bufp->chgIData(oldp+179,(((0U == (3U & (vlSymsp->TOP__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                                >> 0xcU)))
                                   ? (((- (IData)((1U 
                                                   & ((~ 
                                                       (vlSymsp->TOP__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                                        >> 0xeU)) 
                                                      & (vlSymsp->TOP__VexRiscv.__PVT__writeBack_DBusSimplePlugin_rspShifted 
                                                         >> 7U))))) 
                                       << 8U) | (0xffU 
                                                 & vlSymsp->TOP__VexRiscv.__PVT__writeBack_DBusSimplePlugin_rspShifted))
                                   : ((1U == (3U & 
                                              (vlSymsp->TOP__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                               >> 0xcU)))
                                       ? (((- (IData)(
                                                      (1U 
                                                       & ((~ 
                                                           (vlSymsp->TOP__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                                            >> 0xeU)) 
                                                          & (vlSymsp->TOP__VexRiscv.__PVT__writeBack_DBusSimplePlugin_rspShifted 
                                                             >> 0xfU))))) 
                                           << 0x10U) 
                                          | (0xffffU 
                                             & vlSymsp->TOP__VexRiscv.__PVT__writeBack_DBusSimplePlugin_rspShifted))
                                       : vlSymsp->TOP__VexRiscv.__PVT__writeBack_DBusSimplePlugin_rspShifted))),32);
        bufp->chgBit(oldp+180,((0U == (0x1fU & (vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst 
                                                >> 7U)))));
        bufp->chgIData(oldp+181,(((2U == (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                   ? (vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_SRC1 
                                      & vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_SRC2)
                                   : ((1U == (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                       ? (vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_SRC1 
                                          | vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_SRC2)
                                       : (vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_SRC1 
                                          ^ vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_SRC2)))),32);
        bufp->chgCData(oldp+182,((0x1fU & vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_SRC2)),5);
        bufp->chgIData(oldp+183,(vlSymsp->TOP__VexRiscv.__PVT__execute_FullBarrelShifterPlugin_reversed),32);
        bufp->chgCData(oldp+184,((0x1fU & (vlSymsp->TOP__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                           >> 7U))),5);
        bufp->chgCData(oldp+185,(vlSymsp->TOP__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_address),5);
        bufp->chgIData(oldp+186,(vlSymsp->TOP__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_data),32);
        bufp->chgBit(oldp+187,(((IData)(vlSymsp->TOP__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_address) 
                                == (0x1fU & (vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst 
                                             >> 0xfU)))));
        bufp->chgBit(oldp+188,(((IData)(vlSymsp->TOP__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_address) 
                                == (0x1fU & (vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst 
                                             >> 0x14U)))));
        bufp->chgBit(oldp+189,(((0x1fU & (vlSymsp->TOP__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                          >> 7U)) == 
                                (0x1fU & (vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst 
                                          >> 0xfU)))));
        bufp->chgBit(oldp+190,(((0x1fU & (vlSymsp->TOP__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                          >> 7U)) == 
                                (0x1fU & (vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst 
                                          >> 0x14U)))));
        bufp->chgBit(oldp+191,(vlSymsp->TOP__VexRiscv.__PVT__when_HazardSimplePlugin_l48_1));
        bufp->chgBit(oldp+192,(vlSymsp->TOP__VexRiscv.__PVT__when_HazardSimplePlugin_l51_1));
        bufp->chgBit(oldp+193,((1U & (~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE)))));
        bufp->chgBit(oldp+194,(vlSymsp->TOP__VexRiscv.__PVT__when_HazardSimplePlugin_l48_2));
        bufp->chgBit(oldp+195,(vlSymsp->TOP__VexRiscv.__PVT__when_HazardSimplePlugin_l51_2));
        bufp->chgBit(oldp+196,((1U & (~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE)))));
        bufp->chgBit(oldp+197,((1U & (~ (IData)((0U 
                                                 != (IData)(vlSymsp->TOP__VexRiscv.__PVT___zz___05Fzz_decode_SRC_LESS_UNSIGNED_60)))))));
        bufp->chgBit(oldp+198,((1U & (~ (IData)(vlSymsp->TOP__VexRiscv.__PVT___zz___05Fzz_decode_SRC_LESS_UNSIGNED_51)))));
        bufp->chgBit(oldp+199,(vlSymsp->TOP__VexRiscv.__PVT__execute_BranchPlugin_eq));
        bufp->chgCData(oldp+200,((7U & (vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                        >> 0xcU))),3);
        bufp->chgIData(oldp+201,(((3U == (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                   ? vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_RS1
                                   : vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_PC)),32);
        bufp->chgIData(oldp+202,(vlSymsp->TOP__VexRiscv.__PVT__execute_BranchPlugin_branchAdder),32);
        bufp->chgBit(oldp+203,(vlSymsp->TOP__VexRiscv.__PVT__memory_BranchPlugin_predictionMissmatch));
        bufp->chgIData(oldp+204,(vlSymsp->TOP__VexRiscv.__PVT__decode_BRANCH_CTRL_string),32);
        bufp->chgWData(oldp+205,(vlSymsp->TOP__VexRiscv.__PVT__decode_SHIFT_CTRL_string),72);
        bufp->chgQData(oldp+208,(((0U == (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_ALU_BITWISE_CTRL))
                                   ? 0x584f525f31ULL
                                   : ((1U == (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_ALU_BITWISE_CTRL))
                                       ? 0x4f525f3120ULL
                                       : ((2U == (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_ALU_BITWISE_CTRL))
                                           ? 0x414e445f31ULL
                                           : 0x3f3f3f3f3fULL)))),40);
        bufp->chgQData(oldp+210,(((0U == (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_ALU_CTRL))
                                   ? 0x4144445f53554220ULL
                                   : ((1U == (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_ALU_CTRL))
                                       ? 0x534c545f534c5455ULL
                                       : ((2U == (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_ALU_CTRL))
                                           ? 0x4249545749534520ULL
                                           : 0x3f3f3f3f3f3f3f3fULL)))),64);
        bufp->chgIData(oldp+212,(vlSymsp->TOP__VexRiscv.__PVT__execute_BRANCH_CTRL_string),32);
        bufp->chgWData(oldp+213,(vlSymsp->TOP__VexRiscv.__PVT__memory_SHIFT_CTRL_string),72);
        bufp->chgWData(oldp+216,(vlSymsp->TOP__VexRiscv.__PVT__execute_SHIFT_CTRL_string),72);
        bufp->chgIData(oldp+219,(vlSymsp->TOP__VexRiscv.__PVT__decode_SRC2_CTRL_string),24);
        bufp->chgWData(oldp+220,(vlSymsp->TOP__VexRiscv.__PVT__decode_SRC1_CTRL_string),96);
        bufp->chgQData(oldp+223,(((0U == (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                                   ? 0x4144445f53554220ULL
                                   : ((1U == (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                                       ? 0x534c545f534c5455ULL
                                       : ((2U == (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                                           ? 0x4249545749534520ULL
                                           : 0x3f3f3f3f3f3f3f3fULL)))),64);
        bufp->chgQData(oldp+225,(((0U == (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                   ? 0x584f525f31ULL
                                   : ((1U == (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                       ? 0x4f525f3120ULL
                                       : ((2U == (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                           ? 0x414e445f31ULL
                                           : 0x3f3f3f3f3fULL)))),40);
        bufp->chgWData(oldp+227,(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL_string),72);
        bufp->chgWData(oldp+230,(vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_SHIFT_CTRL_string),72);
        bufp->chgIData(oldp+233,(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL_string),32);
        bufp->chgQData(oldp+234,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ram[0]),33);
        bufp->chgQData(oldp+236,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ram[1]),33);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[2U] 
                      | vlSelfRef.__Vm_traceActivity
                      [3U])))) {
        bufp->chgIData(oldp+238,(((0U == (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_SRC2_CTRL))
                                   ? vlSymsp->TOP__VexRiscv.__PVT__decode_RS2
                                   : ((1U == (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_SRC2_CTRL))
                                       ? (((- (IData)(
                                                      (vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst 
                                                       >> 0x1fU))) 
                                           << 0xcU) 
                                          | (vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst 
                                             >> 0x14U))
                                       : ((2U == (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_SRC2_CTRL))
                                           ? (((- (IData)(
                                                          (vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst 
                                                           >> 0x1fU))) 
                                               << 0xcU) 
                                              | ((0xfe0U 
                                                  & (vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst 
                                                       >> 7U))))
                                           : vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_pc)))),32);
        bufp->chgIData(oldp+239,(((0U == (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_SRC1_CTRL))
                                   ? vlSymsp->TOP__VexRiscv.__PVT__decode_RS1
                                   : ((2U == (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_SRC1_CTRL))
                                       ? 4U : ((1U 
                                                == (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_SRC1_CTRL))
                                                ? (0xfffff000U 
                                                   & vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)
                                                : (0x1fU 
                                                   & (vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst 
                                                      >> 0xfU)))))),32);
        bufp->chgBit(oldp+240,(((IData)(vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_IS_SPHERE_VOLUME) 
                                & (IData)(vlSymsp->TOP__VexRiscv.__PVT__memory_arbitration_isValid))));
        bufp->chgBit(oldp+241,(((IData)(vlSymsp->TOP__VexRiscv.__PVT__memory_to_writeBack_MEMORY_ENABLE) 
                                & (IData)(vlSymsp->TOP__VexRiscv.__PVT__writeBack_arbitration_isValid))));
        bufp->chgQData(oldp+242,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ram
                                 [(1U & (IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ptr_pop))]),33);
        bufp->chgBit(oldp+244,((1U & (IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ram
                                             [(1U & (IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ptr_pop))]))));
        bufp->chgIData(oldp+245,((IData)((vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ram
                                          [(1U & (IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ptr_pop))] 
                                          >> 1U))),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+246,(vlSymsp->TOP__VexRiscv.iBus_cmd_valid));
        bufp->chgBit(oldp+247,((0U != (2U ^ ((IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ptr_pop) 
                                             ^ (IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ptr_push))))));
        bufp->chgCData(oldp+248,((3U & ((IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ptr_push) 
                                        - (IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ptr_pop)))),2);
        bufp->chgCData(oldp+249,((3U & ((IData)(2U) 
                                        - ((IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ptr_push) 
                                           - (IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ptr_pop))))),2);
        bufp->chgIData(oldp+250,(vlSymsp->TOP__VexRiscv.__PVT__decode_RS2),32);
        bufp->chgIData(oldp+251,(vlSymsp->TOP__VexRiscv.__PVT__decode_RS1),32);
        bufp->chgBit(oldp+252,(vlSymsp->TOP__VexRiscv.__PVT__decode_arbitration_haltByOther));
        bufp->chgBit(oldp+253,(vlSymsp->TOP__VexRiscv.__PVT__decode_arbitration_removeIt));
        bufp->chgBit(oldp+254,(vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_injector_decodeInput_valid));
        bufp->chgBit(oldp+255,(vlSymsp->TOP__VexRiscv.__PVT__memory_arbitration_flushNext));
        bufp->chgBit(oldp+256,(vlSymsp->TOP__VexRiscv.__PVT__execute_arbitration_removeIt));
        bufp->chgBit(oldp+257,(vlSymsp->TOP__VexRiscv.__PVT__execute_arbitration_isValid));
        bufp->chgBit(oldp+258,(vlSymsp->TOP__VexRiscv.__PVT__memory_arbitration_isValid));
        bufp->chgBit(oldp+259,(vlSymsp->TOP__VexRiscv.__PVT__writeBack_arbitration_isValid));
        bufp->chgBit(oldp+260,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_incomingInstruction));
        bufp->chgBit(oldp+261,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_injector_nextPcCalc_valids_2));
        bufp->chgBit(oldp+262,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_injector_nextPcCalc_valids_3));
        bufp->chgBit(oldp+263,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_injector_nextPcCalc_valids_4));
        bufp->chgBit(oldp+264,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_injector_nextPcCalc_valids_5));
        bufp->chgBit(oldp+265,(vlSymsp->TOP__VexRiscv.__PVT__BranchPlugin_jumpInterface_valid));
        bufp->chgBit(oldp+266,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_fetchPc_booted));
        bufp->chgBit(oldp+267,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_fetchPc_correction));
        bufp->chgBit(oldp+268,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_fetchPc_correctionReg));
        bufp->chgBit(oldp+269,(((IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_fetchPc_correction) 
                                | (IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_fetchPc_correctionReg))));
        bufp->chgBit(oldp+270,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_fetchPc_inc));
        bufp->chgBit(oldp+271,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_fetchPc_predictionPcLoad_valid));
        bufp->chgBit(oldp+272,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_fetchPc_flushed));
        bufp->chgBit(oldp+273,(vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_iBusRsp_stages_0_output_m2sPipe_valid));
        bufp->chgBit(oldp+274,(vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_iBusRsp_stages_1_output_m2sPipe_valid));
        bufp->chgBit(oldp+275,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_iBusRsp_readyForError));
        bufp->chgBit(oldp+276,(((IData)(vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_iBusRsp_stages_0_output_m2sPipe_valid) 
                                | (IData)(vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_iBusRsp_stages_1_output_m2sPipe_valid))));
        bufp->chgBit(oldp+277,((1U & (~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_injector_nextPcCalc_valids_2)))));
        bufp->chgBit(oldp+278,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_injector_nextPcCalc_valids_0));
        bufp->chgBit(oldp+279,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_injector_nextPcCalc_valids_1));
        bufp->chgBit(oldp+280,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_cmdFork_enterTheMarket));
        bufp->chgCData(oldp+281,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_pending_value),3);
        bufp->chgBit(oldp+282,((7U == (IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_pending_value))));
        bufp->chgBit(oldp+283,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_cmdFork_cmdKeep));
        bufp->chgBit(oldp+284,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_cmdFork_cmdFired));
        bufp->chgBit(oldp+285,(((7U == (IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_pending_value)) 
                                & (IData)(vlSymsp->TOP__VexRiscv.__VdfgRegularize_h16d7421c_0_15))));
        bufp->chgCData(oldp+286,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_discardCounter),3);
        bufp->chgBit(oldp+287,(((0U != (IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_discardCounter)) 
                                | (IData)(vlSymsp->TOP__VexRiscv.__PVT__memory_arbitration_flushNext))));
        bufp->chgBit(oldp+288,(vlSymsp->TOP__VexRiscv.__PVT__HazardSimplePlugin_src0Hazard));
        bufp->chgBit(oldp+289,(vlSymsp->TOP__VexRiscv.__PVT__HazardSimplePlugin_src1Hazard));
        bufp->chgBit(oldp+290,(vlSymsp->TOP__VexRiscv.__PVT__HazardSimplePlugin_writeBackWrites_valid));
        bufp->chgIData(oldp+291,(vlSymsp->TOP__VexRiscv.__PVT___zz_decode_RS2),32);
        bufp->chgBit(oldp+292,(vlSymsp->TOP__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_valid));
        bufp->chgBit(oldp+293,(vlSymsp->TOP__VexRiscv.__PVT__when_HazardSimplePlugin_l45_1));
        bufp->chgBit(oldp+294,(vlSymsp->TOP__VexRiscv.__PVT__when_HazardSimplePlugin_l45_2));
        bufp->chgBit(oldp+295,(((IData)(vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_injector_decodeInput_valid) 
                                & ((IData)(vlSymsp->TOP__VexRiscv.__PVT__HazardSimplePlugin_src0Hazard) 
                                   | (IData)(vlSymsp->TOP__VexRiscv.__PVT__HazardSimplePlugin_src1Hazard)))));
        bufp->chgBit(oldp+296,((0U == (2U ^ ((IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ptr_pop) 
                                             ^ (IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ptr_push))))));
        bufp->chgBit(oldp+297,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ptr_empty));
        bufp->chgCData(oldp+298,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ptr_push),2);
        bufp->chgCData(oldp+299,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ptr_pop),2);
        bufp->chgBit(oldp+300,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ptr_wentUp));
        bufp->chgBit(oldp+301,((1U & (IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ptr_push))));
        bufp->chgBit(oldp+302,((1U & (~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ptr_empty)))));
        bufp->chgBit(oldp+303,((1U & (IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ptr_pop))));
    }
    bufp->chgBit(oldp+304,(vlSelfRef.iBus_cmd_valid));
    bufp->chgBit(oldp+305,(vlSelfRef.iBus_cmd_ready));
    bufp->chgIData(oldp+306,(vlSelfRef.iBus_cmd_payload_pc),32);
    bufp->chgBit(oldp+307,(vlSelfRef.iBus_rsp_valid));
    bufp->chgBit(oldp+308,(vlSelfRef.iBus_rsp_payload_error));
    bufp->chgIData(oldp+309,(vlSelfRef.iBus_rsp_payload_inst),32);
    bufp->chgBit(oldp+310,(vlSelfRef.dBus_cmd_valid));
    bufp->chgBit(oldp+311,(vlSelfRef.dBus_cmd_ready));
    bufp->chgBit(oldp+312,(vlSelfRef.dBus_cmd_payload_wr));
    bufp->chgCData(oldp+313,(vlSelfRef.dBus_cmd_payload_mask),4);
    bufp->chgIData(oldp+314,(vlSelfRef.dBus_cmd_payload_address),32);
    bufp->chgIData(oldp+315,(vlSelfRef.dBus_cmd_payload_data),32);
    bufp->chgCData(oldp+316,(vlSelfRef.dBus_cmd_payload_size),2);
    bufp->chgBit(oldp+317,(vlSelfRef.dBus_rsp_ready));
    bufp->chgBit(oldp+318,(vlSelfRef.dBus_rsp_error));
    bufp->chgIData(oldp+319,(vlSelfRef.dBus_rsp_data),32);
    bufp->chgBit(oldp+320,(vlSelfRef.clk));
    bufp->chgBit(oldp+321,(vlSelfRef.reset));
    bufp->chgIData(oldp+322,(vlSymsp->TOP__VexRiscv.lastStageInstruction),32);
    bufp->chgIData(oldp+323,(vlSymsp->TOP__VexRiscv.lastStagePc),32);
    bufp->chgBit(oldp+324,(vlSymsp->TOP__VexRiscv.lastStageIsValid));
    bufp->chgBit(oldp+325,(vlSymsp->TOP__VexRiscv.lastStageIsFiring));
    bufp->chgIData(oldp+326,(vlSymsp->TOP__VexRiscv.IBusSimplePlugin_fetchPc_pcReg),32);
    bufp->chgBit(oldp+327,((1U & ((~ ((IData)(vlSymsp->TOP__VexRiscv.__PVT__memory_arbitration_isValid) 
                                      & (~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__memory_arbitration_haltItself)))) 
                                  | (IData)(vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_PREDICTION_CONTEXT_hazard)))));
    bufp->chgBit(oldp+328,(((IData)(vlSymsp->TOP__VexRiscv.iBus_cmd_valid) 
                            & (IData)(vlSelfRef.iBus_cmd_ready))));
    bufp->chgBit(oldp+329,((1U & ((~ (IData)(vlSelfRef.iBus_cmd_ready)) 
                                  & (~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_cmdFork_cmdFired))))));
    bufp->chgBit(oldp+330,(((~ (IData)(vlSelfRef.dBus_cmd_ready)) 
                            & (IData)(vlSymsp->TOP__VexRiscv.__VdfgRegularize_h16d7421c_0_14))));
    bufp->chgBit(oldp+331,(((IData)(vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_MEMORY_ENABLE) 
                            & ((~ ((IData)(vlSelfRef.dBus_rsp_ready) 
                                   | (IData)(vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_MEMORY_STORE))) 
                               & (IData)(vlSymsp->TOP__VexRiscv.__PVT__memory_arbitration_isValid)))));
    bufp->chgBit(oldp+332,(vlSymsp->TOP__VexRiscv.lastStageRegFileWrite_valid));
    bufp->chgCData(oldp+333,(vlSymsp->TOP__VexRiscv.lastStageRegFileWrite_payload_address),5);
    bufp->chgIData(oldp+334,(vlSymsp->TOP__VexRiscv.lastStageRegFileWrite_payload_data),32);
    bufp->chgIData(oldp+335,(vlSymsp->TOP__VexRiscv.RegFilePlugin_regFile[0]),32);
    bufp->chgIData(oldp+336,(vlSymsp->TOP__VexRiscv.RegFilePlugin_regFile[1]),32);
    bufp->chgIData(oldp+337,(vlSymsp->TOP__VexRiscv.RegFilePlugin_regFile[2]),32);
    bufp->chgIData(oldp+338,(vlSymsp->TOP__VexRiscv.RegFilePlugin_regFile[3]),32);
    bufp->chgIData(oldp+339,(vlSymsp->TOP__VexRiscv.RegFilePlugin_regFile[4]),32);
    bufp->chgIData(oldp+340,(vlSymsp->TOP__VexRiscv.RegFilePlugin_regFile[5]),32);
    bufp->chgIData(oldp+341,(vlSymsp->TOP__VexRiscv.RegFilePlugin_regFile[6]),32);
    bufp->chgIData(oldp+342,(vlSymsp->TOP__VexRiscv.RegFilePlugin_regFile[7]),32);
    bufp->chgIData(oldp+343,(vlSymsp->TOP__VexRiscv.RegFilePlugin_regFile[8]),32);
    bufp->chgIData(oldp+344,(vlSymsp->TOP__VexRiscv.RegFilePlugin_regFile[9]),32);
    bufp->chgIData(oldp+345,(vlSymsp->TOP__VexRiscv.RegFilePlugin_regFile[10]),32);
    bufp->chgIData(oldp+346,(vlSymsp->TOP__VexRiscv.RegFilePlugin_regFile[11]),32);
    bufp->chgIData(oldp+347,(vlSymsp->TOP__VexRiscv.RegFilePlugin_regFile[12]),32);
    bufp->chgIData(oldp+348,(vlSymsp->TOP__VexRiscv.RegFilePlugin_regFile[13]),32);
    bufp->chgIData(oldp+349,(vlSymsp->TOP__VexRiscv.RegFilePlugin_regFile[14]),32);
    bufp->chgIData(oldp+350,(vlSymsp->TOP__VexRiscv.RegFilePlugin_regFile[15]),32);
    bufp->chgIData(oldp+351,(vlSymsp->TOP__VexRiscv.RegFilePlugin_regFile[16]),32);
    bufp->chgIData(oldp+352,(vlSymsp->TOP__VexRiscv.RegFilePlugin_regFile[17]),32);
    bufp->chgIData(oldp+353,(vlSymsp->TOP__VexRiscv.RegFilePlugin_regFile[18]),32);
    bufp->chgIData(oldp+354,(vlSymsp->TOP__VexRiscv.RegFilePlugin_regFile[19]),32);
    bufp->chgIData(oldp+355,(vlSymsp->TOP__VexRiscv.RegFilePlugin_regFile[20]),32);
    bufp->chgIData(oldp+356,(vlSymsp->TOP__VexRiscv.RegFilePlugin_regFile[21]),32);
    bufp->chgIData(oldp+357,(vlSymsp->TOP__VexRiscv.RegFilePlugin_regFile[22]),32);
    bufp->chgIData(oldp+358,(vlSymsp->TOP__VexRiscv.RegFilePlugin_regFile[23]),32);
    bufp->chgIData(oldp+359,(vlSymsp->TOP__VexRiscv.RegFilePlugin_regFile[24]),32);
    bufp->chgIData(oldp+360,(vlSymsp->TOP__VexRiscv.RegFilePlugin_regFile[25]),32);
    bufp->chgIData(oldp+361,(vlSymsp->TOP__VexRiscv.RegFilePlugin_regFile[26]),32);
    bufp->chgIData(oldp+362,(vlSymsp->TOP__VexRiscv.RegFilePlugin_regFile[27]),32);
    bufp->chgIData(oldp+363,(vlSymsp->TOP__VexRiscv.RegFilePlugin_regFile[28]),32);
    bufp->chgIData(oldp+364,(vlSymsp->TOP__VexRiscv.RegFilePlugin_regFile[29]),32);
    bufp->chgIData(oldp+365,(vlSymsp->TOP__VexRiscv.RegFilePlugin_regFile[30]),32);
    bufp->chgIData(oldp+366,(vlSymsp->TOP__VexRiscv.RegFilePlugin_regFile[31]),32);
}

void VVexRiscv___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root__trace_cleanup\n"); );
    // Init
    VVexRiscv___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VVexRiscv___024root*>(voidSelf);
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
