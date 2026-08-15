// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vscan_chain.h for the primary calling header

#include "Vscan_chain__pch.h"

VL_ATTR_COLD void Vscan_chain___024root___eval_static(Vscan_chain___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscan_chain___024root___eval_static\n"); );
    Vscan_chain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vscan_chain___024root___eval_initial(Vscan_chain___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscan_chain___024root___eval_initial\n"); );
    Vscan_chain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vscan_chain___024root___eval_final(Vscan_chain___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscan_chain___024root___eval_final\n"); );
    Vscan_chain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vscan_chain___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vscan_chain___024root___eval_phase__stl(Vscan_chain___024root* vlSelf);

VL_ATTR_COLD void Vscan_chain___024root___eval_settle(Vscan_chain___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscan_chain___024root___eval_settle\n"); );
    Vscan_chain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vscan_chain___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("rtl/scan_chain.sv", 1, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vscan_chain___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool Vscan_chain___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vscan_chain___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscan_chain___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vscan_chain___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vscan_chain___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscan_chain___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

VL_ATTR_COLD bool Vscan_chain___024root___eval_phase__stl(Vscan_chain___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscan_chain___024root___eval_phase__stl\n"); );
    Vscan_chain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__stl
        vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                          & vlSelfRef.__VstlTriggered[0U]) 
                                         | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vscan_chain___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vscan_chain___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                {
                    // Inlined CFunc: _stl_sequent__TOP__0
                    vlSelfRef.scan_out = vlSelfRef.scan_chain__DOT____Vcellout__ff4__Q;
                    vlSelfRef.Q[0U] = vlSelfRef.scan_chain__DOT____Vcellout__ff1__Q;
                    vlSelfRef.Q[1U] = vlSelfRef.scan_chain__DOT____Vcellout__ff2__Q;
                    vlSelfRef.Q[2U] = vlSelfRef.scan_chain__DOT____Vcellout__ff3__Q;
                    vlSelfRef.Q[3U] = vlSelfRef.scan_chain__DOT____Vcellout__ff4__Q;
                    vlSelfRef.scan_chain__DOT__so[0U] 
                        = vlSelfRef.scan_chain__DOT____Vcellout__ff1__Q;
                    vlSelfRef.scan_chain__DOT__so[1U] 
                        = vlSelfRef.scan_chain__DOT____Vcellout__ff2__Q;
                    vlSelfRef.scan_chain__DOT__so[2U] 
                        = vlSelfRef.scan_chain__DOT____Vcellout__ff3__Q;
                    vlSelfRef.scan_chain__DOT__so[3U] 
                        = vlSelfRef.scan_chain__DOT____Vcellout__ff4__Q;
                }
                {
                    // Inlined CFunc: __Vm_traceActivitySetAll
                    vlSelfRef.__Vm_traceActivity[0U] = 1U;
                    vlSelfRef.__Vm_traceActivity[1U] = 1U;
                }
            }
        }
    }
    return (__VstlExecute);
}

bool Vscan_chain___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vscan_chain___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscan_chain___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vscan_chain___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vscan_chain___024root___ctor_var_reset(Vscan_chain___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscan_chain___024root___ctor_var_reset\n"); );
    Vscan_chain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->scan_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9871774477223196697ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->d[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1720370409040345145ull);
    }
    vlSelf->scan_input = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9701925026116970123ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Q[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17714545831559622561ull);
    }
    vlSelf->scan_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12362897983865769528ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->scan_chain__DOT__so[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1515699831876080567ull);
    }
    vlSelf->scan_chain__DOT____Vcellout__ff1__Q = 0;
    vlSelf->scan_chain__DOT____Vcellout__ff2__Q = 0;
    vlSelf->scan_chain__DOT____Vcellout__ff3__Q = 0;
    vlSelf->scan_chain__DOT____Vcellout__ff4__Q = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
