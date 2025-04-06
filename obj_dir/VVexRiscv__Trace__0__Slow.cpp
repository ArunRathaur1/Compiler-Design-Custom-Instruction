// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VVexRiscv__Syms.h"


VL_ATTR_COLD void VVexRiscv___024root__trace_init_sub__TOP__VexRiscv__0(VVexRiscv___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VVexRiscv___024root__trace_init_sub__TOP__0(VVexRiscv___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root__trace_init_sub__TOP__0\n"); );
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("VexRiscv", VerilatedTracePrefixType::SCOPE_MODULE);
    VVexRiscv___024root__trace_init_sub__TOP__VexRiscv__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+305,0,"iBus_cmd_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+306,0,"iBus_cmd_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+307,0,"iBus_cmd_payload_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+308,0,"iBus_rsp_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+309,0,"iBus_rsp_payload_error",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+310,0,"iBus_rsp_payload_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+311,0,"dBus_cmd_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+312,0,"dBus_cmd_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+313,0,"dBus_cmd_payload_wr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+314,0,"dBus_cmd_payload_mask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+315,0,"dBus_cmd_payload_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+316,0,"dBus_cmd_payload_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+317,0,"dBus_cmd_payload_size",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+318,0,"dBus_rsp_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+319,0,"dBus_rsp_error",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+320,0,"dBus_rsp_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+321,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+322,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void VVexRiscv___024root__trace_init_sub__TOP__VexRiscv__0(VVexRiscv___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root__trace_init_sub__TOP__VexRiscv__0\n"); );
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+247,0,"iBus_cmd_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+306,0,"iBus_cmd_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+42,0,"iBus_cmd_payload_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+308,0,"iBus_rsp_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+309,0,"iBus_rsp_payload_error",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+310,0,"iBus_rsp_payload_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"dBus_cmd_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+312,0,"dBus_cmd_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"dBus_cmd_payload_wr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"dBus_cmd_payload_mask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+45,0,"dBus_cmd_payload_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"dBus_cmd_payload_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"dBus_cmd_payload_size",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+318,0,"dBus_rsp_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+319,0,"dBus_rsp_error",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+320,0,"dBus_rsp_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+321,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+322,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+368,0,"ShiftCtrlEnum_DISABLE_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+369,0,"ShiftCtrlEnum_SLL_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+370,0,"ShiftCtrlEnum_SRL_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+371,0,"ShiftCtrlEnum_SRA_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+368,0,"BranchCtrlEnum_INC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+369,0,"BranchCtrlEnum_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+370,0,"BranchCtrlEnum_JAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+371,0,"BranchCtrlEnum_JALR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+368,0,"AluBitwiseCtrlEnum_XOR_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+369,0,"AluBitwiseCtrlEnum_OR_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+370,0,"AluBitwiseCtrlEnum_AND_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+368,0,"AluCtrlEnum_ADD_SUB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+369,0,"AluCtrlEnum_SLT_SLTU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+370,0,"AluCtrlEnum_BITWISE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+368,0,"Src2CtrlEnum_RS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+369,0,"Src2CtrlEnum_IMI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+370,0,"Src2CtrlEnum_IMS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+371,0,"Src2CtrlEnum_PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+368,0,"Src1CtrlEnum_RS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+369,0,"Src1CtrlEnum_IMU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+370,0,"Src1CtrlEnum_PC_INCREMENT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+371,0,"Src1CtrlEnum_URS1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+2,0,"IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+48,0,"IBusSimplePlugin_predictor_history_spinal_port1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 55,0);
    tracep->declBus(c+50,0,"RegFilePlugin_regFile_spinal_port0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"RegFilePlugin_regFile_spinal_port1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+248,0,"IBusSimplePlugin_rspJoin_rspBuffer_c_io_push_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_payload_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_payload_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+249,0,"IBusSimplePlugin_rspJoin_rspBuffer_c_io_occupancy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+250,0,"IBusSimplePlugin_rspJoin_rspBuffer_c_io_availability",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+320,0,"memory_MEMORY_READ_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+52,0,"execute_TARGET_MISSMATCH1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+53,0,"execute_NEXT_PC1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+54,0,"execute_BRANCH_DO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+55,0,"execute_SHIFT_RIGHT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"writeBack_REGFILE_WRITE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"memory_REGFILE_WRITE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"execute_REGFILE_WRITE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"memory_MEMORY_ADDRESS_LOW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+60,0,"execute_MEMORY_ADDRESS_LOW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+61,0,"execute_SPHERE_VOLUME",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+239,0,"decode_SRC2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+240,0,"decode_SRC1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+62,0,"decode_SRC2_FORCE_ZERO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"decode_BRANCH_CTRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+64,0,"decode_SHIFT_CTRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+65,0,"decode_ALU_BITWISE_CTRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+66,0,"decode_SRC_LESS_UNSIGNED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+67,0,"decode_ALU_CTRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+68,0,"decode_MEMORY_STORE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"decode_MEMORY_ENABLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"execute_IS_SPHERE_VOLUME",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+372,0,"decode_IS_SPHERE_VOLUME",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"execute_BYPASSABLE_MEMORY_STAGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"decode_BYPASSABLE_MEMORY_STAGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"decode_BYPASSABLE_EXECUTE_STAGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"decode_IS_SIMD_ADD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"execute_PREDICTION_CONTEXT_hazard",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"execute_PREDICTION_CONTEXT_hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+77,0,"execute_PREDICTION_CONTEXT_line_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+78,0,"execute_PREDICTION_CONTEXT_line_branchWish",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+79,0,"execute_PREDICTION_CONTEXT_line_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+80,0,"decode_PREDICTION_CONTEXT_hazard",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"decode_PREDICTION_CONTEXT_hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+82,0,"decode_PREDICTION_CONTEXT_line_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+83,0,"decode_PREDICTION_CONTEXT_line_branchWish",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+84,0,"decode_PREDICTION_CONTEXT_line_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"memory_FORMAL_PC_NEXT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,0,"execute_FORMAL_PC_NEXT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+87,0,"decode_FORMAL_PC_NEXT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+88,0,"memory_NEXT_PC1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+89,0,"memory_PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"memory_BRANCH_CALC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+91,0,"memory_TARGET_MISSMATCH1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"memory_BRANCH_DO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+93,0,"execute_BRANCH_CALC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+94,0,"execute_BRANCH_SRC21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+95,0,"execute_PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+96,0,"execute_BRANCH_CTRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+97,0,"decode_RS2_USE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"decode_RS1_USE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"execute_REGFILE_WRITE_VALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"execute_BYPASSABLE_EXECUTE_STAGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"memory_REGFILE_WRITE_VALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+102,0,"memory_INSTRUCTION",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+103,0,"memory_BYPASSABLE_MEMORY_STAGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"writeBack_REGFILE_WRITE_VALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+251,0,"decode_RS2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+252,0,"decode_RS1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"memory_SHIFT_RIGHT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+106,0,"memory_SHIFT_CTRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+107,0,"execute_SHIFT_CTRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+108,0,"execute_SRC_LESS_UNSIGNED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"execute_SRC2_FORCE_ZERO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"execute_SRC_USE_SUB_LESS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+111,0,"decode_SRC2_CTRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+112,0,"decode_SRC1_CTRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+113,0,"decode_SRC_USE_SUB_LESS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"decode_SRC_ADD_ZERO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+45,0,"execute_SRC_ADD_SUB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+115,0,"execute_SRC_LESS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+116,0,"execute_ALU_CTRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+117,0,"execute_ALU_BITWISE_CTRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+6,0,"decode_INSTRUCTION_ANTICIPATED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+118,0,"decode_REGFILE_WRITE_VALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"writeBack_MEMORY_ENABLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+120,0,"writeBack_MEMORY_ADDRESS_LOW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+121,0,"writeBack_MEMORY_READ_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+122,0,"memory_MEMORY_STORE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"memory_MEMORY_ENABLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+45,0,"execute_SRC_ADD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"execute_INSTRUCTION",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+43,0,"execute_MEMORY_STORE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"execute_MEMORY_ENABLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+373,0,"execute_ALIGNEMENT_FAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"memory_PREDICTION_CONTEXT_hazard",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"memory_PREDICTION_CONTEXT_hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+128,0,"memory_PREDICTION_CONTEXT_line_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+129,0,"memory_PREDICTION_CONTEXT_line_branchWish",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+130,0,"memory_PREDICTION_CONTEXT_line_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"decode_PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+132,0,"decode_INSTRUCTION",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+133,0,"memory_SPHERE_VOLUME",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+134,0,"memory_IS_SPHERE_VOLUME",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+135,0,"execute_SRC2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+136,0,"execute_SRC1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+137,0,"execute_IS_SIMD_ADD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+138,0,"execute_RS2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+139,0,"execute_RS1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+140,0,"writeBack_PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+141,0,"writeBack_INSTRUCTION",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+373,0,"decode_arbitration_haltItself",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+253,0,"decode_arbitration_haltByOther",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+254,0,"decode_arbitration_removeIt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+373,0,"decode_arbitration_flushIt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+373,0,"decode_arbitration_flushNext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"decode_arbitration_isValid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"decode_arbitration_isStuck",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"decode_arbitration_isStuckByOthers",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+256,0,"decode_arbitration_isFlushed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"decode_arbitration_isMoving",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"decode_arbitration_isFiring",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"execute_arbitration_haltItself",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+373,0,"execute_arbitration_haltByOther",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"execute_arbitration_removeIt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+373,0,"execute_arbitration_flushIt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+373,0,"execute_arbitration_flushNext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"execute_arbitration_isValid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"execute_arbitration_isStuck",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"execute_arbitration_isStuckByOthers",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+256,0,"execute_arbitration_isFlushed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"execute_arbitration_isMoving",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"execute_arbitration_isFiring",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"memory_arbitration_haltItself",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+373,0,"memory_arbitration_haltByOther",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+373,0,"memory_arbitration_removeIt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+373,0,"memory_arbitration_flushIt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+256,0,"memory_arbitration_flushNext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+259,0,"memory_arbitration_isValid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"memory_arbitration_isStuck",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+373,0,"memory_arbitration_isStuckByOthers",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+373,0,"memory_arbitration_isFlushed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"memory_arbitration_isMoving",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"memory_arbitration_isFiring",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+373,0,"writeBack_arbitration_haltItself",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+373,0,"writeBack_arbitration_haltByOther",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+373,0,"writeBack_arbitration_removeIt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+373,0,"writeBack_arbitration_flushIt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+373,0,"writeBack_arbitration_flushNext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+260,0,"writeBack_arbitration_isValid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+373,0,"writeBack_arbitration_isStuck",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+373,0,"writeBack_arbitration_isStuckByOthers",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+373,0,"writeBack_arbitration_isFlushed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+372,0,"writeBack_arbitration_isMoving",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+260,0,"writeBack_arbitration_isFiring",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+323,0,"lastStageInstruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+324,0,"lastStagePc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+325,0,"lastStageIsValid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+326,0,"lastStageIsFiring",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+373,0,"IBusSimplePlugin_fetcherHalt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+373,0,"IBusSimplePlugin_forceNoDecodeCond",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+261,0,"IBusSimplePlugin_incomingInstruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"IBusSimplePlugin_fetchPrediction_cmd_hadBranch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+130,0,"IBusSimplePlugin_fetchPrediction_cmd_targetPc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+143,0,"IBusSimplePlugin_fetchPrediction_rsp_wasRight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+90,0,"IBusSimplePlugin_fetchPrediction_rsp_finalPc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+89,0,"IBusSimplePlugin_fetchPrediction_rsp_sourceLastWord",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+262,0,"IBusSimplePlugin_pcValids_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+263,0,"IBusSimplePlugin_pcValids_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+264,0,"IBusSimplePlugin_pcValids_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+265,0,"IBusSimplePlugin_pcValids_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+266,0,"BranchPlugin_jumpInterface_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+144,0,"BranchPlugin_jumpInterface_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+373,0,"BranchPlugin_inDebugNoFetchFlag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+139,0,"execute_SimdAddPlugin_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+138,0,"execute_SimdAddPlugin_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+145,0,"execute_SimdAddPlugin_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+136,0,"execute_SphereVolumePlugin_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+135,0,"execute_SphereVolumePlugin_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+374,0,"execute_SphereVolumePlugin_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+375,0,"execute_SphereVolumePlugin_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+376,0,"execute_SphereVolumePlugin_e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+146,0,"execute_SphereVolumePlugin_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+241,0,"when_SphereVolumePlugin_l46",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+256,0,"IBusSimplePlugin_externalFlush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+266,0,"IBusSimplePlugin_jump_pcLoad_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+144,0,"IBusSimplePlugin_jump_pcLoad_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+267,0,"IBusSimplePlugin_fetchPc_output_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"IBusSimplePlugin_fetchPc_output_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"IBusSimplePlugin_fetchPc_output_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+327,0,"IBusSimplePlugin_fetchPc_pcReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+268,0,"IBusSimplePlugin_fetchPc_correction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+269,0,"IBusSimplePlugin_fetchPc_correctionReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"IBusSimplePlugin_fetchPc_output_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+270,0,"IBusSimplePlugin_fetchPc_corrected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+373,0,"IBusSimplePlugin_fetchPc_pcRegPropagate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"IBusSimplePlugin_fetchPc_booted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+271,0,"IBusSimplePlugin_fetchPc_inc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+268,0,"when_Fetcher_l133",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"when_Fetcher_l133_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"IBusSimplePlugin_fetchPc_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+272,0,"IBusSimplePlugin_fetchPc_predictionPcLoad_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+148,0,"IBusSimplePlugin_fetchPc_predictionPcLoad_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+373,0,"IBusSimplePlugin_fetchPc_redo_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+149,0,"IBusSimplePlugin_fetchPc_redo_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+273,0,"IBusSimplePlugin_fetchPc_flushed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"when_Fetcher_l160",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+373,0,"IBusSimplePlugin_iBusRsp_redoFetch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"IBusSimplePlugin_iBusRsp_stages_0_input_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"IBusSimplePlugin_iBusRsp_stages_0_input_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"IBusSimplePlugin_iBusRsp_stages_0_input_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+267,0,"IBusSimplePlugin_iBusRsp_stages_0_output_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"IBusSimplePlugin_iBusRsp_stages_0_output_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"IBusSimplePlugin_iBusRsp_stages_0_output_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+373,0,"IBusSimplePlugin_iBusRsp_stages_0_halt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+274,0,"IBusSimplePlugin_iBusRsp_stages_1_input_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"IBusSimplePlugin_iBusRsp_stages_1_input_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+150,0,"IBusSimplePlugin_iBusRsp_stages_1_input_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+22,0,"IBusSimplePlugin_iBusRsp_stages_1_output_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"IBusSimplePlugin_iBusRsp_stages_1_output_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+150,0,"IBusSimplePlugin_iBusRsp_stages_1_output_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+24,0,"IBusSimplePlugin_iBusRsp_stages_1_halt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+275,0,"IBusSimplePlugin_iBusRsp_stages_2_input_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"IBusSimplePlugin_iBusRsp_stages_2_input_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+149,0,"IBusSimplePlugin_iBusRsp_stages_2_input_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+275,0,"IBusSimplePlugin_iBusRsp_stages_2_output_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"IBusSimplePlugin_iBusRsp_stages_2_output_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+149,0,"IBusSimplePlugin_iBusRsp_stages_2_output_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+373,0,"IBusSimplePlugin_iBusRsp_stages_2_halt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+256,0,"IBusSimplePlugin_iBusRsp_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+274,0,"IBusSimplePlugin_iBusRsp_stages_0_output_m2sPipe_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"IBusSimplePlugin_iBusRsp_stages_0_output_m2sPipe_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+150,0,"IBusSimplePlugin_iBusRsp_stages_0_output_m2sPipe_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+275,0,"IBusSimplePlugin_iBusRsp_stages_1_output_m2sPipe_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"IBusSimplePlugin_iBusRsp_stages_1_output_m2sPipe_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+149,0,"IBusSimplePlugin_iBusRsp_stages_1_output_m2sPipe_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+276,0,"IBusSimplePlugin_iBusRsp_readyForError",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"IBusSimplePlugin_iBusRsp_output_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"IBusSimplePlugin_iBusRsp_output_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+149,0,"IBusSimplePlugin_iBusRsp_output_payload_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+27,0,"IBusSimplePlugin_iBusRsp_output_payload_rsp_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"IBusSimplePlugin_iBusRsp_output_payload_rsp_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+373,0,"IBusSimplePlugin_iBusRsp_output_payload_isRvc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"when_Fetcher_l242",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"IBusSimplePlugin_injector_decodeInput_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"IBusSimplePlugin_injector_decodeInput_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+131,0,"IBusSimplePlugin_injector_decodeInput_payload_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+151,0,"IBusSimplePlugin_injector_decodeInput_payload_rsp_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+132,0,"IBusSimplePlugin_injector_decodeInput_payload_rsp_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+152,0,"IBusSimplePlugin_injector_decodeInput_payload_isRvc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+278,0,"when_Fetcher_l322",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+279,0,"IBusSimplePlugin_injector_nextPcCalc_valids_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"when_Fetcher_l331",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+280,0,"IBusSimplePlugin_injector_nextPcCalc_valids_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"when_Fetcher_l331_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+262,0,"IBusSimplePlugin_injector_nextPcCalc_valids_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"when_Fetcher_l331_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+263,0,"IBusSimplePlugin_injector_nextPcCalc_valids_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"when_Fetcher_l331_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+264,0,"IBusSimplePlugin_injector_nextPcCalc_valids_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"when_Fetcher_l331_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+265,0,"IBusSimplePlugin_injector_nextPcCalc_valids_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+372,0,"when_Fetcher_l331_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+153,0,"IBusSimplePlugin_injector_formal_rawInDecode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+29,0,"IBusSimplePlugin_predictor_historyWriteDelayPatched_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+154,0,"IBusSimplePlugin_predictor_historyWriteDelayPatched_payload_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+155,0,"IBusSimplePlugin_predictor_historyWriteDelayPatched_payload_data_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+156,0,"IBusSimplePlugin_predictor_historyWriteDelayPatched_payload_data_branchWish",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+90,0,"IBusSimplePlugin_predictor_historyWriteDelayPatched_payload_data_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+29,0,"IBusSimplePlugin_predictor_historyWrite_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+157,0,"IBusSimplePlugin_predictor_historyWrite_payload_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+155,0,"IBusSimplePlugin_predictor_historyWrite_payload_data_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+156,0,"IBusSimplePlugin_predictor_historyWrite_payload_data_branchWish",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+90,0,"IBusSimplePlugin_predictor_historyWrite_payload_data_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+158,0,"IBusSimplePlugin_predictor_writeLast_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+159,0,"IBusSimplePlugin_predictor_writeLast_payload_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+160,0,"IBusSimplePlugin_predictor_writeLast_payload_data_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+161,0,"IBusSimplePlugin_predictor_writeLast_payload_data_branchWish",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+162,0,"IBusSimplePlugin_predictor_writeLast_payload_data_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,0,"IBusSimplePlugin_predictor_buffer_line_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+164,0,"IBusSimplePlugin_predictor_buffer_line_branchWish",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+165,0,"IBusSimplePlugin_predictor_buffer_line_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+166,0,"IBusSimplePlugin_predictor_buffer_pcCorrected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"IBusSimplePlugin_predictor_buffer_hazard",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+168,0,"IBusSimplePlugin_predictor_line_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+169,0,"IBusSimplePlugin_predictor_line_branchWish",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+148,0,"IBusSimplePlugin_predictor_line_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+170,0,"IBusSimplePlugin_predictor_buffer_hazard_regNextWhen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"IBusSimplePlugin_predictor_hazard",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"IBusSimplePlugin_predictor_hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"IBusSimplePlugin_predictor_fetchContext_hazard",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"IBusSimplePlugin_predictor_fetchContext_hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+168,0,"IBusSimplePlugin_predictor_fetchContext_line_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+169,0,"IBusSimplePlugin_predictor_fetchContext_line_branchWish",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+148,0,"IBusSimplePlugin_predictor_fetchContext_line_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+173,0,"IBusSimplePlugin_predictor_iBusRspContext_hazard",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"IBusSimplePlugin_predictor_iBusRspContext_hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+175,0,"IBusSimplePlugin_predictor_iBusRspContext_line_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+176,0,"IBusSimplePlugin_predictor_iBusRspContext_line_branchWish",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+177,0,"IBusSimplePlugin_predictor_iBusRspContext_line_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+173,0,"IBusSimplePlugin_predictor_iBusRspContextOutput_hazard",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"IBusSimplePlugin_predictor_iBusRspContextOutput_hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+175,0,"IBusSimplePlugin_predictor_iBusRspContextOutput_line_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+176,0,"IBusSimplePlugin_predictor_iBusRspContextOutput_line_branchWish",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+177,0,"IBusSimplePlugin_predictor_iBusRspContextOutput_line_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+80,0,"IBusSimplePlugin_predictor_iBusRspContextOutput_delay_1_hazard",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"IBusSimplePlugin_predictor_iBusRspContextOutput_delay_1_hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+82,0,"IBusSimplePlugin_predictor_iBusRspContextOutput_delay_1_line_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+83,0,"IBusSimplePlugin_predictor_iBusRspContextOutput_delay_1_line_branchWish",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+84,0,"IBusSimplePlugin_predictor_iBusRspContextOutput_delay_1_line_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+80,0,"IBusSimplePlugin_predictor_injectorContext_hazard",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"IBusSimplePlugin_predictor_injectorContext_hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+82,0,"IBusSimplePlugin_predictor_injectorContext_line_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+83,0,"IBusSimplePlugin_predictor_injectorContext_line_branchWish",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+84,0,"IBusSimplePlugin_predictor_injectorContext_line_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+328,0,"when_Fetcher_l619",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+247,0,"IBusSimplePlugin_cmd_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+306,0,"IBusSimplePlugin_cmd_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+42,0,"IBusSimplePlugin_cmd_payload_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+281,0,"IBusSimplePlugin_pending_inc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"IBusSimplePlugin_pending_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+282,0,"IBusSimplePlugin_pending_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+31,0,"IBusSimplePlugin_pending_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+283,0,"IBusSimplePlugin_cmdFork_pendingFull",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+281,0,"IBusSimplePlugin_cmdFork_enterTheMarket",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+284,0,"IBusSimplePlugin_cmdFork_cmdKeep",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+285,0,"IBusSimplePlugin_cmdFork_cmdFired",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+329,0,"IBusSimplePlugin_cmd_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"when_IBusSimplePlugin_l318",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+330,0,"when_IBusSimplePlugin_l319",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"IBusSimplePlugin_rspJoin_rspBuffer_output_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"IBusSimplePlugin_rspJoin_rspBuffer_output_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"IBusSimplePlugin_rspJoin_rspBuffer_output_payload_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"IBusSimplePlugin_rspJoin_rspBuffer_output_payload_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+287,0,"IBusSimplePlugin_rspJoin_rspBuffer_discardCounter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+308,0,"iBus_rsp_toStream_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+248,0,"iBus_rsp_toStream_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+309,0,"iBus_rsp_toStream_payload_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+310,0,"iBus_rsp_toStream_payload_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+288,0,"IBusSimplePlugin_rspJoin_rspBuffer_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"toplevel_IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+149,0,"IBusSimplePlugin_rspJoin_fetchRsp_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+27,0,"IBusSimplePlugin_rspJoin_fetchRsp_rsp_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"IBusSimplePlugin_rspJoin_fetchRsp_rsp_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+373,0,"IBusSimplePlugin_rspJoin_fetchRsp_isRvc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"when_IBusSimplePlugin_l378",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"IBusSimplePlugin_rspJoin_join_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"IBusSimplePlugin_rspJoin_join_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+149,0,"IBusSimplePlugin_rspJoin_join_payload_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+27,0,"IBusSimplePlugin_rspJoin_join_payload_rsp_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"IBusSimplePlugin_rspJoin_join_payload_rsp_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+373,0,"IBusSimplePlugin_rspJoin_join_payload_isRvc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+373,0,"IBusSimplePlugin_rspJoin_exceptionDetected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"IBusSimplePlugin_rspJoin_join_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+373,0,"execute_DBusSimplePlugin_skipCmd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+331,0,"when_DBusSimplePlugin_l435",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"execute_DBusSimplePlugin_formalMask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+332,0,"when_DBusSimplePlugin_l490",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+178,0,"writeBack_DBusSimplePlugin_rspShifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+179,0,"switch_Misc_l241",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+180,0,"writeBack_DBusSimplePlugin_rspFormated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+242,0,"when_DBusSimplePlugin_l566",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"when_RegFilePlugin_l63",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"decode_RegFilePlugin_regFileReadAddress1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+36,0,"decode_RegFilePlugin_regFileReadAddress2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+50,0,"decode_RegFilePlugin_rs1Data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"decode_RegFilePlugin_rs2Data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+333,0,"lastStageRegFileWrite_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+334,0,"lastStageRegFileWrite_payload_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+335,0,"lastStageRegFileWrite_payload_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+182,0,"execute_IntAluPlugin_bitwise",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"execute_SrcPlugin_addSub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+115,0,"execute_SrcPlugin_less",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+183,0,"execute_FullBarrelShifterPlugin_amplitude",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+184,0,"execute_FullBarrelShifterPlugin_reversed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+289,0,"HazardSimplePlugin_src0Hazard",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+290,0,"HazardSimplePlugin_src1Hazard",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+291,0,"HazardSimplePlugin_writeBackWrites_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+185,0,"HazardSimplePlugin_writeBackWrites_payload_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+292,0,"HazardSimplePlugin_writeBackWrites_payload_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+293,0,"HazardSimplePlugin_writeBackBuffer_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+186,0,"HazardSimplePlugin_writeBackBuffer_payload_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+187,0,"HazardSimplePlugin_writeBackBuffer_payload_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+188,0,"HazardSimplePlugin_addr0Match",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"HazardSimplePlugin_addr1Match",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+372,0,"when_HazardSimplePlugin_l47",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"when_HazardSimplePlugin_l48",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"when_HazardSimplePlugin_l51",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+291,0,"when_HazardSimplePlugin_l45",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+291,0,"when_HazardSimplePlugin_l57",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+373,0,"when_HazardSimplePlugin_l58",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"when_HazardSimplePlugin_l48_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+193,0,"when_HazardSimplePlugin_l51_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+294,0,"when_HazardSimplePlugin_l45_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+294,0,"when_HazardSimplePlugin_l57_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+194,0,"when_HazardSimplePlugin_l58_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+195,0,"when_HazardSimplePlugin_l48_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"when_HazardSimplePlugin_l51_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+295,0,"when_HazardSimplePlugin_l45_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+295,0,"when_HazardSimplePlugin_l57_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"when_HazardSimplePlugin_l58_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"when_HazardSimplePlugin_l105",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+199,0,"when_HazardSimplePlugin_l108",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+296,0,"when_HazardSimplePlugin_l113",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"execute_BranchPlugin_eq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+201,0,"switch_Misc_l241_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+202,0,"execute_BranchPlugin_branch_src1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+203,0,"execute_BranchPlugin_branchAdder",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+204,0,"memory_BranchPlugin_predictionMissmatch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"when_Pipeline_l124",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+95,0,"decode_to_execute_PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+15,0,"when_Pipeline_l124_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+89,0,"execute_to_memory_PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+372,0,"when_Pipeline_l124_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+140,0,"memory_to_writeBack_PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+28,0,"when_Pipeline_l124_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+124,0,"decode_to_execute_INSTRUCTION",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+15,0,"when_Pipeline_l124_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+102,0,"execute_to_memory_INSTRUCTION",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+372,0,"when_Pipeline_l124_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+141,0,"memory_to_writeBack_INSTRUCTION",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+28,0,"when_Pipeline_l124_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+86,0,"decode_to_execute_FORMAL_PC_NEXT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+15,0,"when_Pipeline_l124_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+85,0,"execute_to_memory_FORMAL_PC_NEXT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+28,0,"when_Pipeline_l124_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"decode_to_execute_PREDICTION_CONTEXT_hazard",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"decode_to_execute_PREDICTION_CONTEXT_hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+77,0,"decode_to_execute_PREDICTION_CONTEXT_line_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+78,0,"decode_to_execute_PREDICTION_CONTEXT_line_branchWish",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+79,0,"decode_to_execute_PREDICTION_CONTEXT_line_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+15,0,"when_Pipeline_l124_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"execute_to_memory_PREDICTION_CONTEXT_hazard",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"execute_to_memory_PREDICTION_CONTEXT_hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+128,0,"execute_to_memory_PREDICTION_CONTEXT_line_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+129,0,"execute_to_memory_PREDICTION_CONTEXT_line_branchWish",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+130,0,"execute_to_memory_PREDICTION_CONTEXT_line_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+28,0,"when_Pipeline_l124_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"decode_to_execute_IS_SIMD_ADD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"when_Pipeline_l124_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"decode_to_execute_REGFILE_WRITE_VALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"when_Pipeline_l124_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"execute_to_memory_REGFILE_WRITE_VALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+372,0,"when_Pipeline_l124_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"memory_to_writeBack_REGFILE_WRITE_VALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"when_Pipeline_l124_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"decode_to_execute_BYPASSABLE_EXECUTE_STAGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"when_Pipeline_l124_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"decode_to_execute_BYPASSABLE_MEMORY_STAGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"when_Pipeline_l124_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"execute_to_memory_BYPASSABLE_MEMORY_STAGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"when_Pipeline_l124_17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"decode_to_execute_IS_SPHERE_VOLUME",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"when_Pipeline_l124_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"execute_to_memory_IS_SPHERE_VOLUME",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"when_Pipeline_l124_19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"decode_to_execute_SRC_USE_SUB_LESS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"when_Pipeline_l124_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"decode_to_execute_MEMORY_ENABLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"when_Pipeline_l124_21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"execute_to_memory_MEMORY_ENABLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+372,0,"when_Pipeline_l124_22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"memory_to_writeBack_MEMORY_ENABLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"when_Pipeline_l124_23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"decode_to_execute_MEMORY_STORE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"when_Pipeline_l124_24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"execute_to_memory_MEMORY_STORE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"when_Pipeline_l124_25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+116,0,"decode_to_execute_ALU_CTRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+28,0,"when_Pipeline_l124_26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"decode_to_execute_SRC_LESS_UNSIGNED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"when_Pipeline_l124_27",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+117,0,"decode_to_execute_ALU_BITWISE_CTRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+28,0,"when_Pipeline_l124_28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+107,0,"decode_to_execute_SHIFT_CTRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+15,0,"when_Pipeline_l124_29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+106,0,"execute_to_memory_SHIFT_CTRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+28,0,"when_Pipeline_l124_30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+96,0,"decode_to_execute_BRANCH_CTRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+28,0,"when_Pipeline_l124_31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+139,0,"decode_to_execute_RS1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+28,0,"when_Pipeline_l124_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+138,0,"decode_to_execute_RS2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+28,0,"when_Pipeline_l124_33",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"decode_to_execute_SRC2_FORCE_ZERO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"when_Pipeline_l124_34",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+136,0,"decode_to_execute_SRC1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+28,0,"when_Pipeline_l124_35",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+135,0,"decode_to_execute_SRC2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+15,0,"when_Pipeline_l124_36",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+133,0,"execute_to_memory_SPHERE_VOLUME",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+15,0,"when_Pipeline_l124_37",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+59,0,"execute_to_memory_MEMORY_ADDRESS_LOW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+372,0,"when_Pipeline_l124_38",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+120,0,"memory_to_writeBack_MEMORY_ADDRESS_LOW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+15,0,"when_Pipeline_l124_39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+57,0,"execute_to_memory_REGFILE_WRITE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+372,0,"when_Pipeline_l124_40",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+56,0,"memory_to_writeBack_REGFILE_WRITE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+15,0,"when_Pipeline_l124_41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+105,0,"execute_to_memory_SHIFT_RIGHT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+15,0,"when_Pipeline_l124_42",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"execute_to_memory_BRANCH_DO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"when_Pipeline_l124_43",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+90,0,"execute_to_memory_BRANCH_CALC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+15,0,"when_Pipeline_l124_44",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+88,0,"execute_to_memory_NEXT_PC1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+15,0,"when_Pipeline_l124_45",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"execute_to_memory_TARGET_MISSMATCH1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+372,0,"when_Pipeline_l124_46",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+121,0,"memory_to_writeBack_MEMORY_READ_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+37,0,"when_Pipeline_l151",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"when_Pipeline_l154",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"when_Pipeline_l151_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"when_Pipeline_l154_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+372,0,"when_Pipeline_l151_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"when_Pipeline_l154_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+205,0,"decode_BRANCH_CTRL_string",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+206,0,"decode_SHIFT_CTRL_string",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 71,0);
    tracep->declQuad(c+209,0,"decode_ALU_BITWISE_CTRL_string",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+211,0,"decode_ALU_CTRL_string",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+213,0,"execute_BRANCH_CTRL_string",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+214,0,"memory_SHIFT_CTRL_string",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 71,0);
    tracep->declArray(c+217,0,"execute_SHIFT_CTRL_string",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 71,0);
    tracep->declBus(c+220,0,"decode_SRC2_CTRL_string",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declArray(c+221,0,"decode_SRC1_CTRL_string",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declQuad(c+224,0,"execute_ALU_CTRL_string",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+226,0,"execute_ALU_BITWISE_CTRL_string",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+224,0,"decode_to_execute_ALU_CTRL_string",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+226,0,"decode_to_execute_ALU_BITWISE_CTRL_string",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declArray(c+228,0,"decode_to_execute_SHIFT_CTRL_string",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 71,0);
    tracep->declArray(c+231,0,"execute_to_memory_SHIFT_CTRL_string",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 71,0);
    tracep->declBus(c+234,0,"decode_to_execute_BRANCH_CTRL_string",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("RegFilePlugin_regFile", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+336+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("IBusSimplePlugin_rspJoin_rspBuffer_c", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+308,0,"io_push_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+248,0,"io_push_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+309,0,"io_push_payload_error",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+310,0,"io_push_payload_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+3,0,"io_pop_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"io_pop_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"io_pop_payload_error",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"io_pop_payload_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+373,0,"io_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+249,0,"io_occupancy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+250,0,"io_availability",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+321,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+322,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+248,0,"fifo_io_push_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"fifo_io_pop_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"fifo_io_pop_payload_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"fifo_io_pop_payload_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+249,0,"fifo_io_occupancy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+250,0,"fifo_io_availability",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+308,0,"io_push_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+248,0,"io_push_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+309,0,"io_push_payload_error",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+310,0,"io_push_payload_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+3,0,"io_pop_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"io_pop_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"io_pop_payload_error",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"io_pop_payload_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+373,0,"io_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+249,0,"io_occupancy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+250,0,"io_availability",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+321,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+322,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+243,0,"logic_ram_spinal_port1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+38,0,"logic_ptr_doPush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"logic_ptr_doPop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+297,0,"logic_ptr_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+298,0,"logic_ptr_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+299,0,"logic_ptr_push",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+300,0,"logic_ptr_pop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+249,0,"logic_ptr_occupancy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+300,0,"logic_ptr_popOnIo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+40,0,"when_Stream_l1248",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+301,0,"logic_ptr_wentUp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"io_push_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"logic_push_onRam_write_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+302,0,"logic_push_onRam_write_payload_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+309,0,"logic_push_onRam_write_payload_data_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+310,0,"logic_push_onRam_write_payload_data_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+303,0,"logic_pop_addressGen_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"logic_pop_addressGen_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+304,0,"logic_pop_addressGen_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+39,0,"logic_pop_addressGen_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+245,0,"logic_pop_async_readed_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+246,0,"logic_pop_async_readed_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+303,0,"logic_pop_addressGen_translated_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"logic_pop_addressGen_translated_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+245,0,"logic_pop_addressGen_translated_payload_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+246,0,"logic_pop_addressGen_translated_payload_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("logic_ram", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+235+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 32,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VVexRiscv___024root__trace_init_top(VVexRiscv___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root__trace_init_top\n"); );
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VVexRiscv___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VVexRiscv___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VVexRiscv___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VVexRiscv___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VVexRiscv___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VVexRiscv___024root__trace_register(VVexRiscv___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root__trace_register\n"); );
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VVexRiscv___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VVexRiscv___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VVexRiscv___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VVexRiscv___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VVexRiscv___024root__trace_const_0_sub_0(VVexRiscv___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VVexRiscv___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root__trace_const_0\n"); );
    // Init
    VVexRiscv___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VVexRiscv___024root*>(voidSelf);
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VVexRiscv___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VVexRiscv___024root__trace_const_0_sub_0(VVexRiscv___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root__trace_const_0_sub_0\n"); );
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+368,(0U),2);
    bufp->fullCData(oldp+369,(1U),2);
    bufp->fullCData(oldp+370,(2U),2);
    bufp->fullCData(oldp+371,(3U),2);
    bufp->fullBit(oldp+372,(1U));
    bufp->fullBit(oldp+373,(0U));
    bufp->fullIData(oldp+374,(5U),32);
    bufp->fullIData(oldp+375,(0xaU),32);
    bufp->fullIData(oldp+376,(2U),32);
}

VL_ATTR_COLD void VVexRiscv___024root__trace_full_0_sub_0(VVexRiscv___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VVexRiscv___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root__trace_full_0\n"); );
    // Init
    VVexRiscv___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VVexRiscv___024root*>(voidSelf);
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VVexRiscv___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VVexRiscv___024root__trace_full_0_sub_0(VVexRiscv___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVexRiscv___024root__trace_full_0_sub_0\n"); );
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(((~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__memory_arbitration_flushNext)) 
                           & ((~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__memory_arbitration_haltItself)) 
                              & (IData)(vlSymsp->TOP__VexRiscv.__VdfgRegularize_h16d7421c_0_14)))));
    bufp->fullBit(oldp+2,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_ready));
    bufp->fullBit(oldp+3,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_valid));
    bufp->fullBit(oldp+4,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_error));
    bufp->fullIData(oldp+5,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_payload_inst),32);
    bufp->fullIData(oldp+6,(vlSymsp->TOP__VexRiscv.__PVT__decode_INSTRUCTION_ANTICIPATED),32);
    bufp->fullBit(oldp+7,(vlSymsp->TOP__VexRiscv.__PVT__decode_arbitration_isStuck));
    bufp->fullBit(oldp+8,((1U & ((~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_arbitration_isStuck)) 
                                 & (~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_arbitration_removeIt))))));
    bufp->fullBit(oldp+9,(((IData)(vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_injector_decodeInput_valid) 
                           & ((~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_arbitration_isStuck)) 
                              & (~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_arbitration_removeIt))))));
    bufp->fullBit(oldp+10,(vlSymsp->TOP__VexRiscv.__PVT__execute_arbitration_haltItself));
    bufp->fullBit(oldp+11,(vlSymsp->TOP__VexRiscv.__PVT__execute_arbitration_isStuck));
    bufp->fullBit(oldp+12,(vlSymsp->TOP__VexRiscv.__PVT__memory_arbitration_haltItself));
    bufp->fullBit(oldp+13,((1U & ((~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__execute_arbitration_isStuck)) 
                                  & (~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__execute_arbitration_removeIt))))));
    bufp->fullBit(oldp+14,(((IData)(vlSymsp->TOP__VexRiscv.__PVT__execute_arbitration_isValid) 
                            & ((~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__execute_arbitration_isStuck)) 
                               & (~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__execute_arbitration_removeIt))))));
    bufp->fullBit(oldp+15,((1U & (~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__memory_arbitration_haltItself)))));
    bufp->fullBit(oldp+16,(((IData)(vlSymsp->TOP__VexRiscv.__PVT__memory_arbitration_isValid) 
                            & (~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__memory_arbitration_haltItself)))));
    bufp->fullBit(oldp+17,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_iBusRsp_stages_0_input_ready));
    bufp->fullIData(oldp+18,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_fetchPc_pc),32);
    bufp->fullBit(oldp+19,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_fetchPc_output_fire));
    bufp->fullBit(oldp+20,(((~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_fetchPc_booted)) 
                            & (IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_iBusRsp_stages_0_input_ready))));
    bufp->fullBit(oldp+21,(((IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_fetchPc_booted) 
                            & ((IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_iBusRsp_stages_0_input_ready) 
                               | (IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_fetchPc_correction)))));
    bufp->fullBit(oldp+22,(((~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_iBusRsp_stages_1_halt)) 
                            & (IData)(vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_iBusRsp_stages_0_output_m2sPipe_valid))));
    bufp->fullBit(oldp+23,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_iBusRsp_stages_1_output_ready));
    bufp->fullBit(oldp+24,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_iBusRsp_stages_1_halt));
    bufp->fullBit(oldp+25,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_iBusRsp_output_valid));
    bufp->fullBit(oldp+26,((1U & (~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_arbitration_isStuck)))));
    bufp->fullBit(oldp+27,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_fetchRsp_rsp_error));
    bufp->fullBit(oldp+28,((1U & (~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__execute_arbitration_isStuck)))));
    bufp->fullBit(oldp+29,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_predictor_historyWrite_valid));
    bufp->fullBit(oldp+30,(((IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo_io_pop_valid) 
                            & (IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_ready))));
    bufp->fullCData(oldp+31,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_pending_next),3);
    bufp->fullBit(oldp+32,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_output_valid));
    bufp->fullBit(oldp+33,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_output_ready));
    bufp->fullBit(oldp+34,((1U & (~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_output_valid)))));
    bufp->fullCData(oldp+35,((0x1fU & (vlSymsp->TOP__VexRiscv.__PVT__decode_INSTRUCTION_ANTICIPATED 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+36,((0x1fU & (vlSymsp->TOP__VexRiscv.__PVT__decode_INSTRUCTION_ANTICIPATED 
                                       >> 0x14U))),5);
    bufp->fullBit(oldp+37,((1U & ((~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__execute_arbitration_isStuck)) 
                                  | (IData)(vlSymsp->TOP__VexRiscv.__PVT__execute_arbitration_removeIt)))));
    bufp->fullBit(oldp+38,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ptr_doPush));
    bufp->fullBit(oldp+39,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ptr_doPop));
    bufp->fullBit(oldp+40,(((IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ptr_doPush) 
                            != (IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ptr_doPop))));
    bufp->fullBit(oldp+41,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__io_push_fire));
    bufp->fullIData(oldp+42,((0xfffffffcU & vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_iBusRsp_stages_0_output_m2sPipe_payload)),32);
    bufp->fullBit(oldp+43,(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_MEMORY_STORE));
    bufp->fullCData(oldp+44,((0xfU & (((0U == (3U & 
                                               (vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                >> 0xcU)))
                                        ? 1U : ((1U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                     >> 0xcU)))
                                                 ? 3U
                                                 : 0xfU)) 
                                      << (3U & vlSymsp->TOP__VexRiscv.__PVT__execute_SrcPlugin_addSub)))),4);
    bufp->fullIData(oldp+45,(vlSymsp->TOP__VexRiscv.__PVT__execute_SrcPlugin_addSub),32);
    bufp->fullIData(oldp+46,(((0U == (3U & (vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                            >> 0xcU)))
                               ? ((vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_RS2 
                                   << 0x18U) | ((0xff0000U 
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
                                       << 0x10U) | 
                                      (0xffffU & vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_RS2))
                                   : vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_RS2))),32);
    bufp->fullCData(oldp+47,((3U & (vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                    >> 0xcU))),2);
    bufp->fullQData(oldp+48,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_predictor_history_spinal_port1),56);
    bufp->fullIData(oldp+50,(vlSymsp->TOP__VexRiscv.__PVT__RegFilePlugin_regFile_spinal_port0),32);
    bufp->fullIData(oldp+51,(vlSymsp->TOP__VexRiscv.__PVT__RegFilePlugin_regFile_spinal_port1),32);
    bufp->fullBit(oldp+52,((vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_pc 
                            != (0xfffffffeU & vlSymsp->TOP__VexRiscv.__PVT__execute_BranchPlugin_branchAdder))));
    bufp->fullIData(oldp+53,(((IData)(4U) + vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_PC)),32);
    bufp->fullBit(oldp+54,(((0U != (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL)) 
                            && ((2U == (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL)) 
                                || ((3U == (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL)) 
                                    || (IData)(vlSymsp->TOP__VexRiscv.__PVT___zz_execute_BRANCH_DO))))));
    bufp->fullIData(oldp+55,((IData)((0x1ffffffffULL 
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
    bufp->fullIData(oldp+56,(vlSymsp->TOP__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_DATA),32);
    bufp->fullIData(oldp+57,(vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA),32);
    bufp->fullIData(oldp+58,(((2U == (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
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
    bufp->fullCData(oldp+59,(vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_MEMORY_ADDRESS_LOW),2);
    bufp->fullCData(oldp+60,((3U & vlSymsp->TOP__VexRiscv.__PVT__execute_SrcPlugin_addSub)),2);
    bufp->fullIData(oldp+61,(((IData)(0x14U) + (vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_SRC1 
                                                + (IData)(
                                                          (5ULL 
                                                           * (QData)((IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_SRC2))))))),32);
    bufp->fullBit(oldp+62,(((~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_SRC_USE_SUB_LESS)) 
                            & (0x24U == (0x64U & vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)))));
    bufp->fullCData(oldp+63,(vlSymsp->TOP__VexRiscv.__PVT__decode_BRANCH_CTRL),2);
    bufp->fullCData(oldp+64,(vlSymsp->TOP__VexRiscv.__PVT__decode_SHIFT_CTRL),2);
    bufp->fullCData(oldp+65,(vlSymsp->TOP__VexRiscv.__PVT__decode_ALU_BITWISE_CTRL),2);
    bufp->fullBit(oldp+66,(vlSymsp->TOP__VexRiscv.__PVT__decode_SRC_LESS_UNSIGNED));
    bufp->fullCData(oldp+67,(vlSymsp->TOP__VexRiscv.__PVT__decode_ALU_CTRL),2);
    bufp->fullBit(oldp+68,((0x20U == (0x20U & vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst))));
    bufp->fullBit(oldp+69,((0U == (0x58U & vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst))));
    bufp->fullBit(oldp+70,(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_IS_SPHERE_VOLUME));
    bufp->fullBit(oldp+71,(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_MEMORY_STAGE));
    bufp->fullBit(oldp+72,((0x10U == (0x10U & vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst))));
    bufp->fullBit(oldp+73,(vlSymsp->TOP__VexRiscv.__PVT__decode_BYPASSABLE_EXECUTE_STAGE));
    bufp->fullBit(oldp+74,((0x4000030U == (0x4000034U 
                                           & vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst))));
    bufp->fullBit(oldp+75,(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_PREDICTION_CONTEXT_hazard));
    bufp->fullBit(oldp+76,(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_PREDICTION_CONTEXT_hit));
    bufp->fullIData(oldp+77,(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_PREDICTION_CONTEXT_line_source),22);
    bufp->fullCData(oldp+78,(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_PREDICTION_CONTEXT_line_branchWish),2);
    bufp->fullIData(oldp+79,(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_PREDICTION_CONTEXT_line_target),32);
    bufp->fullBit(oldp+80,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_predictor_iBusRspContextOutput_delay_1_hazard));
    bufp->fullBit(oldp+81,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_predictor_iBusRspContextOutput_delay_1_hit));
    bufp->fullIData(oldp+82,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_predictor_iBusRspContextOutput_delay_1_line_source),22);
    bufp->fullCData(oldp+83,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_predictor_iBusRspContextOutput_delay_1_line_branchWish),2);
    bufp->fullIData(oldp+84,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_predictor_iBusRspContextOutput_delay_1_line_target),32);
    bufp->fullIData(oldp+85,(vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_FORMAL_PC_NEXT),32);
    bufp->fullIData(oldp+86,(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_FORMAL_PC_NEXT),32);
    bufp->fullIData(oldp+87,(((IData)(4U) + vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_pc)),32);
    bufp->fullIData(oldp+88,(vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_NEXT_PC1),32);
    bufp->fullIData(oldp+89,(vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_PC),32);
    bufp->fullIData(oldp+90,(vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_BRANCH_CALC),32);
    bufp->fullBit(oldp+91,(vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_TARGET_MISSMATCH1));
    bufp->fullBit(oldp+92,(vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_BRANCH_DO));
    bufp->fullIData(oldp+93,((0xfffffffeU & vlSymsp->TOP__VexRiscv.__PVT__execute_BranchPlugin_branchAdder)),32);
    bufp->fullIData(oldp+94,(((2U == (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                               ? ((((- (IData)((vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                >> 0x1fU))) 
                                    << 0x15U) | (0x100000U 
                                                 & (vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                    >> 0xbU))) 
                                  | (((0xff000U & vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_INSTRUCTION) 
                                      | (0x800U & (vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                   >> 9U))) 
                                     | (0x7feU & (vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                  >> 0x14U))))
                               : ((3U == (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                   ? (((- (IData)((vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                   >> 0x1fU))) 
                                       << 0xcU) | (vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                   >> 0x14U))
                                   : (((- (IData)((vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                   >> 0x1fU))) 
                                       << 0xdU) | (
                                                   ((0x1000U 
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
    bufp->fullIData(oldp+95,(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_PC),32);
    bufp->fullCData(oldp+96,(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL),2);
    bufp->fullBit(oldp+97,(vlSymsp->TOP__VexRiscv.__PVT___zz___05Fzz_decode_SRC_LESS_UNSIGNED_51));
    bufp->fullBit(oldp+98,((0U != (IData)(vlSymsp->TOP__VexRiscv.__PVT___zz___05Fzz_decode_SRC_LESS_UNSIGNED_60))));
    bufp->fullBit(oldp+99,(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_REGFILE_WRITE_VALID));
    bufp->fullBit(oldp+100,(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE));
    bufp->fullBit(oldp+101,(vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_VALID));
    bufp->fullIData(oldp+102,(vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_INSTRUCTION),32);
    bufp->fullBit(oldp+103,(vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE));
    bufp->fullBit(oldp+104,(vlSymsp->TOP__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_VALID));
    bufp->fullIData(oldp+105,(vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT),32);
    bufp->fullCData(oldp+106,(vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_SHIFT_CTRL),2);
    bufp->fullCData(oldp+107,(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL),2);
    bufp->fullBit(oldp+108,(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_SRC_LESS_UNSIGNED));
    bufp->fullBit(oldp+109,(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_SRC2_FORCE_ZERO));
    bufp->fullBit(oldp+110,(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_SRC_USE_SUB_LESS));
    bufp->fullCData(oldp+111,(vlSymsp->TOP__VexRiscv.__PVT__decode_SRC2_CTRL),2);
    bufp->fullCData(oldp+112,(vlSymsp->TOP__VexRiscv.__PVT__decode_SRC1_CTRL),2);
    bufp->fullBit(oldp+113,(vlSymsp->TOP__VexRiscv.__PVT__decode_SRC_USE_SUB_LESS));
    bufp->fullBit(oldp+114,((0x24U == (0x64U & vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst))));
    bufp->fullBit(oldp+115,(vlSymsp->TOP__VexRiscv.__PVT__execute_SRC_LESS));
    bufp->fullCData(oldp+116,(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_ALU_CTRL),2);
    bufp->fullCData(oldp+117,(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL),2);
    bufp->fullBit(oldp+118,(vlSymsp->TOP__VexRiscv.__PVT__decode_REGFILE_WRITE_VALID));
    bufp->fullBit(oldp+119,(vlSymsp->TOP__VexRiscv.__PVT__memory_to_writeBack_MEMORY_ENABLE));
    bufp->fullCData(oldp+120,(vlSymsp->TOP__VexRiscv.__PVT__memory_to_writeBack_MEMORY_ADDRESS_LOW),2);
    bufp->fullIData(oldp+121,(vlSymsp->TOP__VexRiscv.__PVT__memory_to_writeBack_MEMORY_READ_DATA),32);
    bufp->fullBit(oldp+122,(vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_MEMORY_STORE));
    bufp->fullBit(oldp+123,(vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_MEMORY_ENABLE));
    bufp->fullIData(oldp+124,(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_INSTRUCTION),32);
    bufp->fullBit(oldp+125,(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_MEMORY_ENABLE));
    bufp->fullBit(oldp+126,(vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_PREDICTION_CONTEXT_hazard));
    bufp->fullBit(oldp+127,(vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_PREDICTION_CONTEXT_hit));
    bufp->fullIData(oldp+128,(vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_PREDICTION_CONTEXT_line_source),22);
    bufp->fullCData(oldp+129,(vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_PREDICTION_CONTEXT_line_branchWish),2);
    bufp->fullIData(oldp+130,(vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_PREDICTION_CONTEXT_line_target),32);
    bufp->fullIData(oldp+131,(vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_pc),32);
    bufp->fullIData(oldp+132,(vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst),32);
    bufp->fullIData(oldp+133,(vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_SPHERE_VOLUME),32);
    bufp->fullBit(oldp+134,(vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_IS_SPHERE_VOLUME));
    bufp->fullIData(oldp+135,(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_SRC2),32);
    bufp->fullIData(oldp+136,(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_SRC1),32);
    bufp->fullBit(oldp+137,(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_IS_SIMD_ADD));
    bufp->fullIData(oldp+138,(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_RS2),32);
    bufp->fullIData(oldp+139,(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_RS1),32);
    bufp->fullIData(oldp+140,(vlSymsp->TOP__VexRiscv.__PVT__memory_to_writeBack_PC),32);
    bufp->fullIData(oldp+141,(vlSymsp->TOP__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION),32);
    bufp->fullBit(oldp+142,(((IData)(vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_PREDICTION_CONTEXT_hit) 
                             & ((~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_PREDICTION_CONTEXT_hazard)) 
                                & ((IData)(vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_PREDICTION_CONTEXT_line_branchWish) 
                                   >> 1U)))));
    bufp->fullBit(oldp+143,((1U & (~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__memory_BranchPlugin_predictionMissmatch)))));
    bufp->fullIData(oldp+144,(((IData)(vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_BRANCH_DO)
                                ? vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_BRANCH_CALC
                                : vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_NEXT_PC1)),32);
    bufp->fullIData(oldp+145,(vlSymsp->TOP__VexRiscv.__PVT__execute_SimdAddPlugin_rd),32);
    bufp->fullQData(oldp+146,((0x14ULL + ((QData)((IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_SRC1)) 
                                          + (5ULL * (QData)((IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_SRC2)))))),64);
    bufp->fullIData(oldp+148,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_predictor_line_target),32);
    bufp->fullIData(oldp+149,(vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_iBusRsp_stages_1_output_m2sPipe_payload),32);
    bufp->fullIData(oldp+150,(vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_iBusRsp_stages_0_output_m2sPipe_payload),32);
    bufp->fullBit(oldp+151,(vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_error));
    bufp->fullBit(oldp+152,(vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_isRvc));
    bufp->fullIData(oldp+153,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_injector_formal_rawInDecode),32);
    bufp->fullCData(oldp+154,((0xffU & ((vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_PC 
                                         >> 2U) - (IData)(1U)))),8);
    bufp->fullIData(oldp+155,((vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_PC 
                               >> 0xaU)),22);
    bufp->fullCData(oldp+156,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_predictor_historyWrite_payload_data_branchWish),2);
    bufp->fullCData(oldp+157,((0xffU & (vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_PC 
                                        >> 2U))),8);
    bufp->fullBit(oldp+158,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_predictor_writeLast_valid));
    bufp->fullCData(oldp+159,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_predictor_writeLast_payload_address),8);
    bufp->fullIData(oldp+160,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_predictor_writeLast_payload_data_source),22);
    bufp->fullCData(oldp+161,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_predictor_writeLast_payload_data_branchWish),2);
    bufp->fullIData(oldp+162,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_predictor_writeLast_payload_data_target),32);
    bufp->fullIData(oldp+163,((0x3fffffU & (IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_predictor_history_spinal_port1))),22);
    bufp->fullCData(oldp+164,((3U & (IData)((vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_predictor_history_spinal_port1 
                                             >> 0x16U)))),2);
    bufp->fullIData(oldp+165,((IData)((vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_predictor_history_spinal_port1 
                                       >> 0x18U))),32);
    bufp->fullBit(oldp+166,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_predictor_buffer_pcCorrected));
    bufp->fullBit(oldp+167,(((IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_predictor_writeLast_valid) 
                             & ((IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_predictor_writeLast_payload_address) 
                                == (0xffU & (vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_iBusRsp_stages_0_output_m2sPipe_payload 
                                             >> 2U))))));
    bufp->fullIData(oldp+168,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_predictor_line_source),22);
    bufp->fullCData(oldp+169,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_predictor_line_branchWish),2);
    bufp->fullBit(oldp+170,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_predictor_buffer_hazard_regNextWhen));
    bufp->fullBit(oldp+171,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_predictor_fetchContext_hazard));
    bufp->fullBit(oldp+172,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_predictor_fetchContext_hit));
    bufp->fullBit(oldp+173,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_predictor_iBusRspContext_hazard));
    bufp->fullBit(oldp+174,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_predictor_iBusRspContext_hit));
    bufp->fullIData(oldp+175,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_predictor_iBusRspContext_line_source),22);
    bufp->fullCData(oldp+176,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_predictor_iBusRspContext_line_branchWish),2);
    bufp->fullIData(oldp+177,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_predictor_iBusRspContext_line_target),32);
    bufp->fullIData(oldp+178,(vlSymsp->TOP__VexRiscv.__PVT__writeBack_DBusSimplePlugin_rspShifted),32);
    bufp->fullCData(oldp+179,((3U & (vlSymsp->TOP__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                     >> 0xcU))),2);
    bufp->fullIData(oldp+180,(((0U == (3U & (vlSymsp->TOP__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                             >> 0xcU)))
                                ? (((- (IData)((1U 
                                                & ((~ 
                                                    (vlSymsp->TOP__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                                     >> 0xeU)) 
                                                   & (vlSymsp->TOP__VexRiscv.__PVT__writeBack_DBusSimplePlugin_rspShifted 
                                                      >> 7U))))) 
                                    << 8U) | (0xffU 
                                              & vlSymsp->TOP__VexRiscv.__PVT__writeBack_DBusSimplePlugin_rspShifted))
                                : ((1U == (3U & (vlSymsp->TOP__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                                 >> 0xcU)))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((~ 
                                                        (vlSymsp->TOP__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                                         >> 0xeU)) 
                                                       & (vlSymsp->TOP__VexRiscv.__PVT__writeBack_DBusSimplePlugin_rspShifted 
                                                          >> 0xfU))))) 
                                        << 0x10U) | 
                                       (0xffffU & vlSymsp->TOP__VexRiscv.__PVT__writeBack_DBusSimplePlugin_rspShifted))
                                    : vlSymsp->TOP__VexRiscv.__PVT__writeBack_DBusSimplePlugin_rspShifted))),32);
    bufp->fullBit(oldp+181,((0U == (0x1fU & (vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst 
                                             >> 7U)))));
    bufp->fullIData(oldp+182,(((2U == (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                ? (vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_SRC1 
                                   & vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_SRC2)
                                : ((1U == (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                    ? (vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_SRC1 
                                       | vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_SRC2)
                                    : (vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_SRC1 
                                       ^ vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_SRC2)))),32);
    bufp->fullCData(oldp+183,((0x1fU & vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_SRC2)),5);
    bufp->fullIData(oldp+184,(vlSymsp->TOP__VexRiscv.__PVT__execute_FullBarrelShifterPlugin_reversed),32);
    bufp->fullCData(oldp+185,((0x1fU & (vlSymsp->TOP__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                        >> 7U))),5);
    bufp->fullCData(oldp+186,(vlSymsp->TOP__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_address),5);
    bufp->fullIData(oldp+187,(vlSymsp->TOP__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_data),32);
    bufp->fullBit(oldp+188,(((IData)(vlSymsp->TOP__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_address) 
                             == (0x1fU & (vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst 
                                          >> 0xfU)))));
    bufp->fullBit(oldp+189,(((IData)(vlSymsp->TOP__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_address) 
                             == (0x1fU & (vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst 
                                          >> 0x14U)))));
    bufp->fullBit(oldp+190,(((0x1fU & (vlSymsp->TOP__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                       >> 7U)) == (0x1fU 
                                                   & (vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst 
                                                      >> 0xfU)))));
    bufp->fullBit(oldp+191,(((0x1fU & (vlSymsp->TOP__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                       >> 7U)) == (0x1fU 
                                                   & (vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst 
                                                      >> 0x14U)))));
    bufp->fullBit(oldp+192,(vlSymsp->TOP__VexRiscv.__PVT__when_HazardSimplePlugin_l48_1));
    bufp->fullBit(oldp+193,(vlSymsp->TOP__VexRiscv.__PVT__when_HazardSimplePlugin_l51_1));
    bufp->fullBit(oldp+194,((1U & (~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE)))));
    bufp->fullBit(oldp+195,(vlSymsp->TOP__VexRiscv.__PVT__when_HazardSimplePlugin_l48_2));
    bufp->fullBit(oldp+196,(vlSymsp->TOP__VexRiscv.__PVT__when_HazardSimplePlugin_l51_2));
    bufp->fullBit(oldp+197,((1U & (~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE)))));
    bufp->fullBit(oldp+198,((1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__VexRiscv.__PVT___zz___05Fzz_decode_SRC_LESS_UNSIGNED_60)))))));
    bufp->fullBit(oldp+199,((1U & (~ (IData)(vlSymsp->TOP__VexRiscv.__PVT___zz___05Fzz_decode_SRC_LESS_UNSIGNED_51)))));
    bufp->fullBit(oldp+200,(vlSymsp->TOP__VexRiscv.__PVT__execute_BranchPlugin_eq));
    bufp->fullCData(oldp+201,((7U & (vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                     >> 0xcU))),3);
    bufp->fullIData(oldp+202,(((3U == (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                ? vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_RS1
                                : vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_PC)),32);
    bufp->fullIData(oldp+203,(vlSymsp->TOP__VexRiscv.__PVT__execute_BranchPlugin_branchAdder),32);
    bufp->fullBit(oldp+204,(vlSymsp->TOP__VexRiscv.__PVT__memory_BranchPlugin_predictionMissmatch));
    bufp->fullIData(oldp+205,(vlSymsp->TOP__VexRiscv.__PVT__decode_BRANCH_CTRL_string),32);
    bufp->fullWData(oldp+206,(vlSymsp->TOP__VexRiscv.__PVT__decode_SHIFT_CTRL_string),72);
    bufp->fullQData(oldp+209,(((0U == (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_ALU_BITWISE_CTRL))
                                ? 0x584f525f31ULL : 
                               ((1U == (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_ALU_BITWISE_CTRL))
                                 ? 0x4f525f3120ULL : 
                                ((2U == (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_ALU_BITWISE_CTRL))
                                  ? 0x414e445f31ULL
                                  : 0x3f3f3f3f3fULL)))),40);
    bufp->fullQData(oldp+211,(((0U == (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_ALU_CTRL))
                                ? 0x4144445f53554220ULL
                                : ((1U == (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_ALU_CTRL))
                                    ? 0x534c545f534c5455ULL
                                    : ((2U == (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_ALU_CTRL))
                                        ? 0x4249545749534520ULL
                                        : 0x3f3f3f3f3f3f3f3fULL)))),64);
    bufp->fullIData(oldp+213,(vlSymsp->TOP__VexRiscv.__PVT__execute_BRANCH_CTRL_string),32);
    bufp->fullWData(oldp+214,(vlSymsp->TOP__VexRiscv.__PVT__memory_SHIFT_CTRL_string),72);
    bufp->fullWData(oldp+217,(vlSymsp->TOP__VexRiscv.__PVT__execute_SHIFT_CTRL_string),72);
    bufp->fullIData(oldp+220,(vlSymsp->TOP__VexRiscv.__PVT__decode_SRC2_CTRL_string),24);
    bufp->fullWData(oldp+221,(vlSymsp->TOP__VexRiscv.__PVT__decode_SRC1_CTRL_string),96);
    bufp->fullQData(oldp+224,(((0U == (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                                ? 0x4144445f53554220ULL
                                : ((1U == (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                                    ? 0x534c545f534c5455ULL
                                    : ((2U == (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                                        ? 0x4249545749534520ULL
                                        : 0x3f3f3f3f3f3f3f3fULL)))),64);
    bufp->fullQData(oldp+226,(((0U == (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                ? 0x584f525f31ULL : 
                               ((1U == (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                 ? 0x4f525f3120ULL : 
                                ((2U == (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                  ? 0x414e445f31ULL
                                  : 0x3f3f3f3f3fULL)))),40);
    bufp->fullWData(oldp+228,(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL_string),72);
    bufp->fullWData(oldp+231,(vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_SHIFT_CTRL_string),72);
    bufp->fullIData(oldp+234,(vlSymsp->TOP__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL_string),32);
    bufp->fullQData(oldp+235,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ram[0]),33);
    bufp->fullQData(oldp+237,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ram[1]),33);
    bufp->fullIData(oldp+239,(((0U == (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_SRC2_CTRL))
                                ? vlSymsp->TOP__VexRiscv.__PVT__decode_RS2
                                : ((1U == (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_SRC2_CTRL))
                                    ? (((- (IData)(
                                                   (vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       (vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst 
                                        >> 0x14U)) : 
                                   ((2U == (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_SRC2_CTRL))
                                     ? (((- (IData)(
                                                    (vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst 
                                                     >> 0x1fU))) 
                                         << 0xcU) | 
                                        ((0xfe0U & 
                                          (vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst 
                                           >> 0x14U)) 
                                         | (0x1fU & 
                                            (vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst 
                                             >> 7U))))
                                     : vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_pc)))),32);
    bufp->fullIData(oldp+240,(((0U == (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_SRC1_CTRL))
                                ? vlSymsp->TOP__VexRiscv.__PVT__decode_RS1
                                : ((2U == (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_SRC1_CTRL))
                                    ? 4U : ((1U == (IData)(vlSymsp->TOP__VexRiscv.__PVT__decode_SRC1_CTRL))
                                             ? (0xfffff000U 
                                                & vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst)
                                             : (0x1fU 
                                                & (vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_injector_decodeInput_payload_rsp_inst 
                                                   >> 0xfU)))))),32);
    bufp->fullBit(oldp+241,(((IData)(vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_IS_SPHERE_VOLUME) 
                             & (IData)(vlSymsp->TOP__VexRiscv.__PVT__memory_arbitration_isValid))));
    bufp->fullBit(oldp+242,(((IData)(vlSymsp->TOP__VexRiscv.__PVT__memory_to_writeBack_MEMORY_ENABLE) 
                             & (IData)(vlSymsp->TOP__VexRiscv.__PVT__writeBack_arbitration_isValid))));
    bufp->fullQData(oldp+243,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ram
                              [(1U & (IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ptr_pop))]),33);
    bufp->fullBit(oldp+245,((1U & (IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ram
                                          [(1U & (IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ptr_pop))]))));
    bufp->fullIData(oldp+246,((IData)((vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ram
                                       [(1U & (IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ptr_pop))] 
                                       >> 1U))),32);
    bufp->fullBit(oldp+247,(vlSymsp->TOP__VexRiscv.iBus_cmd_valid));
    bufp->fullBit(oldp+248,((0U != (2U ^ ((IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ptr_pop) 
                                          ^ (IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ptr_push))))));
    bufp->fullCData(oldp+249,((3U & ((IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ptr_push) 
                                     - (IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ptr_pop)))),2);
    bufp->fullCData(oldp+250,((3U & ((IData)(2U) - 
                                     ((IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ptr_push) 
                                      - (IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ptr_pop))))),2);
    bufp->fullIData(oldp+251,(vlSymsp->TOP__VexRiscv.__PVT__decode_RS2),32);
    bufp->fullIData(oldp+252,(vlSymsp->TOP__VexRiscv.__PVT__decode_RS1),32);
    bufp->fullBit(oldp+253,(vlSymsp->TOP__VexRiscv.__PVT__decode_arbitration_haltByOther));
    bufp->fullBit(oldp+254,(vlSymsp->TOP__VexRiscv.__PVT__decode_arbitration_removeIt));
    bufp->fullBit(oldp+255,(vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_injector_decodeInput_valid));
    bufp->fullBit(oldp+256,(vlSymsp->TOP__VexRiscv.__PVT__memory_arbitration_flushNext));
    bufp->fullBit(oldp+257,(vlSymsp->TOP__VexRiscv.__PVT__execute_arbitration_removeIt));
    bufp->fullBit(oldp+258,(vlSymsp->TOP__VexRiscv.__PVT__execute_arbitration_isValid));
    bufp->fullBit(oldp+259,(vlSymsp->TOP__VexRiscv.__PVT__memory_arbitration_isValid));
    bufp->fullBit(oldp+260,(vlSymsp->TOP__VexRiscv.__PVT__writeBack_arbitration_isValid));
    bufp->fullBit(oldp+261,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_incomingInstruction));
    bufp->fullBit(oldp+262,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_injector_nextPcCalc_valids_2));
    bufp->fullBit(oldp+263,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_injector_nextPcCalc_valids_3));
    bufp->fullBit(oldp+264,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_injector_nextPcCalc_valids_4));
    bufp->fullBit(oldp+265,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_injector_nextPcCalc_valids_5));
    bufp->fullBit(oldp+266,(vlSymsp->TOP__VexRiscv.__PVT__BranchPlugin_jumpInterface_valid));
    bufp->fullBit(oldp+267,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_fetchPc_booted));
    bufp->fullBit(oldp+268,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_fetchPc_correction));
    bufp->fullBit(oldp+269,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_fetchPc_correctionReg));
    bufp->fullBit(oldp+270,(((IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_fetchPc_correction) 
                             | (IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_fetchPc_correctionReg))));
    bufp->fullBit(oldp+271,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_fetchPc_inc));
    bufp->fullBit(oldp+272,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_fetchPc_predictionPcLoad_valid));
    bufp->fullBit(oldp+273,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_fetchPc_flushed));
    bufp->fullBit(oldp+274,(vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_iBusRsp_stages_0_output_m2sPipe_valid));
    bufp->fullBit(oldp+275,(vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_iBusRsp_stages_1_output_m2sPipe_valid));
    bufp->fullBit(oldp+276,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_iBusRsp_readyForError));
    bufp->fullBit(oldp+277,(((IData)(vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_iBusRsp_stages_0_output_m2sPipe_valid) 
                             | (IData)(vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_iBusRsp_stages_1_output_m2sPipe_valid))));
    bufp->fullBit(oldp+278,((1U & (~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_injector_nextPcCalc_valids_2)))));
    bufp->fullBit(oldp+279,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_injector_nextPcCalc_valids_0));
    bufp->fullBit(oldp+280,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_injector_nextPcCalc_valids_1));
    bufp->fullBit(oldp+281,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_cmdFork_enterTheMarket));
    bufp->fullCData(oldp+282,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_pending_value),3);
    bufp->fullBit(oldp+283,((7U == (IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_pending_value))));
    bufp->fullBit(oldp+284,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_cmdFork_cmdKeep));
    bufp->fullBit(oldp+285,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_cmdFork_cmdFired));
    bufp->fullBit(oldp+286,(((7U == (IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_pending_value)) 
                             & (IData)(vlSymsp->TOP__VexRiscv.__VdfgRegularize_h16d7421c_0_15))));
    bufp->fullCData(oldp+287,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_discardCounter),3);
    bufp->fullBit(oldp+288,(((0U != (IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_discardCounter)) 
                             | (IData)(vlSymsp->TOP__VexRiscv.__PVT__memory_arbitration_flushNext))));
    bufp->fullBit(oldp+289,(vlSymsp->TOP__VexRiscv.__PVT__HazardSimplePlugin_src0Hazard));
    bufp->fullBit(oldp+290,(vlSymsp->TOP__VexRiscv.__PVT__HazardSimplePlugin_src1Hazard));
    bufp->fullBit(oldp+291,(vlSymsp->TOP__VexRiscv.__PVT__HazardSimplePlugin_writeBackWrites_valid));
    bufp->fullIData(oldp+292,(vlSymsp->TOP__VexRiscv.__PVT___zz_decode_RS2),32);
    bufp->fullBit(oldp+293,(vlSymsp->TOP__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_valid));
    bufp->fullBit(oldp+294,(vlSymsp->TOP__VexRiscv.__PVT__when_HazardSimplePlugin_l45_1));
    bufp->fullBit(oldp+295,(vlSymsp->TOP__VexRiscv.__PVT__when_HazardSimplePlugin_l45_2));
    bufp->fullBit(oldp+296,(((IData)(vlSymsp->TOP__VexRiscv.__PVT___zz_IBusSimplePlugin_injector_decodeInput_valid) 
                             & ((IData)(vlSymsp->TOP__VexRiscv.__PVT__HazardSimplePlugin_src0Hazard) 
                                | (IData)(vlSymsp->TOP__VexRiscv.__PVT__HazardSimplePlugin_src1Hazard)))));
    bufp->fullBit(oldp+297,((0U == (2U ^ ((IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ptr_pop) 
                                          ^ (IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ptr_push))))));
    bufp->fullBit(oldp+298,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ptr_empty));
    bufp->fullCData(oldp+299,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ptr_push),2);
    bufp->fullCData(oldp+300,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ptr_pop),2);
    bufp->fullBit(oldp+301,(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ptr_wentUp));
    bufp->fullBit(oldp+302,((1U & (IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ptr_push))));
    bufp->fullBit(oldp+303,((1U & (~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ptr_empty)))));
    bufp->fullBit(oldp+304,((1U & (IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__fifo__DOT__logic_ptr_pop))));
    bufp->fullBit(oldp+305,(vlSelfRef.iBus_cmd_valid));
    bufp->fullBit(oldp+306,(vlSelfRef.iBus_cmd_ready));
    bufp->fullIData(oldp+307,(vlSelfRef.iBus_cmd_payload_pc),32);
    bufp->fullBit(oldp+308,(vlSelfRef.iBus_rsp_valid));
    bufp->fullBit(oldp+309,(vlSelfRef.iBus_rsp_payload_error));
    bufp->fullIData(oldp+310,(vlSelfRef.iBus_rsp_payload_inst),32);
    bufp->fullBit(oldp+311,(vlSelfRef.dBus_cmd_valid));
    bufp->fullBit(oldp+312,(vlSelfRef.dBus_cmd_ready));
    bufp->fullBit(oldp+313,(vlSelfRef.dBus_cmd_payload_wr));
    bufp->fullCData(oldp+314,(vlSelfRef.dBus_cmd_payload_mask),4);
    bufp->fullIData(oldp+315,(vlSelfRef.dBus_cmd_payload_address),32);
    bufp->fullIData(oldp+316,(vlSelfRef.dBus_cmd_payload_data),32);
    bufp->fullCData(oldp+317,(vlSelfRef.dBus_cmd_payload_size),2);
    bufp->fullBit(oldp+318,(vlSelfRef.dBus_rsp_ready));
    bufp->fullBit(oldp+319,(vlSelfRef.dBus_rsp_error));
    bufp->fullIData(oldp+320,(vlSelfRef.dBus_rsp_data),32);
    bufp->fullBit(oldp+321,(vlSelfRef.clk));
    bufp->fullBit(oldp+322,(vlSelfRef.reset));
    bufp->fullIData(oldp+323,(vlSymsp->TOP__VexRiscv.lastStageInstruction),32);
    bufp->fullIData(oldp+324,(vlSymsp->TOP__VexRiscv.lastStagePc),32);
    bufp->fullBit(oldp+325,(vlSymsp->TOP__VexRiscv.lastStageIsValid));
    bufp->fullBit(oldp+326,(vlSymsp->TOP__VexRiscv.lastStageIsFiring));
    bufp->fullIData(oldp+327,(vlSymsp->TOP__VexRiscv.IBusSimplePlugin_fetchPc_pcReg),32);
    bufp->fullBit(oldp+328,((1U & ((~ ((IData)(vlSymsp->TOP__VexRiscv.__PVT__memory_arbitration_isValid) 
                                       & (~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__memory_arbitration_haltItself)))) 
                                   | (IData)(vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_PREDICTION_CONTEXT_hazard)))));
    bufp->fullBit(oldp+329,(((IData)(vlSymsp->TOP__VexRiscv.iBus_cmd_valid) 
                             & (IData)(vlSelfRef.iBus_cmd_ready))));
    bufp->fullBit(oldp+330,((1U & ((~ (IData)(vlSelfRef.iBus_cmd_ready)) 
                                   & (~ (IData)(vlSymsp->TOP__VexRiscv.__PVT__IBusSimplePlugin_cmdFork_cmdFired))))));
    bufp->fullBit(oldp+331,(((~ (IData)(vlSelfRef.dBus_cmd_ready)) 
                             & (IData)(vlSymsp->TOP__VexRiscv.__VdfgRegularize_h16d7421c_0_14))));
    bufp->fullBit(oldp+332,(((IData)(vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_MEMORY_ENABLE) 
                             & ((~ ((IData)(vlSelfRef.dBus_rsp_ready) 
                                    | (IData)(vlSymsp->TOP__VexRiscv.__PVT__execute_to_memory_MEMORY_STORE))) 
                                & (IData)(vlSymsp->TOP__VexRiscv.__PVT__memory_arbitration_isValid)))));
    bufp->fullBit(oldp+333,(vlSymsp->TOP__VexRiscv.lastStageRegFileWrite_valid));
    bufp->fullCData(oldp+334,(vlSymsp->TOP__VexRiscv.lastStageRegFileWrite_payload_address),5);
    bufp->fullIData(oldp+335,(vlSymsp->TOP__VexRiscv.lastStageRegFileWrite_payload_data),32);
    bufp->fullIData(oldp+336,(vlSymsp->TOP__VexRiscv.RegFilePlugin_regFile[0]),32);
    bufp->fullIData(oldp+337,(vlSymsp->TOP__VexRiscv.RegFilePlugin_regFile[1]),32);
    bufp->fullIData(oldp+338,(vlSymsp->TOP__VexRiscv.RegFilePlugin_regFile[2]),32);
    bufp->fullIData(oldp+339,(vlSymsp->TOP__VexRiscv.RegFilePlugin_regFile[3]),32);
    bufp->fullIData(oldp+340,(vlSymsp->TOP__VexRiscv.RegFilePlugin_regFile[4]),32);
    bufp->fullIData(oldp+341,(vlSymsp->TOP__VexRiscv.RegFilePlugin_regFile[5]),32);
    bufp->fullIData(oldp+342,(vlSymsp->TOP__VexRiscv.RegFilePlugin_regFile[6]),32);
    bufp->fullIData(oldp+343,(vlSymsp->TOP__VexRiscv.RegFilePlugin_regFile[7]),32);
    bufp->fullIData(oldp+344,(vlSymsp->TOP__VexRiscv.RegFilePlugin_regFile[8]),32);
    bufp->fullIData(oldp+345,(vlSymsp->TOP__VexRiscv.RegFilePlugin_regFile[9]),32);
    bufp->fullIData(oldp+346,(vlSymsp->TOP__VexRiscv.RegFilePlugin_regFile[10]),32);
    bufp->fullIData(oldp+347,(vlSymsp->TOP__VexRiscv.RegFilePlugin_regFile[11]),32);
    bufp->fullIData(oldp+348,(vlSymsp->TOP__VexRiscv.RegFilePlugin_regFile[12]),32);
    bufp->fullIData(oldp+349,(vlSymsp->TOP__VexRiscv.RegFilePlugin_regFile[13]),32);
    bufp->fullIData(oldp+350,(vlSymsp->TOP__VexRiscv.RegFilePlugin_regFile[14]),32);
    bufp->fullIData(oldp+351,(vlSymsp->TOP__VexRiscv.RegFilePlugin_regFile[15]),32);
    bufp->fullIData(oldp+352,(vlSymsp->TOP__VexRiscv.RegFilePlugin_regFile[16]),32);
    bufp->fullIData(oldp+353,(vlSymsp->TOP__VexRiscv.RegFilePlugin_regFile[17]),32);
    bufp->fullIData(oldp+354,(vlSymsp->TOP__VexRiscv.RegFilePlugin_regFile[18]),32);
    bufp->fullIData(oldp+355,(vlSymsp->TOP__VexRiscv.RegFilePlugin_regFile[19]),32);
    bufp->fullIData(oldp+356,(vlSymsp->TOP__VexRiscv.RegFilePlugin_regFile[20]),32);
    bufp->fullIData(oldp+357,(vlSymsp->TOP__VexRiscv.RegFilePlugin_regFile[21]),32);
    bufp->fullIData(oldp+358,(vlSymsp->TOP__VexRiscv.RegFilePlugin_regFile[22]),32);
    bufp->fullIData(oldp+359,(vlSymsp->TOP__VexRiscv.RegFilePlugin_regFile[23]),32);
    bufp->fullIData(oldp+360,(vlSymsp->TOP__VexRiscv.RegFilePlugin_regFile[24]),32);
    bufp->fullIData(oldp+361,(vlSymsp->TOP__VexRiscv.RegFilePlugin_regFile[25]),32);
    bufp->fullIData(oldp+362,(vlSymsp->TOP__VexRiscv.RegFilePlugin_regFile[26]),32);
    bufp->fullIData(oldp+363,(vlSymsp->TOP__VexRiscv.RegFilePlugin_regFile[27]),32);
    bufp->fullIData(oldp+364,(vlSymsp->TOP__VexRiscv.RegFilePlugin_regFile[28]),32);
    bufp->fullIData(oldp+365,(vlSymsp->TOP__VexRiscv.RegFilePlugin_regFile[29]),32);
    bufp->fullIData(oldp+366,(vlSymsp->TOP__VexRiscv.RegFilePlugin_regFile[30]),32);
    bufp->fullIData(oldp+367,(vlSymsp->TOP__VexRiscv.RegFilePlugin_regFile[31]),32);
}
