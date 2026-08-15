// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vscan_ff.h for the primary calling header

#include "Vscan_ff__pch.h"

VL_ATTR_COLD void Vscan_ff___024root___eval_static(Vscan_ff___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscan_ff___024root___eval_static\n"); );
    Vscan_ff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vscan_ff___024root___eval_initial(Vscan_ff___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscan_ff___024root___eval_initial\n"); );
    Vscan_ff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vscan_ff___024root___eval_final(Vscan_ff___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscan_ff___024root___eval_final\n"); );
    Vscan_ff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vscan_ff___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vscan_ff___024root___eval_phase__stl(Vscan_ff___024root* vlSelf);

VL_ATTR_COLD void Vscan_ff___024root___eval_settle(Vscan_ff___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscan_ff___024root___eval_settle\n"); );
    Vscan_ff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vscan_ff___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("rtl/scan_ff.sv", 1, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vscan_ff___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool Vscan_ff___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vscan_ff___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscan_ff___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vscan_ff___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vscan_ff___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscan_ff___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD bool Vscan_ff___024root___eval_phase__stl(Vscan_ff___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscan_ff___024root___eval_phase__stl\n"); );
    Vscan_ff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
        Vscan_ff___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vscan_ff___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                {
                    // Inlined CFunc: _stl_sequent__TOP__0
                    vlSelfRef.so = vlSelfRef.Q;
                }
            }
        }
    }
    return (__VstlExecute);
}

bool Vscan_ff___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vscan_ff___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscan_ff___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vscan_ff___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vscan_ff___024root___ctor_var_reset(Vscan_ff___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscan_ff___024root___ctor_var_reset\n"); );
    Vscan_ff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->scan_input = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9701925026116970123ull);
    vlSelf->d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1720370409040345145ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->scan_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9871774477223196697ull);
    vlSelf->Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17714545831559622561ull);
    vlSelf->so = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1100368490888262032ull);
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
}
