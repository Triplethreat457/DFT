// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vscan_ff__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vscan_ff::Vscan_ff(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vscan_ff__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , scan_input{vlSymsp->TOP.scan_input}
    , d{vlSymsp->TOP.d}
    , reset{vlSymsp->TOP.reset}
    , scan_enable{vlSymsp->TOP.scan_enable}
    , Q{vlSymsp->TOP.Q}
    , so{vlSymsp->TOP.so}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vscan_ff::Vscan_ff(const char* _vcname__)
    : Vscan_ff(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vscan_ff::~Vscan_ff() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vscan_ff___024root___eval_debug_assertions(Vscan_ff___024root* vlSelf);
#endif  // VL_DEBUG
void Vscan_ff___024root___eval_static(Vscan_ff___024root* vlSelf);
void Vscan_ff___024root___eval_initial(Vscan_ff___024root* vlSelf);
void Vscan_ff___024root___eval_settle(Vscan_ff___024root* vlSelf);
void Vscan_ff___024root___eval(Vscan_ff___024root* vlSelf);

void Vscan_ff::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vscan_ff::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vscan_ff___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vscan_ff___024root___eval_static(&(vlSymsp->TOP));
        Vscan_ff___024root___eval_initial(&(vlSymsp->TOP));
        Vscan_ff___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vscan_ff___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vscan_ff::eventsPending() { return false; }

uint64_t Vscan_ff::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vscan_ff::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vscan_ff___024root___eval_final(Vscan_ff___024root* vlSelf);

VL_ATTR_COLD void Vscan_ff::final() {
    contextp()->executingFinal(true);
    Vscan_ff___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vscan_ff::hierName() const { return vlSymsp->name(); }
const char* Vscan_ff::modelName() const { return "Vscan_ff"; }
unsigned Vscan_ff::threads() const { return 1; }
void Vscan_ff::prepareClone() const { contextp()->prepareClone(); }
void Vscan_ff::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vscan_ff::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void Vscan_ff___024root__trace_decl_types(VerilatedVcd* tracep);

void Vscan_ff___024root__trace_init_top(Vscan_ff___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vscan_ff___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vscan_ff___024root*>(voidSelf);
    Vscan_ff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vscan_ff___024root__trace_decl_types(tracep);
    Vscan_ff___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vscan_ff___024root__trace_register(Vscan_ff___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vscan_ff::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vscan_ff::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 7);
    Vscan_ff___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
