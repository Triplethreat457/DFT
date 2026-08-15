// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vscan_chain.h for the primary calling header

#include "Vscan_chain__pch.h"

bool Vscan_chain___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscan_chain___024root___trigger_anySet__act\n"); );
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

void Vscan_chain___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscan_chain___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vscan_chain___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vscan_chain___024root___eval_phase__act(Vscan_chain___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscan_chain___024root___eval_phase__act\n"); );
    Vscan_chain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((IData)(vlSelfRef.clk) 
                                                         & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)))));
        vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vscan_chain___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vscan_chain___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vscan_chain___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscan_chain___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vscan_chain___024root___eval_phase__nba(Vscan_chain___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscan_chain___024root___eval_phase__nba\n"); );
    Vscan_chain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vscan_chain___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__0
                    if (vlSelfRef.reset) {
                        vlSelfRef.scan_chain__DOT____Vcellout__ff4__Q = 0U;
                        vlSelfRef.scan_chain__DOT____Vcellout__ff3__Q = 0U;
                        vlSelfRef.scan_chain__DOT____Vcellout__ff2__Q = 0U;
                        vlSelfRef.scan_chain__DOT____Vcellout__ff1__Q = 0U;
                    } else if (vlSelfRef.scan_enable) {
                        vlSelfRef.scan_chain__DOT____Vcellout__ff4__Q 
                            = vlSelfRef.scan_chain__DOT____Vcellout__ff3__Q;
                        vlSelfRef.scan_chain__DOT____Vcellout__ff3__Q 
                            = vlSelfRef.scan_chain__DOT____Vcellout__ff2__Q;
                        vlSelfRef.scan_chain__DOT____Vcellout__ff2__Q 
                            = vlSelfRef.scan_chain__DOT____Vcellout__ff1__Q;
                        vlSelfRef.scan_chain__DOT____Vcellout__ff1__Q 
                            = vlSelfRef.scan_input;
                    } else {
                        vlSelfRef.scan_chain__DOT____Vcellout__ff4__Q 
                            = vlSelfRef.d[3U];
                        vlSelfRef.scan_chain__DOT____Vcellout__ff3__Q 
                            = vlSelfRef.d[2U];
                        vlSelfRef.scan_chain__DOT____Vcellout__ff2__Q 
                            = vlSelfRef.d[1U];
                        vlSelfRef.scan_chain__DOT____Vcellout__ff1__Q 
                            = vlSelfRef.d[0U];
                    }
                    vlSelfRef.scan_out = vlSelfRef.scan_chain__DOT____Vcellout__ff4__Q;
                    vlSelfRef.Q[3U] = vlSelfRef.scan_chain__DOT____Vcellout__ff4__Q;
                    vlSelfRef.scan_chain__DOT__so[3U] 
                        = vlSelfRef.scan_chain__DOT____Vcellout__ff4__Q;
                    vlSelfRef.Q[2U] = vlSelfRef.scan_chain__DOT____Vcellout__ff3__Q;
                    vlSelfRef.scan_chain__DOT__so[2U] 
                        = vlSelfRef.scan_chain__DOT____Vcellout__ff3__Q;
                    vlSelfRef.Q[1U] = vlSelfRef.scan_chain__DOT____Vcellout__ff2__Q;
                    vlSelfRef.scan_chain__DOT__so[1U] 
                        = vlSelfRef.scan_chain__DOT____Vcellout__ff2__Q;
                    vlSelfRef.Q[0U] = vlSelfRef.scan_chain__DOT____Vcellout__ff1__Q;
                    vlSelfRef.scan_chain__DOT__so[0U] 
                        = vlSelfRef.scan_chain__DOT____Vcellout__ff1__Q;
                }
                vlSelfRef.__Vm_traceActivity[1U] = 1U;
            }
        }
        Vscan_chain___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vscan_chain___024root___eval(Vscan_chain___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscan_chain___024root___eval\n"); );
    Vscan_chain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vscan_chain___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("rtl/scan_chain.sv", 1, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vscan_chain___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("rtl/scan_chain.sv", 1, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vscan_chain___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vscan_chain___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vscan_chain___024root___eval_debug_assertions(Vscan_chain___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscan_chain___024root___eval_debug_assertions\n"); );
    Vscan_chain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");
    }
    if (VL_UNLIKELY(((vlSelfRef.scan_enable & 0xfeU)))) {
        Verilated::overWidthError("scan_enable");
    }
}
#endif  // VL_DEBUG
