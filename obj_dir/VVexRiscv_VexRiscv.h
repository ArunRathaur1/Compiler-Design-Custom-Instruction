// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VVexRiscv.h for the primary calling header

#ifndef VERILATED_VVEXRISCV_VEXRISCV_H_
#define VERILATED_VVEXRISCV_VEXRISCV_H_  // guard

#include "verilated.h"


class VVexRiscv__Syms;

class alignas(VL_CACHE_LINE_BYTES) VVexRiscv_VexRiscv final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(reset,0,0);
        VL_OUT8(iBus_cmd_valid,0,0);
        VL_IN8(iBus_cmd_ready,0,0);
        VL_IN8(iBus_rsp_valid,0,0);
        VL_IN8(iBus_rsp_payload_error,0,0);
        VL_OUT8(dBus_cmd_valid,0,0);
        VL_IN8(dBus_cmd_ready,0,0);
        VL_OUT8(dBus_cmd_payload_wr,0,0);
        VL_OUT8(dBus_cmd_payload_mask,3,0);
        VL_OUT8(dBus_cmd_payload_size,1,0);
        VL_IN8(dBus_rsp_ready,0,0);
        VL_IN8(dBus_rsp_error,0,0);
        CData/*0:0*/ __PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_ready;
        CData/*0:0*/ __PVT___zz_IBusSimplePlugin_rspJoin_rspBuffer_discardCounter_1;
        CData/*0:0*/ __PVT___zz___05Fzz_decode_SRC_LESS_UNSIGNED_51;
        CData/*3:0*/ __PVT___zz___05Fzz_decode_SRC_LESS_UNSIGNED_60;
        CData/*1:0*/ __PVT__decode_BRANCH_CTRL;
        CData/*1:0*/ __PVT__decode_SHIFT_CTRL;
        CData/*1:0*/ __PVT__decode_ALU_BITWISE_CTRL;
        CData/*0:0*/ __PVT__decode_SRC_LESS_UNSIGNED;
        CData/*1:0*/ __PVT__decode_ALU_CTRL;
        CData/*0:0*/ __PVT__decode_BYPASSABLE_EXECUTE_STAGE;
        CData/*1:0*/ __PVT__decode_SRC2_CTRL;
        CData/*1:0*/ __PVT__decode_SRC1_CTRL;
        CData/*0:0*/ __PVT__decode_SRC_USE_SUB_LESS;
        CData/*0:0*/ __PVT__execute_SRC_LESS;
        CData/*0:0*/ __PVT___zz_1;
        CData/*0:0*/ __PVT__decode_REGFILE_WRITE_VALID;
        CData/*0:0*/ __PVT___zz_2;
        CData/*0:0*/ __PVT__decode_arbitration_haltByOther;
        CData/*0:0*/ __PVT__decode_arbitration_removeIt;
        CData/*0:0*/ __PVT__decode_arbitration_isStuck;
        CData/*0:0*/ __PVT__execute_arbitration_haltItself;
        CData/*0:0*/ __PVT__execute_arbitration_removeIt;
        CData/*0:0*/ __PVT__execute_arbitration_isValid;
        CData/*0:0*/ __PVT__execute_arbitration_isStuck;
        CData/*0:0*/ __PVT__memory_arbitration_haltItself;
        CData/*0:0*/ __PVT__memory_arbitration_flushNext;
        CData/*0:0*/ __PVT__memory_arbitration_isValid;
        CData/*0:0*/ __PVT__writeBack_arbitration_isValid;
        CData/*0:0*/ lastStageIsValid;
        CData/*0:0*/ lastStageIsFiring;
        CData/*0:0*/ __PVT__IBusSimplePlugin_incomingInstruction;
        CData/*0:0*/ __PVT__BranchPlugin_jumpInterface_valid;
        CData/*0:0*/ __PVT__IBusSimplePlugin_fetchPc_correction;
        CData/*0:0*/ __PVT__IBusSimplePlugin_fetchPc_correctionReg;
        CData/*0:0*/ __PVT__IBusSimplePlugin_fetchPc_output_fire;
        CData/*0:0*/ __PVT__IBusSimplePlugin_fetchPc_booted;
        CData/*0:0*/ __PVT__IBusSimplePlugin_fetchPc_inc;
        CData/*0:0*/ __PVT__IBusSimplePlugin_fetchPc_predictionPcLoad_valid;
        CData/*0:0*/ __PVT__IBusSimplePlugin_fetchPc_flushed;
        CData/*0:0*/ __PVT__IBusSimplePlugin_iBusRsp_stages_0_input_ready;
        CData/*0:0*/ __PVT__IBusSimplePlugin_iBusRsp_stages_1_output_ready;
        CData/*0:0*/ __PVT__IBusSimplePlugin_iBusRsp_stages_1_halt;
        CData/*0:0*/ __PVT___zz_IBusSimplePlugin_iBusRsp_stages_0_output_m2sPipe_valid;
        CData/*0:0*/ __PVT___zz_IBusSimplePlugin_iBusRsp_stages_1_output_m2sPipe_valid;
        CData/*0:0*/ __PVT__IBusSimplePlugin_iBusRsp_readyForError;
        CData/*0:0*/ __PVT__IBusSimplePlugin_iBusRsp_output_valid;
        CData/*0:0*/ __PVT___zz_IBusSimplePlugin_injector_decodeInput_valid;
        CData/*0:0*/ __PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_error;
        CData/*0:0*/ __PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_isRvc;
        CData/*0:0*/ __PVT__IBusSimplePlugin_injector_nextPcCalc_valids_0;
        CData/*0:0*/ __PVT__IBusSimplePlugin_injector_nextPcCalc_valids_1;
    };
    struct {
        CData/*0:0*/ __PVT__IBusSimplePlugin_injector_nextPcCalc_valids_2;
        CData/*0:0*/ __PVT__IBusSimplePlugin_injector_nextPcCalc_valids_3;
        CData/*0:0*/ __PVT__IBusSimplePlugin_injector_nextPcCalc_valids_4;
        CData/*0:0*/ __PVT__IBusSimplePlugin_injector_nextPcCalc_valids_5;
        CData/*0:0*/ __PVT__IBusSimplePlugin_predictor_historyWrite_valid;
        CData/*1:0*/ __PVT__IBusSimplePlugin_predictor_historyWrite_payload_data_branchWish;
        CData/*0:0*/ __PVT__IBusSimplePlugin_predictor_writeLast_valid;
        CData/*7:0*/ __PVT__IBusSimplePlugin_predictor_writeLast_payload_address;
        CData/*1:0*/ __PVT__IBusSimplePlugin_predictor_writeLast_payload_data_branchWish;
        CData/*0:0*/ __PVT__IBusSimplePlugin_predictor_buffer_pcCorrected;
        CData/*1:0*/ __PVT__IBusSimplePlugin_predictor_line_branchWish;
        CData/*0:0*/ __PVT__IBusSimplePlugin_predictor_buffer_hazard_regNextWhen;
        CData/*0:0*/ __PVT__IBusSimplePlugin_predictor_fetchContext_hazard;
        CData/*0:0*/ __PVT__IBusSimplePlugin_predictor_fetchContext_hit;
        CData/*0:0*/ __PVT__IBusSimplePlugin_predictor_iBusRspContext_hazard;
        CData/*0:0*/ __PVT__IBusSimplePlugin_predictor_iBusRspContext_hit;
        CData/*1:0*/ __PVT__IBusSimplePlugin_predictor_iBusRspContext_line_branchWish;
        CData/*0:0*/ __PVT__IBusSimplePlugin_predictor_iBusRspContextOutput_delay_1_hazard;
        CData/*0:0*/ __PVT__IBusSimplePlugin_predictor_iBusRspContextOutput_delay_1_hit;
        CData/*1:0*/ __PVT__IBusSimplePlugin_predictor_iBusRspContextOutput_delay_1_line_branchWish;
        CData/*2:0*/ __PVT__IBusSimplePlugin_pending_value;
        CData/*2:0*/ __PVT__IBusSimplePlugin_pending_next;
        CData/*0:0*/ __PVT__IBusSimplePlugin_cmdFork_enterTheMarket;
        CData/*0:0*/ __PVT__IBusSimplePlugin_cmdFork_cmdKeep;
        CData/*0:0*/ __PVT__IBusSimplePlugin_cmdFork_cmdFired;
        CData/*0:0*/ __PVT__IBusSimplePlugin_rspJoin_rspBuffer_output_valid;
        CData/*0:0*/ __PVT__IBusSimplePlugin_rspJoin_rspBuffer_output_ready;
        CData/*2:0*/ __PVT__IBusSimplePlugin_rspJoin_rspBuffer_discardCounter;
        CData/*0:0*/ __PVT__IBusSimplePlugin_rspJoin_fetchRsp_rsp_error;
        CData/*0:0*/ lastStageRegFileWrite_valid;
        CData/*4:0*/ lastStageRegFileWrite_payload_address;
        CData/*0:0*/ __PVT___zz_8;
        CData/*0:0*/ __PVT__HazardSimplePlugin_src0Hazard;
        CData/*0:0*/ __PVT__HazardSimplePlugin_src1Hazard;
        CData/*0:0*/ __PVT__HazardSimplePlugin_writeBackWrites_valid;
        CData/*0:0*/ __PVT__HazardSimplePlugin_writeBackBuffer_valid;
        CData/*4:0*/ __PVT__HazardSimplePlugin_writeBackBuffer_payload_address;
        CData/*0:0*/ __PVT__when_HazardSimplePlugin_l48_1;
        CData/*0:0*/ __PVT__when_HazardSimplePlugin_l51_1;
        CData/*0:0*/ __PVT__when_HazardSimplePlugin_l45_1;
        CData/*0:0*/ __PVT__when_HazardSimplePlugin_l48_2;
        CData/*0:0*/ __PVT__when_HazardSimplePlugin_l51_2;
        CData/*0:0*/ __PVT__when_HazardSimplePlugin_l45_2;
        CData/*0:0*/ __PVT__execute_BranchPlugin_eq;
        CData/*0:0*/ __PVT___zz_execute_BRANCH_DO;
        CData/*0:0*/ __PVT__memory_BranchPlugin_predictionMissmatch;
        CData/*0:0*/ __PVT__decode_to_execute_PREDICTION_CONTEXT_hazard;
        CData/*0:0*/ __PVT__decode_to_execute_PREDICTION_CONTEXT_hit;
        CData/*1:0*/ __PVT__decode_to_execute_PREDICTION_CONTEXT_line_branchWish;
        CData/*0:0*/ __PVT__execute_to_memory_PREDICTION_CONTEXT_hazard;
        CData/*0:0*/ __PVT__execute_to_memory_PREDICTION_CONTEXT_hit;
        CData/*1:0*/ __PVT__execute_to_memory_PREDICTION_CONTEXT_line_branchWish;
        CData/*0:0*/ __PVT__decode_to_execute_IS_SIMD_ADD;
        CData/*0:0*/ __PVT__decode_to_execute_REGFILE_WRITE_VALID;
        CData/*0:0*/ __PVT__execute_to_memory_REGFILE_WRITE_VALID;
        CData/*0:0*/ __PVT__memory_to_writeBack_REGFILE_WRITE_VALID;
        CData/*0:0*/ __PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE;
        CData/*0:0*/ __PVT__decode_to_execute_BYPASSABLE_MEMORY_STAGE;
        CData/*0:0*/ __PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE;
        CData/*0:0*/ __PVT__decode_to_execute_IS_SPHERE_VOLUME;
        CData/*0:0*/ __PVT__execute_to_memory_IS_SPHERE_VOLUME;
        CData/*0:0*/ __PVT__decode_to_execute_SRC_USE_SUB_LESS;
        CData/*0:0*/ __PVT__decode_to_execute_MEMORY_ENABLE;
        CData/*0:0*/ __PVT__execute_to_memory_MEMORY_ENABLE;
    };
    struct {
        CData/*0:0*/ __PVT__memory_to_writeBack_MEMORY_ENABLE;
        CData/*0:0*/ __PVT__decode_to_execute_MEMORY_STORE;
        CData/*0:0*/ __PVT__execute_to_memory_MEMORY_STORE;
        CData/*1:0*/ __PVT__decode_to_execute_ALU_CTRL;
        CData/*0:0*/ __PVT__decode_to_execute_SRC_LESS_UNSIGNED;
        CData/*1:0*/ __PVT__decode_to_execute_ALU_BITWISE_CTRL;
        CData/*1:0*/ __PVT__decode_to_execute_SHIFT_CTRL;
        CData/*1:0*/ __PVT__execute_to_memory_SHIFT_CTRL;
        CData/*1:0*/ __PVT__decode_to_execute_BRANCH_CTRL;
        CData/*0:0*/ __PVT__decode_to_execute_SRC2_FORCE_ZERO;
        CData/*1:0*/ __PVT__execute_to_memory_MEMORY_ADDRESS_LOW;
        CData/*1:0*/ __PVT__memory_to_writeBack_MEMORY_ADDRESS_LOW;
        CData/*0:0*/ __PVT__execute_to_memory_BRANCH_DO;
        CData/*0:0*/ __PVT__execute_to_memory_TARGET_MISSMATCH1;
        CData/*0:0*/ __VdfgRegularize_h16d7421c_0_14;
        CData/*0:0*/ __VdfgRegularize_h16d7421c_0_15;
        CData/*0:0*/ __PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_valid;
        CData/*0:0*/ __PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_error;
        CData/*0:0*/ __PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT___zz_1;
        CData/*0:0*/ __PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ptr_doPush;
        CData/*0:0*/ __PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ptr_doPop;
        CData/*0:0*/ __PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ptr_empty;
        CData/*1:0*/ __PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ptr_push;
        CData/*1:0*/ __PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ptr_pop;
        CData/*0:0*/ __PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ptr_wentUp;
        CData/*0:0*/ __PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__io_push_fire;
        VL_OUT(iBus_cmd_payload_pc,31,0);
        VL_IN(iBus_rsp_payload_inst,31,0);
        VL_OUT(dBus_cmd_payload_address,31,0);
        VL_OUT(dBus_cmd_payload_data,31,0);
        VL_IN(dBus_rsp_data,31,0);
        IData/*31:0*/ __PVT__RegFilePlugin_regFile_spinal_port0;
        IData/*31:0*/ __PVT__RegFilePlugin_regFile_spinal_port1;
        IData/*31:0*/ __PVT__decode_RS2;
        IData/*31:0*/ __PVT__decode_RS1;
        IData/*31:0*/ __PVT__decode_INSTRUCTION_ANTICIPATED;
        IData/*31:0*/ __PVT___zz_decode_RS2;
        IData/*31:0*/ __PVT___zz_decode_RS2_1;
        IData/*31:0*/ __PVT___zz_decode_RS2_2;
        IData/*31:0*/ lastStageInstruction;
        IData/*31:0*/ lastStagePc;
        IData/*31:0*/ __PVT__execute_SimdAddPlugin_rd;
        IData/*31:0*/ IBusSimplePlugin_fetchPc_pcReg;
        IData/*31:0*/ __PVT__IBusSimplePlugin_fetchPc_pc;
        IData/*31:0*/ __PVT___zz_IBusSimplePlugin_iBusRsp_stages_0_output_m2sPipe_payload;
        IData/*31:0*/ __PVT___zz_IBusSimplePlugin_iBusRsp_stages_1_output_m2sPipe_payload;
        IData/*31:0*/ __PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_pc;
        IData/*31:0*/ __PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst;
        IData/*31:0*/ __PVT__IBusSimplePlugin_injector_formal_rawInDecode;
        IData/*21:0*/ __PVT__IBusSimplePlugin_predictor_writeLast_payload_data_source;
        IData/*31:0*/ __PVT__IBusSimplePlugin_predictor_writeLast_payload_data_target;
        IData/*21:0*/ __PVT__IBusSimplePlugin_predictor_line_source;
        IData/*31:0*/ __PVT__IBusSimplePlugin_predictor_line_target;
        IData/*21:0*/ __PVT__IBusSimplePlugin_predictor_iBusRspContext_line_source;
        IData/*31:0*/ __PVT__IBusSimplePlugin_predictor_iBusRspContext_line_target;
        IData/*21:0*/ __PVT__IBusSimplePlugin_predictor_iBusRspContextOutput_delay_1_line_source;
        IData/*31:0*/ __PVT__IBusSimplePlugin_predictor_iBusRspContextOutput_delay_1_line_target;
        IData/*31:0*/ __PVT__writeBack_DBusSimplePlugin_rspShifted;
        IData/*31:0*/ lastStageRegFileWrite_payload_data;
        IData/*31:0*/ __PVT__execute_SrcPlugin_addSub;
        IData/*31:0*/ __PVT___zz_execute_FullBarrelShifterPlugin_reversed;
        IData/*31:0*/ __PVT__execute_FullBarrelShifterPlugin_reversed;
        IData/*31:0*/ __PVT___zz_decode_RS2_3;
        IData/*31:0*/ __PVT__HazardSimplePlugin_writeBackBuffer_payload_data;
    };
    struct {
        IData/*31:0*/ __PVT__execute_BranchPlugin_branchAdder;
        IData/*31:0*/ __PVT__decode_to_execute_PC;
        IData/*31:0*/ __PVT__execute_to_memory_PC;
        IData/*31:0*/ __PVT__memory_to_writeBack_PC;
        IData/*31:0*/ __PVT__decode_to_execute_INSTRUCTION;
        IData/*31:0*/ __PVT__execute_to_memory_INSTRUCTION;
        IData/*31:0*/ __PVT__memory_to_writeBack_INSTRUCTION;
        IData/*31:0*/ __PVT__decode_to_execute_FORMAL_PC_NEXT;
        IData/*31:0*/ __PVT__execute_to_memory_FORMAL_PC_NEXT;
        IData/*21:0*/ __PVT__decode_to_execute_PREDICTION_CONTEXT_line_source;
        IData/*31:0*/ __PVT__decode_to_execute_PREDICTION_CONTEXT_line_target;
        IData/*21:0*/ __PVT__execute_to_memory_PREDICTION_CONTEXT_line_source;
        IData/*31:0*/ __PVT__execute_to_memory_PREDICTION_CONTEXT_line_target;
        IData/*31:0*/ __PVT__decode_to_execute_RS1;
        IData/*31:0*/ __PVT__decode_to_execute_RS2;
        IData/*31:0*/ __PVT__decode_to_execute_SRC1;
        IData/*31:0*/ __PVT__decode_to_execute_SRC2;
        IData/*31:0*/ __PVT__execute_to_memory_SPHERE_VOLUME;
        IData/*31:0*/ __PVT__execute_to_memory_REGFILE_WRITE_DATA;
        IData/*31:0*/ __PVT__memory_to_writeBack_REGFILE_WRITE_DATA;
        IData/*31:0*/ __PVT__execute_to_memory_SHIFT_RIGHT;
        IData/*31:0*/ __PVT__execute_to_memory_BRANCH_CALC;
        IData/*31:0*/ __PVT__execute_to_memory_NEXT_PC1;
        IData/*31:0*/ __PVT__memory_to_writeBack_MEMORY_READ_DATA;
        IData/*31:0*/ __PVT__decode_BRANCH_CTRL_string;
        VlWide<3>/*71:0*/ __PVT__decode_SHIFT_CTRL_string;
        IData/*31:0*/ __PVT__execute_BRANCH_CTRL_string;
        VlWide<3>/*71:0*/ __PVT__memory_SHIFT_CTRL_string;
        VlWide<3>/*71:0*/ __PVT__execute_SHIFT_CTRL_string;
        IData/*23:0*/ __PVT__decode_SRC2_CTRL_string;
        VlWide<3>/*95:0*/ __PVT__decode_SRC1_CTRL_string;
        VlWide<3>/*71:0*/ __PVT__decode_to_execute_SHIFT_CTRL_string;
        VlWide<3>/*71:0*/ __PVT__execute_to_memory_SHIFT_CTRL_string;
        IData/*31:0*/ __PVT__decode_to_execute_BRANCH_CTRL_string;
        IData/*31:0*/ __PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst;
        QData/*55:0*/ __PVT__IBusSimplePlugin_predictor_history_spinal_port1;
        VlUnpacked<QData/*55:0*/, 256> __PVT__IBusSimplePlugin_predictor_history;
        VlUnpacked<IData/*31:0*/, 32> RegFilePlugin_regFile;
        VlUnpacked<QData/*32:0*/, 2> __PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ram;
    };

    // INTERNAL VARIABLES
    VVexRiscv__Syms* const vlSymsp;

    // CONSTRUCTORS
    VVexRiscv_VexRiscv(VVexRiscv__Syms* symsp, const char* v__name);
    ~VVexRiscv_VexRiscv();
    VL_UNCOPYABLE(VVexRiscv_VexRiscv);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
