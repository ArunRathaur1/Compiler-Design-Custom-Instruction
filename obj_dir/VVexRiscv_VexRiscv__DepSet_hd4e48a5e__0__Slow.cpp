// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVexRiscv.h for the primary calling header

#include "VVexRiscv__pch.h"
#include "VVexRiscv_VexRiscv.h"
#include "VVexRiscv__Syms.h"

extern const VlUnpacked<IData/*31:0*/, 4> VVexRiscv__ConstPool__TABLE_h22e9b8d7_0;
extern const VlUnpacked<VlWide<3>/*71:0*/, 4> VVexRiscv__ConstPool__TABLE_h667a2ed9_0;
extern const VlUnpacked<VlWide<3>/*95:0*/, 4> VVexRiscv__ConstPool__TABLE_haaa23a29_0;
extern const VlUnpacked<CData/*0:0*/, 128> VVexRiscv__ConstPool__TABLE_h10b59b12_0;
extern const VlUnpacked<IData/*23:0*/, 4> VVexRiscv__ConstPool__TABLE_h2c4dac23_0;
extern const VlUnpacked<CData/*0:0*/, 128> VVexRiscv__ConstPool__TABLE_h959b1508_0;

VL_ATTR_COLD void VVexRiscv_VexRiscv___stl_sequent__TOP__VexRiscv__0(VVexRiscv_VexRiscv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VVexRiscv_VexRiscv___stl_sequent__TOP__VexRiscv__0\n"); );
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __PVT___zz___05Fzz_decode_SRC_LESS_UNSIGNED_5;
    __PVT___zz___05Fzz_decode_SRC_LESS_UNSIGNED_5 = 0;
    CData/*1:0*/ __PVT___zz___05Fzz_decode_SRC_LESS_UNSIGNED_34;
    __PVT___zz___05Fzz_decode_SRC_LESS_UNSIGNED_34 = 0;
    CData/*3:0*/ __PVT___zz___05Fzz_decode_SRC_LESS_UNSIGNED_77;
    __PVT___zz___05Fzz_decode_SRC_LESS_UNSIGNED_77 = 0;
    CData/*0:0*/ __VdfgRegularize_h16d7421c_0_4;
    __VdfgRegularize_h16d7421c_0_4 = 0;
    CData/*0:0*/ __VdfgRegularize_h16d7421c_0_8;
    __VdfgRegularize_h16d7421c_0_8 = 0;
    CData/*1:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*1:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*1:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
    CData/*1:0*/ __Vtableidx13;
    __Vtableidx13 = 0;
    CData/*1:0*/ __Vtableidx15;
    __Vtableidx15 = 0;
    CData/*1:0*/ __Vtableidx17;
    __Vtableidx17 = 0;
    CData/*1:0*/ __Vtableidx19;
    __Vtableidx19 = 0;
    CData/*1:0*/ __Vtableidx29;
    __Vtableidx29 = 0;
    CData/*1:0*/ __Vtableidx30;
    __Vtableidx30 = 0;
    CData/*1:0*/ __Vtableidx31;
    __Vtableidx31 = 0;
    CData/*6:0*/ __Vtableidx32;
    __Vtableidx32 = 0;
    CData/*6:0*/ __Vtableidx33;
    __Vtableidx33 = 0;
    CData/*6:0*/ __Vtableidx34;
    __Vtableidx34 = 0;
    // Body
    vlSelfRef.__PVT__decode_ALU_BITWISE_CTRL = (((0x1000U 
                                                  == 
                                                  (0x1000U 
                                                   & vlSelfRef.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)) 
                                                 << 1U) 
                                                | (0x2000U 
                                                   == 
                                                   (0x3000U 
                                                    & vlSelfRef.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)));
    vlSelfRef.__PVT__decode_ALU_CTRL = (((0x4000U == 
                                          (0x4004U 
                                           & vlSelfRef.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)) 
                                         << 1U) | (0x2000U 
                                                   == 
                                                   (0x6004U 
                                                    & vlSelfRef.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)));
    vlSelfRef.__PVT__decode_BYPASSABLE_EXECUTE_STAGE 
        = ((4U == (4U & vlSelfRef.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)) 
           | ((0x4000020U == (0x4000020U & vlSelfRef.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)) 
              | ((0x2010U == (0x2010U & vlSelfRef.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)) 
                 | ((0x20U == (0x2001020U & vlSelfRef.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)) 
                    | (0x10U == (0x1030U & vlSelfRef.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst))))));
    vlSelfRef.__PVT__decode_SRC_USE_SUB_LESS = ((0x40U 
                                                 == 
                                                 (0x44U 
                                                  & vlSelfRef.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)) 
                                                | ((0x2010U 
                                                    == 
                                                    (0x2014U 
                                                     & vlSelfRef.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)) 
                                                   | (0x40000030U 
                                                      == 
                                                      (0x40000034U 
                                                       & vlSelfRef.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst))));
    vlSelfRef.__PVT__decode_SRC_LESS_UNSIGNED = ((0x2000U 
                                                  == 
                                                  (0x2010U 
                                                   & vlSelfRef.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)) 
                                                 | (0x1000U 
                                                    == 
                                                    (0x5000U 
                                                     & vlSelfRef.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)));
    vlSelfRef.lastStageInstruction = vlSelfRef.__PVT__memory_to_writeBack_INSTRUCTION;
    vlSelfRef.lastStageIsValid = vlSelfRef.__PVT__writeBack_arbitration_isValid;
    vlSelfRef.lastStageIsFiring = vlSelfRef.__PVT__writeBack_arbitration_isValid;
    vlSelfRef.lastStagePc = vlSelfRef.__PVT__memory_to_writeBack_PC;
    vlSelfRef.__PVT__IBusSimplePlugin_iBusRsp_readyForError = 1U;
    if (vlSelfRef.__PVT___zz_IBusSimplePlugin_injector_decodeInput_valid) {
        vlSelfRef.__PVT__IBusSimplePlugin_iBusRsp_readyForError = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.__PVT__IBusSimplePlugin_injector_nextPcCalc_valids_2)))) {
        vlSelfRef.__PVT__IBusSimplePlugin_iBusRsp_readyForError = 0U;
    }
    vlSelfRef.lastStageRegFileWrite_payload_address 
        = (0x1fU & (vlSelfRef.__PVT__memory_to_writeBack_INSTRUCTION 
                    >> 7U));
    vlSelfRef.__PVT__IBusSimplePlugin_incomingInstruction = 0U;
    if (((IData)(vlSelfRef.__PVT___zz_IBusSimplePlugin_iBusRsp_stages_0_output_m2sPipe_valid) 
         | (IData)(vlSelfRef.__PVT___zz_IBusSimplePlugin_iBusRsp_stages_1_output_m2sPipe_valid))) {
        vlSelfRef.__PVT__IBusSimplePlugin_incomingInstruction = 1U;
    }
    if (vlSelfRef.__PVT___zz_IBusSimplePlugin_injector_decodeInput_valid) {
        vlSelfRef.__PVT__IBusSimplePlugin_incomingInstruction = 1U;
    }
    __Vtableidx11 = vlSelfRef.__PVT__decode_to_execute_BRANCH_CTRL;
    vlSelfRef.__PVT__execute_BRANCH_CTRL_string = VVexRiscv__ConstPool__TABLE_h22e9b8d7_0
        [__Vtableidx11];
    __Vtableidx13 = vlSelfRef.__PVT__execute_to_memory_SHIFT_CTRL;
    vlSelfRef.__PVT__memory_SHIFT_CTRL_string[0U] = 
        VVexRiscv__ConstPool__TABLE_h667a2ed9_0[__Vtableidx13][0U];
    vlSelfRef.__PVT__memory_SHIFT_CTRL_string[1U] = 
        VVexRiscv__ConstPool__TABLE_h667a2ed9_0[__Vtableidx13][1U];
    vlSelfRef.__PVT__memory_SHIFT_CTRL_string[2U] = 
        VVexRiscv__ConstPool__TABLE_h667a2ed9_0[__Vtableidx13][2U];
    __Vtableidx15 = vlSelfRef.__PVT__decode_to_execute_SHIFT_CTRL;
    vlSelfRef.__PVT__execute_SHIFT_CTRL_string[0U] 
        = VVexRiscv__ConstPool__TABLE_h667a2ed9_0[__Vtableidx15][0U];
    vlSelfRef.__PVT__execute_SHIFT_CTRL_string[1U] 
        = VVexRiscv__ConstPool__TABLE_h667a2ed9_0[__Vtableidx15][1U];
    vlSelfRef.__PVT__execute_SHIFT_CTRL_string[2U] 
        = VVexRiscv__ConstPool__TABLE_h667a2ed9_0[__Vtableidx15][2U];
    __Vtableidx29 = vlSelfRef.__PVT__decode_to_execute_SHIFT_CTRL;
    vlSelfRef.__PVT__decode_to_execute_SHIFT_CTRL_string[0U] 
        = VVexRiscv__ConstPool__TABLE_h667a2ed9_0[__Vtableidx29][0U];
    vlSelfRef.__PVT__decode_to_execute_SHIFT_CTRL_string[1U] 
        = VVexRiscv__ConstPool__TABLE_h667a2ed9_0[__Vtableidx29][1U];
    vlSelfRef.__PVT__decode_to_execute_SHIFT_CTRL_string[2U] 
        = VVexRiscv__ConstPool__TABLE_h667a2ed9_0[__Vtableidx29][2U];
    __Vtableidx30 = vlSelfRef.__PVT__execute_to_memory_SHIFT_CTRL;
    vlSelfRef.__PVT__execute_to_memory_SHIFT_CTRL_string[0U] 
        = VVexRiscv__ConstPool__TABLE_h667a2ed9_0[__Vtableidx30][0U];
    vlSelfRef.__PVT__execute_to_memory_SHIFT_CTRL_string[1U] 
        = VVexRiscv__ConstPool__TABLE_h667a2ed9_0[__Vtableidx30][1U];
    vlSelfRef.__PVT__execute_to_memory_SHIFT_CTRL_string[2U] 
        = VVexRiscv__ConstPool__TABLE_h667a2ed9_0[__Vtableidx30][2U];
    __Vtableidx31 = vlSelfRef.__PVT__decode_to_execute_BRANCH_CTRL;
    vlSelfRef.__PVT__decode_to_execute_BRANCH_CTRL_string 
        = VVexRiscv__ConstPool__TABLE_h22e9b8d7_0[__Vtableidx31];
    vlSelfRef.__PVT__execute_BranchPlugin_branchAdder 
        = (((3U == (IData)(vlSelfRef.__PVT__decode_to_execute_BRANCH_CTRL))
             ? vlSelfRef.__PVT__decode_to_execute_RS1
             : vlSelfRef.__PVT__decode_to_execute_PC) 
           + ((2U == (IData)(vlSelfRef.__PVT__decode_to_execute_BRANCH_CTRL))
               ? ((((- (IData)((vlSelfRef.__PVT__decode_to_execute_INSTRUCTION 
                                >> 0x1fU))) << 0x15U) 
                   | (0x100000U & (vlSelfRef.__PVT__decode_to_execute_INSTRUCTION 
                                   >> 0xbU))) | (((0xff000U 
                                                   & vlSelfRef.__PVT__decode_to_execute_INSTRUCTION) 
                                                  | (0x800U 
                                                     & (vlSelfRef.__PVT__decode_to_execute_INSTRUCTION 
                                                        >> 9U))) 
                                                 | (0x7feU 
                                                    & (vlSelfRef.__PVT__decode_to_execute_INSTRUCTION 
                                                       >> 0x14U))))
               : ((3U == (IData)(vlSelfRef.__PVT__decode_to_execute_BRANCH_CTRL))
                   ? (((- (IData)((vlSelfRef.__PVT__decode_to_execute_INSTRUCTION 
                                   >> 0x1fU))) << 0xcU) 
                      | (vlSelfRef.__PVT__decode_to_execute_INSTRUCTION 
                         >> 0x14U)) : (((- (IData)(
                                                   (vlSelfRef.__PVT__decode_to_execute_INSTRUCTION 
                                                    >> 0x1fU))) 
                                        << 0xdU) | 
                                       (((0x1000U & 
                                          (vlSelfRef.__PVT__decode_to_execute_INSTRUCTION 
                                           >> 0x13U)) 
                                         | (0x800U 
                                            & (vlSelfRef.__PVT__decode_to_execute_INSTRUCTION 
                                               << 4U))) 
                                        | ((0x7e0U 
                                            & (vlSelfRef.__PVT__decode_to_execute_INSTRUCTION 
                                               >> 0x14U)) 
                                           | (0x1eU 
                                              & (vlSelfRef.__PVT__decode_to_execute_INSTRUCTION 
                                                 >> 7U))))))));
    __PVT___zz___05Fzz_decode_SRC_LESS_UNSIGNED_77 
        = ((((0x10U == (0x10U & vlSelfRef.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)) 
             << 3U) | ((0x48U == (0x48U & vlSelfRef.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)) 
                       << 2U)) | (((4U == (0xcU & vlSelfRef.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)) 
                                   << 1U) | (0U == 
                                             (0x28U 
                                              & vlSelfRef.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst))));
    vlSelfRef.__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xfffff000U & vlSelfRef.__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | ((((0x800U & (vlSelfRef.__PVT__decode_to_execute_SRC1 
                           >> 9U)) | ((0x400U & (vlSelfRef.__PVT__decode_to_execute_SRC1 
                                                 >> 0xbU)) 
                                      | (0x200U & (vlSelfRef.__PVT__decode_to_execute_SRC1 
                                                   >> 0xdU)))) 
               | ((0x100U & (vlSelfRef.__PVT__decode_to_execute_SRC1 
                             >> 0xfU)) | ((0x80U & 
                                           (vlSelfRef.__PVT__decode_to_execute_SRC1 
                                            >> 0x11U)) 
                                          | (0x40U 
                                             & (vlSelfRef.__PVT__decode_to_execute_SRC1 
                                                >> 0x13U))))) 
              | (((0x20U & (vlSelfRef.__PVT__decode_to_execute_SRC1 
                            >> 0x15U)) | ((0x10U & 
                                           (vlSelfRef.__PVT__decode_to_execute_SRC1 
                                            >> 0x17U)) 
                                          | (8U & (vlSelfRef.__PVT__decode_to_execute_SRC1 
                                                   >> 0x19U)))) 
                 | ((4U & (vlSelfRef.__PVT__decode_to_execute_SRC1 
                           >> 0x1bU)) | ((2U & (vlSelfRef.__PVT__decode_to_execute_SRC1 
                                                >> 0x1dU)) 
                                         | (vlSelfRef.__PVT__decode_to_execute_SRC1 
                                            >> 0x1fU))))));
    vlSelfRef.__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xff000fffU & vlSelfRef.__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | ((((0x800000U & (vlSelfRef.__PVT__decode_to_execute_SRC1 
                              << 0xfU)) | ((0x400000U 
                                            & (vlSelfRef.__PVT__decode_to_execute_SRC1 
                                               << 0xdU)) 
                                           | (0x200000U 
                                              & (vlSelfRef.__PVT__decode_to_execute_SRC1 
                                                 << 0xbU)))) 
               | ((0x100000U & (vlSelfRef.__PVT__decode_to_execute_SRC1 
                                << 9U)) | ((0x80000U 
                                            & (vlSelfRef.__PVT__decode_to_execute_SRC1 
                                               << 7U)) 
                                           | (0x40000U 
                                              & (vlSelfRef.__PVT__decode_to_execute_SRC1 
                                                 << 5U))))) 
              | (((0x20000U & (vlSelfRef.__PVT__decode_to_execute_SRC1 
                               << 3U)) | ((0x10000U 
                                           & (vlSelfRef.__PVT__decode_to_execute_SRC1 
                                              << 1U)) 
                                          | (0x8000U 
                                             & (vlSelfRef.__PVT__decode_to_execute_SRC1 
                                                >> 1U)))) 
                 | ((0x4000U & (vlSelfRef.__PVT__decode_to_execute_SRC1 
                                >> 3U)) | ((0x2000U 
                                            & (vlSelfRef.__PVT__decode_to_execute_SRC1 
                                               >> 5U)) 
                                           | (0x1000U 
                                              & (vlSelfRef.__PVT__decode_to_execute_SRC1 
                                                 >> 7U)))))));
    vlSelfRef.__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xffffffU & vlSelfRef.__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | ((((vlSelfRef.__PVT__decode_to_execute_SRC1 
                 << 0x1fU) | (0x40000000U & (vlSelfRef.__PVT__decode_to_execute_SRC1 
                                             << 0x1dU))) 
               | ((0x20000000U & (vlSelfRef.__PVT__decode_to_execute_SRC1 
                                  << 0x1bU)) | (0x10000000U 
                                                & (vlSelfRef.__PVT__decode_to_execute_SRC1 
                                                   << 0x19U)))) 
              | (((0x8000000U & (vlSelfRef.__PVT__decode_to_execute_SRC1 
                                 << 0x17U)) | (0x4000000U 
                                               & (vlSelfRef.__PVT__decode_to_execute_SRC1 
                                                  << 0x15U))) 
                 | ((0x2000000U & (vlSelfRef.__PVT__decode_to_execute_SRC1 
                                   << 0x13U)) | (0x1000000U 
                                                 & (vlSelfRef.__PVT__decode_to_execute_SRC1 
                                                    << 0x11U))))));
    vlSelfRef.__PVT__decode_SRC1_CTRL = (((4U == (0x14U 
                                                  & vlSelfRef.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)) 
                                          << 1U) | 
                                         (4U == (0x44U 
                                                 & vlSelfRef.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)));
    vlSelfRef.__PVT__execute_BranchPlugin_eq = (vlSelfRef.__PVT__decode_to_execute_SRC1 
                                                == vlSelfRef.__PVT__decode_to_execute_SRC2);
    __PVT___zz___05Fzz_decode_SRC_LESS_UNSIGNED_5 = 
        (((0x40001010U == (0x40003014U & vlSelfRef.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)) 
          << 1U) | (0x1010U == (0x7014U & vlSelfRef.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)));
    __VdfgRegularize_h16d7421c_0_4 = ((4U == (4U & vlSelfRef.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)) 
                                      | (0x20U == (0x70U 
                                                   & vlSelfRef.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)));
    __PVT___zz___05Fzz_decode_SRC_LESS_UNSIGNED_34 
        = (((4U == (4U & vlSelfRef.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)) 
            << 1U) | (0U == (0x20U & vlSelfRef.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)));
    __VdfgRegularize_h16d7421c_0_8 = ((0x48U == (0x48U 
                                                 & vlSelfRef.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)) 
                                      | (4U == (0x1cU 
                                                & vlSelfRef.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)));
    vlSelfRef.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__io_push_fire 
        = ((0U != (2U ^ ((IData)(vlSelfRef.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ptr_pop) 
                         ^ (IData)(vlSelfRef.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ptr_push)))) 
           & (IData)(vlSymsp->TOP.iBus_rsp_valid));
    vlSelfRef.__PVT__IBusSimplePlugin_predictor_fetchContext_hazard 
        = ((IData)(vlSelfRef.__PVT__IBusSimplePlugin_predictor_buffer_hazard_regNextWhen) 
           | (IData)(vlSelfRef.__PVT__IBusSimplePlugin_predictor_buffer_pcCorrected));
    vlSelfRef.__PVT__IBusSimplePlugin_predictor_fetchContext_hit 
        = (vlSelfRef.__PVT__IBusSimplePlugin_predictor_line_source 
           == (vlSelfRef.__PVT___zz_IBusSimplePlugin_iBusRsp_stages_0_output_m2sPipe_payload 
               >> 0xaU));
    vlSelfRef.__VdfgRegularize_h16d7421c_0_15 = (1U 
                                                 & ((~ (IData)(vlSelfRef.__PVT__IBusSimplePlugin_cmdFork_cmdFired)) 
                                                    & (~ (IData)(vlSelfRef.__PVT__IBusSimplePlugin_cmdFork_cmdKeep))));
    vlSelfRef.__PVT__HazardSimplePlugin_writeBackWrites_valid 
        = ((IData)(vlSelfRef.__PVT__memory_to_writeBack_REGFILE_WRITE_VALID) 
           & (IData)(vlSelfRef.__PVT__writeBack_arbitration_isValid));
    vlSelfRef.__PVT___zz_decode_RS2_3 = ((0xfffff000U 
                                          & vlSelfRef.__PVT___zz_decode_RS2_3) 
                                         | ((((0x800U 
                                               & (vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                  >> 9U)) 
                                              | ((0x400U 
                                                  & (vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                     >> 0xbU)) 
                                                 | (0x200U 
                                                    & (vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                       >> 0xdU)))) 
                                             | ((0x100U 
                                                 & (vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                    >> 0xfU)) 
                                                | ((0x80U 
                                                    & (vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                       >> 0x11U)) 
                                                   | (0x40U 
                                                      & (vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                         >> 0x13U))))) 
                                            | (((0x20U 
                                                 & (vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                    >> 0x15U)) 
                                                | ((0x10U 
                                                    & (vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                       >> 0x17U)) 
                                                   | (8U 
                                                      & (vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                         >> 0x19U)))) 
                                               | ((4U 
                                                   & (vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                      >> 0x1bU)) 
                                                  | ((2U 
                                                      & (vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                         >> 0x1dU)) 
                                                     | (vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                        >> 0x1fU))))));
    vlSelfRef.__PVT___zz_decode_RS2_3 = ((0xff000fffU 
                                          & vlSelfRef.__PVT___zz_decode_RS2_3) 
                                         | ((((0x800000U 
                                               & (vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                  << 0xfU)) 
                                              | ((0x400000U 
                                                  & (vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                     << 0xdU)) 
                                                 | (0x200000U 
                                                    & (vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                       << 0xbU)))) 
                                             | ((0x100000U 
                                                 & (vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                    << 9U)) 
                                                | ((0x80000U 
                                                    & (vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                       << 7U)) 
                                                   | (0x40000U 
                                                      & (vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                         << 5U))))) 
                                            | (((0x20000U 
                                                 & (vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                    << 3U)) 
                                                | ((0x10000U 
                                                    & (vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                       << 1U)) 
                                                   | (0x8000U 
                                                      & (vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                         >> 1U)))) 
                                               | ((0x4000U 
                                                   & (vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                      >> 3U)) 
                                                  | ((0x2000U 
                                                      & (vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                         >> 5U)) 
                                                     | (0x1000U 
                                                        & (vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                           >> 7U)))))));
    vlSelfRef.__PVT___zz_decode_RS2_3 = ((0xffffffU 
                                          & vlSelfRef.__PVT___zz_decode_RS2_3) 
                                         | ((((vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT 
                                               << 0x1fU) 
                                              | (0x40000000U 
                                                 & (vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                    << 0x1dU))) 
                                             | ((0x20000000U 
                                                 & (vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                    << 0x1bU)) 
                                                | (0x10000000U 
                                                   & (vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                      << 0x19U)))) 
                                            | (((0x8000000U 
                                                 & (vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                    << 0x17U)) 
                                                | (0x4000000U 
                                                   & (vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                      << 0x15U))) 
                                               | ((0x2000000U 
                                                   & (vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                      << 0x13U)) 
                                                  | (0x1000000U 
                                                     & (vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                        << 0x11U))))));
    vlSelfRef.__PVT__execute_SimdAddPlugin_rd = ((0xfffe0000U 
                                                  & vlSelfRef.__PVT__execute_SimdAddPlugin_rd) 
                                                 | ((0x1ff00U 
                                                     & (((vlSelfRef.__PVT__decode_to_execute_RS1 
                                                          >> 8U) 
                                                         + 
                                                         (vlSelfRef.__PVT__decode_to_execute_RS2 
                                                          >> 8U)) 
                                                        << 8U)) 
                                                    | (0xffU 
                                                       & (vlSelfRef.__PVT__decode_to_execute_RS1 
                                                          + vlSelfRef.__PVT__decode_to_execute_RS2))));
    vlSelfRef.__PVT__execute_SimdAddPlugin_rd = ((0xffffU 
                                                  & vlSelfRef.__PVT__execute_SimdAddPlugin_rd) 
                                                 | ((((vlSelfRef.__PVT__decode_to_execute_RS1 
                                                       >> 0x18U) 
                                                      + 
                                                      (vlSelfRef.__PVT__decode_to_execute_RS2 
                                                       >> 0x18U)) 
                                                     << 0x18U) 
                                                    | (0xff0000U 
                                                       & (((vlSelfRef.__PVT__decode_to_execute_RS1 
                                                            >> 0x10U) 
                                                           + 
                                                           (vlSelfRef.__PVT__decode_to_execute_RS2 
                                                            >> 0x10U)) 
                                                          << 0x10U))));
    vlSelfRef.__PVT__writeBack_DBusSimplePlugin_rspShifted 
        = vlSelfRef.__PVT__memory_to_writeBack_MEMORY_READ_DATA;
    if ((1U == (IData)(vlSelfRef.__PVT__memory_to_writeBack_MEMORY_ADDRESS_LOW))) {
        vlSelfRef.__PVT__writeBack_DBusSimplePlugin_rspShifted 
            = ((0xffffff00U & vlSelfRef.__PVT__writeBack_DBusSimplePlugin_rspShifted) 
               | (0xffU & (vlSelfRef.__PVT__memory_to_writeBack_MEMORY_READ_DATA 
                           >> 8U)));
    } else if ((2U == (IData)(vlSelfRef.__PVT__memory_to_writeBack_MEMORY_ADDRESS_LOW))) {
        vlSelfRef.__PVT__writeBack_DBusSimplePlugin_rspShifted 
            = ((0xffff0000U & vlSelfRef.__PVT__writeBack_DBusSimplePlugin_rspShifted) 
               | (vlSelfRef.__PVT__memory_to_writeBack_MEMORY_READ_DATA 
                  >> 0x10U));
    } else if ((3U == (IData)(vlSelfRef.__PVT__memory_to_writeBack_MEMORY_ADDRESS_LOW))) {
        vlSelfRef.__PVT__writeBack_DBusSimplePlugin_rspShifted 
            = ((0xffffff00U & vlSelfRef.__PVT__writeBack_DBusSimplePlugin_rspShifted) 
               | (vlSelfRef.__PVT__memory_to_writeBack_MEMORY_READ_DATA 
                  >> 0x18U));
    }
    vlSelfRef.__VdfgRegularize_h16d7421c_0_14 = ((IData)(vlSelfRef.__PVT__decode_to_execute_MEMORY_ENABLE) 
                                                 & (IData)(vlSelfRef.__PVT__execute_arbitration_isValid));
    vlSelfRef.__PVT__memory_BranchPlugin_predictionMissmatch 
        = ((((IData)(vlSelfRef.__PVT__execute_to_memory_PREDICTION_CONTEXT_hit) 
             & ((~ (IData)(vlSelfRef.__PVT__execute_to_memory_PREDICTION_CONTEXT_hazard)) 
                & ((IData)(vlSelfRef.__PVT__execute_to_memory_PREDICTION_CONTEXT_line_branchWish) 
                   >> 1U))) != (IData)(vlSelfRef.__PVT__execute_to_memory_BRANCH_DO)) 
           | ((IData)(vlSelfRef.__PVT__execute_to_memory_BRANCH_DO) 
              & (IData)(vlSelfRef.__PVT__execute_to_memory_TARGET_MISSMATCH1)));
    vlSelfRef.__PVT___zz___05Fzz_decode_SRC_LESS_UNSIGNED_51 
        = ((0x4000020U == (0x4000024U & vlSelfRef.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)) 
           | ((0x20U == (0x34U & vlSelfRef.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)) 
              | (0x20U == (0x2000024U & vlSelfRef.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst))));
    vlSelfRef.__PVT___zz___05Fzz_decode_SRC_LESS_UNSIGNED_60 
        = ((((0x4000000U == (0x4000004U & vlSelfRef.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)) 
             << 3U) | ((0U == (0x2000004U & vlSelfRef.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)) 
                       << 2U)) | (((0U == (0x18U & vlSelfRef.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)) 
                                   << 1U) | (0U == 
                                             (0x24U 
                                              & vlSelfRef.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst))));
    vlSelfRef.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ptr_empty 
        = ((IData)(vlSelfRef.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ptr_pop) 
           == (IData)(vlSelfRef.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ptr_push));
    vlSelfRef.__PVT__when_HazardSimplePlugin_l51_1 
        = ((0x1fU & (vlSelfRef.__PVT__execute_to_memory_INSTRUCTION 
                     >> 7U)) == (0x1fU & (vlSelfRef.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst 
                                          >> 0x14U)));
    vlSelfRef.__PVT__when_HazardSimplePlugin_l51_2 
        = ((0x1fU & (vlSelfRef.__PVT__decode_to_execute_INSTRUCTION 
                     >> 7U)) == (0x1fU & (vlSelfRef.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst 
                                          >> 0x14U)));
    vlSelfRef.__PVT__when_HazardSimplePlugin_l48_1 
        = ((0x1fU & (vlSelfRef.__PVT__execute_to_memory_INSTRUCTION 
                     >> 7U)) == (0x1fU & (vlSelfRef.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst 
                                          >> 0xfU)));
    vlSelfRef.__PVT__when_HazardSimplePlugin_l48_2 
        = ((0x1fU & (vlSelfRef.__PVT__decode_to_execute_INSTRUCTION 
                     >> 7U)) == (0x1fU & (vlSelfRef.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst 
                                          >> 0xfU)));
    vlSelfRef.__PVT__execute_SrcPlugin_addSub = ((vlSelfRef.__PVT__decode_to_execute_SRC1 
                                                  + 
                                                  ((IData)(vlSelfRef.__PVT__decode_to_execute_SRC_USE_SUB_LESS)
                                                    ? 
                                                   (~ vlSelfRef.__PVT__decode_to_execute_SRC2)
                                                    : vlSelfRef.__PVT__decode_to_execute_SRC2)) 
                                                 + 
                                                 ((IData)(vlSelfRef.__PVT__decode_to_execute_SRC_USE_SUB_LESS)
                                                   ? 1U
                                                   : 0U));
    if (vlSelfRef.__PVT__decode_to_execute_SRC2_FORCE_ZERO) {
        vlSelfRef.__PVT__execute_SrcPlugin_addSub = vlSelfRef.__PVT__decode_to_execute_SRC1;
    }
    vlSelfRef.__PVT__memory_arbitration_haltItself = 0U;
    if (((IData)(vlSelfRef.__PVT__execute_to_memory_MEMORY_ENABLE) 
         & ((~ ((IData)(vlSymsp->TOP.dBus_rsp_ready) 
                | (IData)(vlSelfRef.__PVT__execute_to_memory_MEMORY_STORE))) 
            & (IData)(vlSelfRef.__PVT__memory_arbitration_isValid)))) {
        vlSelfRef.__PVT__memory_arbitration_haltItself = 1U;
    }
    vlSelfRef.__PVT__when_HazardSimplePlugin_l45_1 
        = ((IData)(vlSelfRef.__PVT__execute_to_memory_REGFILE_WRITE_VALID) 
           & (IData)(vlSelfRef.__PVT__memory_arbitration_isValid));
    vlSelfRef.__PVT__when_HazardSimplePlugin_l45_2 
        = ((IData)(vlSelfRef.__PVT__decode_to_execute_REGFILE_WRITE_VALID) 
           & (IData)(vlSelfRef.__PVT__execute_arbitration_isValid));
    vlSelfRef.__PVT__decode_REGFILE_WRITE_VALID = (0U 
                                                   != (IData)(__PVT___zz___05Fzz_decode_SRC_LESS_UNSIGNED_77));
    if ((0U == (0x1fU & (vlSelfRef.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst 
                         >> 7U)))) {
        vlSelfRef.__PVT__decode_REGFILE_WRITE_VALID = 0U;
    }
    vlSelfRef.__PVT__execute_FullBarrelShifterPlugin_reversed 
        = ((1U == (IData)(vlSelfRef.__PVT__decode_to_execute_SHIFT_CTRL))
            ? vlSelfRef.__PVT___zz_execute_FullBarrelShifterPlugin_reversed
            : vlSelfRef.__PVT__decode_to_execute_SRC1);
    __Vtableidx19 = vlSelfRef.__PVT__decode_SRC1_CTRL;
    vlSelfRef.__PVT__decode_SRC1_CTRL_string[0U] = 
        VVexRiscv__ConstPool__TABLE_haaa23a29_0[__Vtableidx19][0U];
    vlSelfRef.__PVT__decode_SRC1_CTRL_string[1U] = 
        VVexRiscv__ConstPool__TABLE_haaa23a29_0[__Vtableidx19][1U];
    vlSelfRef.__PVT__decode_SRC1_CTRL_string[2U] = 
        VVexRiscv__ConstPool__TABLE_haaa23a29_0[__Vtableidx19][2U];
    vlSelfRef.__PVT__decode_SHIFT_CTRL = (((0x5010U 
                                            == (0x7014U 
                                                & vlSelfRef.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)) 
                                           << 1U) | 
                                          (0U != (IData)(__PVT___zz___05Fzz_decode_SRC_LESS_UNSIGNED_5)));
    vlSelfRef.__PVT__decode_SRC2_CTRL = (((IData)(__VdfgRegularize_h16d7421c_0_4) 
                                          << 1U) | 
                                         (0U != (IData)(__PVT___zz___05Fzz_decode_SRC_LESS_UNSIGNED_34)));
    vlSelfRef.__PVT__decode_BRANCH_CTRL = (((IData)(__VdfgRegularize_h16d7421c_0_8) 
                                            << 1U) 
                                           | (0x40U 
                                              == (0x48U 
                                                  & vlSelfRef.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)));
    vlSelfRef.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT___zz_1 = 0U;
    if (vlSelfRef.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__io_push_fire) {
        vlSelfRef.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT___zz_1 = 1U;
    }
    vlSelfRef.__PVT__IBusSimplePlugin_fetchPc_predictionPcLoad_valid 
        = (((IData)(vlSelfRef.__PVT__IBusSimplePlugin_predictor_line_branchWish) 
            >> 1U) & ((IData)(vlSelfRef.__PVT__IBusSimplePlugin_predictor_fetchContext_hit) 
                      & ((~ (IData)(vlSelfRef.__PVT__IBusSimplePlugin_predictor_fetchContext_hazard)) 
                         & (IData)(vlSelfRef.__PVT___zz_IBusSimplePlugin_iBusRsp_stages_0_output_m2sPipe_valid))));
    vlSelfRef.__PVT__IBusSimplePlugin_iBusRsp_stages_1_halt = 0U;
    if (((7U == (IData)(vlSelfRef.__PVT__IBusSimplePlugin_pending_value)) 
         & (IData)(vlSelfRef.__VdfgRegularize_h16d7421c_0_15))) {
        vlSelfRef.__PVT__IBusSimplePlugin_iBusRsp_stages_1_halt = 1U;
    }
    if ((1U & ((~ (IData)(vlSymsp->TOP.iBus_cmd_ready)) 
               & (~ (IData)(vlSelfRef.__PVT__IBusSimplePlugin_cmdFork_cmdFired))))) {
        vlSelfRef.__PVT__IBusSimplePlugin_iBusRsp_stages_1_halt = 1U;
    }
    vlSelfRef.__PVT__IBusSimplePlugin_cmdFork_enterTheMarket 
        = ((7U != (IData)(vlSelfRef.__PVT__IBusSimplePlugin_pending_value)) 
           & ((IData)(vlSelfRef.__PVT___zz_IBusSimplePlugin_iBusRsp_stages_0_output_m2sPipe_valid) 
              & (IData)(vlSelfRef.__VdfgRegularize_h16d7421c_0_15)));
    vlSelfRef.lastStageRegFileWrite_valid = vlSelfRef.__PVT__HazardSimplePlugin_writeBackWrites_valid;
    vlSelfRef.__PVT___zz_decode_RS2_1 = vlSelfRef.__PVT__execute_to_memory_REGFILE_WRITE_DATA;
    if (((IData)(vlSelfRef.__PVT__execute_to_memory_IS_SPHERE_VOLUME) 
         & (IData)(vlSelfRef.__PVT__memory_arbitration_isValid))) {
        vlSelfRef.__PVT___zz_decode_RS2_1 = vlSelfRef.__PVT__execute_to_memory_SPHERE_VOLUME;
    }
    if (vlSelfRef.__PVT__memory_arbitration_isValid) {
        if ((1U == (IData)(vlSelfRef.__PVT__execute_to_memory_SHIFT_CTRL))) {
            vlSelfRef.__PVT___zz_decode_RS2_1 = vlSelfRef.__PVT___zz_decode_RS2_3;
        } else if (((2U == (IData)(vlSelfRef.__PVT__execute_to_memory_SHIFT_CTRL)) 
                    || (3U == (IData)(vlSelfRef.__PVT__execute_to_memory_SHIFT_CTRL)))) {
            vlSelfRef.__PVT___zz_decode_RS2_1 = vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT;
        }
    }
    vlSelfRef.__PVT___zz_decode_RS2 = vlSelfRef.__PVT__memory_to_writeBack_REGFILE_WRITE_DATA;
    if (((IData)(vlSelfRef.__PVT__memory_to_writeBack_MEMORY_ENABLE) 
         & (IData)(vlSelfRef.__PVT__writeBack_arbitration_isValid))) {
        vlSelfRef.__PVT___zz_decode_RS2 = ((0U == (3U 
                                                   & (vlSelfRef.__PVT__memory_to_writeBack_INSTRUCTION 
                                                      >> 0xcU)))
                                            ? (((- (IData)(
                                                           (1U 
                                                            & ((~ 
                                                                (vlSelfRef.__PVT__memory_to_writeBack_INSTRUCTION 
                                                                 >> 0xeU)) 
                                                               & (vlSelfRef.__PVT__writeBack_DBusSimplePlugin_rspShifted 
                                                                  >> 7U))))) 
                                                << 8U) 
                                               | (0xffU 
                                                  & vlSelfRef.__PVT__writeBack_DBusSimplePlugin_rspShifted))
                                            : ((1U 
                                                == 
                                                (3U 
                                                 & (vlSelfRef.__PVT__memory_to_writeBack_INSTRUCTION 
                                                    >> 0xcU)))
                                                ? (
                                                   ((- (IData)(
                                                               (1U 
                                                                & ((~ 
                                                                    (vlSelfRef.__PVT__memory_to_writeBack_INSTRUCTION 
                                                                     >> 0xeU)) 
                                                                   & (vlSelfRef.__PVT__writeBack_DBusSimplePlugin_rspShifted 
                                                                      >> 0xfU))))) 
                                                    << 0x10U) 
                                                   | (0xffffU 
                                                      & vlSelfRef.__PVT__writeBack_DBusSimplePlugin_rspShifted))
                                                : vlSelfRef.__PVT__writeBack_DBusSimplePlugin_rspShifted));
    }
    vlSelfRef.__PVT__execute_arbitration_haltItself = 0U;
    if (((~ (IData)(vlSymsp->TOP.dBus_cmd_ready)) & (IData)(vlSelfRef.__VdfgRegularize_h16d7421c_0_14))) {
        vlSelfRef.__PVT__execute_arbitration_haltItself = 1U;
    }
    if (vlSelfRef.__PVT__memory_BranchPlugin_predictionMissmatch) {
        vlSelfRef.__PVT__IBusSimplePlugin_predictor_historyWrite_payload_data_branchWish 
            = (3U & ((IData)(vlSelfRef.__PVT__execute_to_memory_PREDICTION_CONTEXT_hit)
                      ? (((IData)(vlSelfRef.__PVT__execute_to_memory_PREDICTION_CONTEXT_line_branchWish) 
                          - VL_SHIFTR_III(2,2,32, (IData)(vlSelfRef.__PVT__execute_to_memory_PREDICTION_CONTEXT_line_branchWish), 1U)) 
                         + (1U & (~ ((IData)(vlSelfRef.__PVT__execute_to_memory_PREDICTION_CONTEXT_line_branchWish) 
                                     >> 1U)))) : 2U));
        vlSelfRef.__PVT__BranchPlugin_jumpInterface_valid 
            = vlSelfRef.__PVT__memory_arbitration_isValid;
    } else {
        vlSelfRef.__PVT__IBusSimplePlugin_predictor_historyWrite_payload_data_branchWish 
            = (3U & (((IData)(vlSelfRef.__PVT__execute_to_memory_PREDICTION_CONTEXT_line_branchWish) 
                      + (2U == (IData)(vlSelfRef.__PVT__execute_to_memory_PREDICTION_CONTEXT_line_branchWish))) 
                     - (1U == (IData)(vlSelfRef.__PVT__execute_to_memory_PREDICTION_CONTEXT_line_branchWish))));
        vlSelfRef.__PVT__BranchPlugin_jumpInterface_valid = 0U;
    }
    vlSelfRef.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_error 
        = (1U & (IData)(vlSelfRef.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ram
                        [(1U & (IData)(vlSelfRef.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ptr_pop))]));
    vlSelfRef.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst 
        = (IData)((vlSelfRef.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ram
                   [(1U & (IData)(vlSelfRef.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ptr_pop))] 
                   >> 1U));
    vlSelfRef.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_valid 
        = (1U & (~ (IData)(vlSelfRef.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ptr_empty)));
    vlSelfRef.__PVT__execute_SRC_LESS = (1U & (((vlSelfRef.__PVT__decode_to_execute_SRC1 
                                                 >> 0x1fU) 
                                                == 
                                                (vlSelfRef.__PVT__decode_to_execute_SRC2 
                                                 >> 0x1fU))
                                                ? (vlSelfRef.__PVT__execute_SrcPlugin_addSub 
                                                   >> 0x1fU)
                                                : ((IData)(vlSelfRef.__PVT__decode_to_execute_SRC_LESS_UNSIGNED)
                                                    ? 
                                                   (vlSelfRef.__PVT__decode_to_execute_SRC2 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.__PVT__decode_to_execute_SRC1 
                                                    >> 0x1fU))));
    vlSelfRef.__PVT__IBusSimplePlugin_predictor_historyWrite_valid 
        = ((IData)(vlSelfRef.__PVT__memory_BranchPlugin_predictionMissmatch) 
           || (IData)(vlSelfRef.__PVT__execute_to_memory_PREDICTION_CONTEXT_hit));
    if ((1U & ((~ ((IData)(vlSelfRef.__PVT__memory_arbitration_isValid) 
                   & (~ (IData)(vlSelfRef.__PVT__memory_arbitration_haltItself)))) 
               | (IData)(vlSelfRef.__PVT__execute_to_memory_PREDICTION_CONTEXT_hazard)))) {
        vlSelfRef.__PVT__IBusSimplePlugin_predictor_historyWrite_valid = 0U;
    }
    __Vtableidx32 = ((((0x40U & ((~ (IData)((0U != (IData)(vlSelfRef.__PVT___zz___05Fzz_decode_SRC_LESS_UNSIGNED_60)))) 
                                 << 6U)) | ((IData)(vlSelfRef.__PVT__when_HazardSimplePlugin_l48_2) 
                                            << 5U)) 
                      | ((0x10U & ((~ (IData)(vlSelfRef.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE)) 
                                   << 4U)) | ((IData)(vlSelfRef.__PVT__when_HazardSimplePlugin_l45_2) 
                                              << 3U))) 
                     | (((IData)(vlSelfRef.__PVT__when_HazardSimplePlugin_l48_1) 
                         << 2U) | ((2U & ((~ (IData)(vlSelfRef.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE)) 
                                          << 1U)) | (IData)(vlSelfRef.__PVT__when_HazardSimplePlugin_l45_1))));
    vlSelfRef.__PVT__HazardSimplePlugin_src0Hazard 
        = VVexRiscv__ConstPool__TABLE_h10b59b12_0[__Vtableidx32];
    __Vtableidx33 = ((((0x40U & ((~ (IData)(vlSelfRef.__PVT___zz___05Fzz_decode_SRC_LESS_UNSIGNED_51)) 
                                 << 6U)) | ((IData)(vlSelfRef.__PVT__when_HazardSimplePlugin_l51_2) 
                                            << 5U)) 
                      | ((0x10U & ((~ (IData)(vlSelfRef.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE)) 
                                   << 4U)) | ((IData)(vlSelfRef.__PVT__when_HazardSimplePlugin_l45_2) 
                                              << 3U))) 
                     | (((IData)(vlSelfRef.__PVT__when_HazardSimplePlugin_l51_1) 
                         << 2U) | ((2U & ((~ (IData)(vlSelfRef.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE)) 
                                          << 1U)) | (IData)(vlSelfRef.__PVT__when_HazardSimplePlugin_l45_1))));
    vlSelfRef.__PVT__HazardSimplePlugin_src1Hazard 
        = VVexRiscv__ConstPool__TABLE_h10b59b12_0[__Vtableidx33];
    __Vtableidx7 = vlSelfRef.__PVT__decode_SHIFT_CTRL;
    vlSelfRef.__PVT__decode_SHIFT_CTRL_string[0U] = 
        VVexRiscv__ConstPool__TABLE_h667a2ed9_0[__Vtableidx7][0U];
    vlSelfRef.__PVT__decode_SHIFT_CTRL_string[1U] = 
        VVexRiscv__ConstPool__TABLE_h667a2ed9_0[__Vtableidx7][1U];
    vlSelfRef.__PVT__decode_SHIFT_CTRL_string[2U] = 
        VVexRiscv__ConstPool__TABLE_h667a2ed9_0[__Vtableidx7][2U];
    __Vtableidx17 = vlSelfRef.__PVT__decode_SRC2_CTRL;
    vlSelfRef.__PVT__decode_SRC2_CTRL_string = VVexRiscv__ConstPool__TABLE_h2c4dac23_0
        [__Vtableidx17];
    __Vtableidx1 = vlSelfRef.__PVT__decode_BRANCH_CTRL;
    vlSelfRef.__PVT__decode_BRANCH_CTRL_string = VVexRiscv__ConstPool__TABLE_h22e9b8d7_0
        [__Vtableidx1];
    vlSelfRef.iBus_cmd_valid = ((IData)(vlSelfRef.__PVT__IBusSimplePlugin_cmdFork_enterTheMarket) 
                                | (IData)(vlSelfRef.__PVT__IBusSimplePlugin_cmdFork_cmdKeep));
    vlSelfRef.__PVT___zz_1 = 0U;
    if (vlSelfRef.__PVT___zz_8) {
        vlSelfRef.lastStageRegFileWrite_payload_address = 0U;
        vlSelfRef.lastStageRegFileWrite_valid = 1U;
    }
    if (vlSelfRef.lastStageRegFileWrite_valid) {
        vlSelfRef.__PVT___zz_1 = 1U;
    }
    vlSelfRef.lastStageRegFileWrite_payload_data = vlSelfRef.__PVT___zz_decode_RS2;
    if (vlSelfRef.__PVT___zz_8) {
        vlSelfRef.lastStageRegFileWrite_payload_data = 0U;
    }
    vlSelfRef.__PVT__execute_arbitration_isStuck = 
        ((IData)(vlSelfRef.__PVT__execute_arbitration_haltItself) 
         | (IData)(vlSelfRef.__PVT__memory_arbitration_haltItself));
    vlSelfRef.__PVT__IBusSimplePlugin_fetchPc_flushed = 0U;
    vlSelfRef.__PVT__IBusSimplePlugin_fetchPc_correction = 0U;
    if (vlSelfRef.__PVT__IBusSimplePlugin_fetchPc_predictionPcLoad_valid) {
        vlSelfRef.__PVT__IBusSimplePlugin_fetchPc_correction = 1U;
    }
    vlSelfRef.__PVT__IBusSimplePlugin_fetchPc_pc = 
        (vlSelfRef.IBusSimplePlugin_fetchPc_pcReg + 
         ((IData)(vlSelfRef.__PVT__IBusSimplePlugin_fetchPc_inc) 
          << 2U));
    if (vlSelfRef.__PVT__IBusSimplePlugin_fetchPc_predictionPcLoad_valid) {
        vlSelfRef.__PVT__IBusSimplePlugin_fetchPc_pc 
            = vlSelfRef.__PVT__IBusSimplePlugin_predictor_line_target;
    }
    if (vlSelfRef.__PVT__BranchPlugin_jumpInterface_valid) {
        vlSelfRef.__PVT__IBusSimplePlugin_fetchPc_flushed = 1U;
        vlSelfRef.__PVT__IBusSimplePlugin_fetchPc_correction = 1U;
        vlSelfRef.__PVT__IBusSimplePlugin_fetchPc_pc 
            = ((IData)(vlSelfRef.__PVT__execute_to_memory_BRANCH_DO)
                ? vlSelfRef.__PVT__execute_to_memory_BRANCH_CALC
                : vlSelfRef.__PVT__execute_to_memory_NEXT_PC1);
    }
    vlSelfRef.__PVT__IBusSimplePlugin_fetchPc_pc = 
        (0xfffffffcU & vlSelfRef.__PVT__IBusSimplePlugin_fetchPc_pc);
    vlSelfRef.__PVT__memory_arbitration_flushNext = 0U;
    if (vlSelfRef.__PVT__BranchPlugin_jumpInterface_valid) {
        vlSelfRef.__PVT__memory_arbitration_flushNext = 1U;
    }
    if (vlSelfRef.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ptr_empty) {
        vlSelfRef.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_error 
            = vlSymsp->TOP.iBus_rsp_payload_error;
        vlSelfRef.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst 
            = vlSymsp->TOP.iBus_rsp_payload_inst;
        vlSelfRef.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_valid 
            = vlSymsp->TOP.iBus_rsp_valid;
    }
    vlSelfRef.__PVT___zz_IBusSimplePlugin_rspJoin_rspBuffer_discardCounter_1 
        = ((IData)(vlSelfRef.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_valid) 
           & (0U != (IData)(vlSelfRef.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_discardCounter)));
    vlSelfRef.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_output_valid 
        = ((IData)(vlSelfRef.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_valid) 
           & (0U == (IData)(vlSelfRef.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_discardCounter)));
    __Vtableidx34 = ((((IData)(vlSelfRef.__PVT__execute_BranchPlugin_eq) 
                       << 6U) | (0x20U & ((~ (IData)(vlSelfRef.__PVT__execute_BranchPlugin_eq)) 
                                          << 5U))) 
                     | (((IData)(vlSelfRef.__PVT__execute_SRC_LESS) 
                         << 4U) | ((8U & ((~ (IData)(vlSelfRef.__PVT__execute_SRC_LESS)) 
                                          << 3U)) | 
                                   (7U & (vlSelfRef.__PVT__decode_to_execute_INSTRUCTION 
                                          >> 0xcU)))));
    vlSelfRef.__PVT___zz_execute_BRANCH_DO = VVexRiscv__ConstPool__TABLE_h959b1508_0
        [__Vtableidx34];
    vlSelfRef.__PVT___zz_decode_RS2_2 = ((2U == (IData)(vlSelfRef.__PVT__decode_to_execute_ALU_CTRL))
                                          ? ((2U == (IData)(vlSelfRef.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                              ? (vlSelfRef.__PVT__decode_to_execute_SRC1 
                                                 & vlSelfRef.__PVT__decode_to_execute_SRC2)
                                              : ((1U 
                                                  == (IData)(vlSelfRef.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                                  ? 
                                                 (vlSelfRef.__PVT__decode_to_execute_SRC1 
                                                  | vlSelfRef.__PVT__decode_to_execute_SRC2)
                                                  : 
                                                 (vlSelfRef.__PVT__decode_to_execute_SRC1 
                                                  ^ vlSelfRef.__PVT__decode_to_execute_SRC2)))
                                          : ((1U == (IData)(vlSelfRef.__PVT__decode_to_execute_ALU_CTRL))
                                              ? (IData)(vlSelfRef.__PVT__execute_SRC_LESS)
                                              : vlSelfRef.__PVT__execute_SrcPlugin_addSub));
    if (vlSelfRef.__PVT__decode_to_execute_IS_SIMD_ADD) {
        vlSelfRef.__PVT___zz_decode_RS2_2 = vlSelfRef.__PVT__execute_SimdAddPlugin_rd;
    }
    vlSelfRef.__PVT___zz_2 = 0U;
    if (vlSelfRef.__PVT__IBusSimplePlugin_predictor_historyWrite_valid) {
        vlSelfRef.__PVT___zz_2 = 1U;
    }
    vlSelfRef.__PVT__decode_arbitration_haltByOther = 0U;
    if (((IData)(vlSelfRef.__PVT___zz_IBusSimplePlugin_injector_decodeInput_valid) 
         & ((IData)(vlSelfRef.__PVT__HazardSimplePlugin_src0Hazard) 
            | (IData)(vlSelfRef.__PVT__HazardSimplePlugin_src1Hazard)))) {
        vlSelfRef.__PVT__decode_arbitration_haltByOther = 1U;
    }
    vlSelfRef.__PVT__decode_arbitration_removeIt = 0U;
    vlSelfRef.__PVT__execute_arbitration_removeIt = 0U;
    if (vlSelfRef.__PVT__memory_arbitration_flushNext) {
        vlSelfRef.__PVT__decode_arbitration_removeIt = 1U;
        vlSelfRef.__PVT__execute_arbitration_removeIt = 1U;
    }
    vlSelfRef.__PVT__IBusSimplePlugin_rspJoin_fetchRsp_rsp_error 
        = vlSelfRef.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_error;
    if ((1U & (~ (IData)(vlSelfRef.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_output_valid)))) {
        vlSelfRef.__PVT__IBusSimplePlugin_rspJoin_fetchRsp_rsp_error = 0U;
    }
    vlSelfRef.__PVT__IBusSimplePlugin_iBusRsp_output_valid 
        = ((IData)(vlSelfRef.__PVT___zz_IBusSimplePlugin_iBusRsp_stages_1_output_m2sPipe_valid) 
           & (IData)(vlSelfRef.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_output_valid));
    vlSelfRef.__PVT__decode_RS2 = vlSelfRef.__PVT__RegFilePlugin_regFile_spinal_port1;
    if (vlSelfRef.__PVT__HazardSimplePlugin_writeBackBuffer_valid) {
        if (((IData)(vlSelfRef.__PVT__HazardSimplePlugin_writeBackBuffer_payload_address) 
             == (0x1fU & (vlSelfRef.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst 
                          >> 0x14U)))) {
            vlSelfRef.__PVT__decode_RS2 = vlSelfRef.__PVT__HazardSimplePlugin_writeBackBuffer_payload_data;
        }
    }
    if (vlSelfRef.__PVT__HazardSimplePlugin_writeBackWrites_valid) {
        if (((0x1fU & (vlSelfRef.__PVT__memory_to_writeBack_INSTRUCTION 
                       >> 7U)) == (0x1fU & (vlSelfRef.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst 
                                            >> 0x14U)))) {
            vlSelfRef.__PVT__decode_RS2 = vlSelfRef.__PVT___zz_decode_RS2;
        }
    }
    if (vlSelfRef.__PVT__when_HazardSimplePlugin_l45_1) {
        if (vlSelfRef.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE) {
            if (vlSelfRef.__PVT__when_HazardSimplePlugin_l51_1) {
                vlSelfRef.__PVT__decode_RS2 = vlSelfRef.__PVT___zz_decode_RS2_1;
            }
        }
    }
    vlSelfRef.__PVT__decode_RS1 = vlSelfRef.__PVT__RegFilePlugin_regFile_spinal_port0;
    if (vlSelfRef.__PVT__HazardSimplePlugin_writeBackBuffer_valid) {
        if (((IData)(vlSelfRef.__PVT__HazardSimplePlugin_writeBackBuffer_payload_address) 
             == (0x1fU & (vlSelfRef.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst 
                          >> 0xfU)))) {
            vlSelfRef.__PVT__decode_RS1 = vlSelfRef.__PVT__HazardSimplePlugin_writeBackBuffer_payload_data;
        }
    }
    if (vlSelfRef.__PVT__HazardSimplePlugin_writeBackWrites_valid) {
        if (((0x1fU & (vlSelfRef.__PVT__memory_to_writeBack_INSTRUCTION 
                       >> 7U)) == (0x1fU & (vlSelfRef.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst 
                                            >> 0xfU)))) {
            vlSelfRef.__PVT__decode_RS1 = vlSelfRef.__PVT___zz_decode_RS2;
        }
    }
    if (vlSelfRef.__PVT__when_HazardSimplePlugin_l45_1) {
        if (vlSelfRef.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE) {
            if (vlSelfRef.__PVT__when_HazardSimplePlugin_l48_1) {
                vlSelfRef.__PVT__decode_RS1 = vlSelfRef.__PVT___zz_decode_RS2_1;
            }
        }
    }
    if (vlSelfRef.__PVT__when_HazardSimplePlugin_l45_2) {
        if (vlSelfRef.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE) {
            if (vlSelfRef.__PVT__when_HazardSimplePlugin_l51_2) {
                vlSelfRef.__PVT__decode_RS2 = vlSelfRef.__PVT___zz_decode_RS2_2;
            }
            if (vlSelfRef.__PVT__when_HazardSimplePlugin_l48_2) {
                vlSelfRef.__PVT__decode_RS1 = vlSelfRef.__PVT___zz_decode_RS2_2;
            }
        }
    }
    vlSelfRef.__PVT__decode_arbitration_isStuck = ((IData)(vlSelfRef.__PVT__decode_arbitration_haltByOther) 
                                                   | ((IData)(vlSelfRef.__PVT__execute_arbitration_isStuck) 
                                                      | (IData)(vlSelfRef.__PVT__memory_arbitration_haltItself)));
    vlSelfRef.__PVT__decode_INSTRUCTION_ANTICIPATED 
        = ((IData)(vlSelfRef.__PVT__decode_arbitration_isStuck)
            ? vlSelfRef.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst
            : vlSelfRef.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst);
    vlSelfRef.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_output_ready 
        = ((~ (IData)(vlSelfRef.__PVT__decode_arbitration_isStuck)) 
           & (IData)(vlSelfRef.__PVT__IBusSimplePlugin_iBusRsp_output_valid));
    vlSelfRef.__PVT__IBusSimplePlugin_iBusRsp_stages_1_output_ready 
        = (1U & ((IData)(vlSelfRef.__PVT___zz_IBusSimplePlugin_iBusRsp_stages_1_output_m2sPipe_valid)
                  ? (IData)(vlSelfRef.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_output_ready)
                  : (~ (IData)(vlSelfRef.__PVT__decode_arbitration_isStuck))));
    vlSelfRef.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_ready 
        = ((IData)(vlSelfRef.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_output_ready) 
           | ((0U != (IData)(vlSelfRef.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_discardCounter)) 
              | (IData)(vlSelfRef.__PVT__memory_arbitration_flushNext)));
    vlSelfRef.__PVT__IBusSimplePlugin_iBusRsp_stages_0_input_ready 
        = ((~ (IData)(vlSelfRef.__PVT__IBusSimplePlugin_iBusRsp_stages_1_halt)) 
           & (IData)(vlSelfRef.__PVT__IBusSimplePlugin_iBusRsp_stages_1_output_ready));
    vlSelfRef.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ptr_doPop 
        = ((~ (IData)(vlSelfRef.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ptr_empty)) 
           & (IData)(vlSelfRef.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_ready));
    vlSelfRef.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ptr_doPush 
        = vlSelfRef.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__io_push_fire;
    if (vlSelfRef.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ptr_empty) {
        if (vlSelfRef.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_ready) {
            vlSelfRef.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ptr_doPush = 0U;
        }
    }
    vlSelfRef.__PVT__IBusSimplePlugin_pending_next 
        = (7U & (((IData)(vlSelfRef.__PVT__IBusSimplePlugin_pending_value) 
                  + (IData)(vlSelfRef.__PVT__IBusSimplePlugin_cmdFork_enterTheMarket)) 
                 - ((IData)(vlSelfRef.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_valid) 
                    & (IData)(vlSelfRef.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_ready))));
    vlSelfRef.__PVT__IBusSimplePlugin_fetchPc_output_fire 
        = ((IData)(vlSelfRef.__PVT__IBusSimplePlugin_fetchPc_booted) 
           & (IData)(vlSelfRef.__PVT__IBusSimplePlugin_iBusRsp_stages_0_input_ready));
}
