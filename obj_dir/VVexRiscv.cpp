// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VVexRiscv__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VVexRiscv::VVexRiscv(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VVexRiscv__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , iBus_cmd_valid{vlSymsp->TOP.iBus_cmd_valid}
    , iBus_cmd_ready{vlSymsp->TOP.iBus_cmd_ready}
    , iBus_rsp_valid{vlSymsp->TOP.iBus_rsp_valid}
    , iBus_rsp_payload_error{vlSymsp->TOP.iBus_rsp_payload_error}
    , dBus_cmd_valid{vlSymsp->TOP.dBus_cmd_valid}
    , dBus_cmd_ready{vlSymsp->TOP.dBus_cmd_ready}
    , dBus_cmd_payload_wr{vlSymsp->TOP.dBus_cmd_payload_wr}
    , dBus_cmd_payload_mask{vlSymsp->TOP.dBus_cmd_payload_mask}
    , dBus_cmd_payload_size{vlSymsp->TOP.dBus_cmd_payload_size}
    , dBus_rsp_ready{vlSymsp->TOP.dBus_rsp_ready}
    , dBus_rsp_error{vlSymsp->TOP.dBus_rsp_error}
    , iBus_cmd_payload_pc{vlSymsp->TOP.iBus_cmd_payload_pc}
    , iBus_rsp_payload_inst{vlSymsp->TOP.iBus_rsp_payload_inst}
    , dBus_cmd_payload_address{vlSymsp->TOP.dBus_cmd_payload_address}
    , dBus_cmd_payload_data{vlSymsp->TOP.dBus_cmd_payload_data}
    , dBus_rsp_data{vlSymsp->TOP.dBus_rsp_data}
    , VexRiscv{vlSymsp->TOP.VexRiscv}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VVexRiscv::VVexRiscv(const char* _vcname__)
    : VVexRiscv(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VVexRiscv::~VVexRiscv() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VVexRiscv___024root___eval_debug_assertions(VVexRiscv___024root* vlSelf);
#endif  // VL_DEBUG
void VVexRiscv___024root___eval_static(VVexRiscv___024root* vlSelf);
void VVexRiscv___024root___eval_initial(VVexRiscv___024root* vlSelf);
void VVexRiscv___024root___eval_settle(VVexRiscv___024root* vlSelf);
void VVexRiscv___024root___eval(VVexRiscv___024root* vlSelf);

void VVexRiscv::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VVexRiscv::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VVexRiscv___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VVexRiscv___024root___eval_static(&(vlSymsp->TOP));
        VVexRiscv___024root___eval_initial(&(vlSymsp->TOP));
        VVexRiscv___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VVexRiscv___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VVexRiscv::eventsPending() { return false; }

uint64_t VVexRiscv::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VVexRiscv::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VVexRiscv___024root___eval_final(VVexRiscv___024root* vlSelf);

VL_ATTR_COLD void VVexRiscv::final() {
    VVexRiscv___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VVexRiscv::hierName() const { return vlSymsp->name(); }
const char* VVexRiscv::modelName() const { return "VVexRiscv"; }
unsigned VVexRiscv::threads() const { return 1; }
void VVexRiscv::prepareClone() const { contextp()->prepareClone(); }
void VVexRiscv::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VVexRiscv::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VVexRiscv___024root__trace_decl_types(VerilatedVcd* tracep);

void VVexRiscv___024root__trace_init_top(VVexRiscv___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VVexRiscv___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VVexRiscv___024root*>(voidSelf);
    VVexRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VVexRiscv___024root__trace_decl_types(tracep);
    VVexRiscv___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VVexRiscv___024root__trace_register(VVexRiscv___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VVexRiscv::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VVexRiscv::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VVexRiscv___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
