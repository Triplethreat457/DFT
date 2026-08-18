// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__ico\n"); );
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

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.scan_chain__DOT__scan_input = vlSelfRef.scan_input;
    vlSelfRef.scan_chain__DOT__Q[0U] = vlSelfRef.scan_chain__DOT__ff1__DOT__Q;
    vlSelfRef.scan_chain__DOT__Q[1U] = vlSelfRef.scan_chain__DOT__ff2__DOT__Q;
    vlSelfRef.scan_chain__DOT__Q[2U] = vlSelfRef.scan_chain__DOT__ff3__DOT__Q;
    vlSelfRef.scan_chain__DOT__Q[3U] = vlSelfRef.scan_chain__DOT__ff4__DOT__Q;
    vlSelfRef.scan_chain__DOT__clk = vlSelfRef.clk;
    vlSelfRef.scan_chain__DOT__reset = vlSelfRef.reset;
    vlSelfRef.scan_chain__DOT__scan_enable = vlSelfRef.scan_enable;
    vlSelfRef.scan_chain__DOT__d = vlSelfRef.d;
    vlSelfRef.scan_chain__DOT__ff4__DOT__so = vlSelfRef.scan_chain__DOT__ff4__DOT__Q;
    vlSelfRef.scan_chain__DOT__ff3__DOT__so = vlSelfRef.scan_chain__DOT__ff3__DOT__Q;
    vlSelfRef.scan_chain__DOT__ff2__DOT__so = vlSelfRef.scan_chain__DOT__ff2__DOT__Q;
    vlSelfRef.scan_chain__DOT__ff1__DOT__so = vlSelfRef.scan_chain__DOT__ff1__DOT__Q;
    vlSelfRef.scan_chain__DOT__ff1__DOT__scan_input 
        = vlSelfRef.scan_chain__DOT__scan_input;
    vlSelfRef.Q = vlSelfRef.scan_chain__DOT__Q;
    vlSelfRef.scan_chain__DOT__ff4__DOT__clk = vlSelfRef.scan_chain__DOT__clk;
    vlSelfRef.scan_chain__DOT__ff3__DOT__clk = vlSelfRef.scan_chain__DOT__clk;
    vlSelfRef.scan_chain__DOT__ff2__DOT__clk = vlSelfRef.scan_chain__DOT__clk;
    vlSelfRef.scan_chain__DOT__ff1__DOT__clk = vlSelfRef.scan_chain__DOT__clk;
    vlSelfRef.scan_chain__DOT__ff4__DOT__reset = vlSelfRef.scan_chain__DOT__reset;
    vlSelfRef.scan_chain__DOT__ff3__DOT__reset = vlSelfRef.scan_chain__DOT__reset;
    vlSelfRef.scan_chain__DOT__ff2__DOT__reset = vlSelfRef.scan_chain__DOT__reset;
    vlSelfRef.scan_chain__DOT__ff1__DOT__reset = vlSelfRef.scan_chain__DOT__reset;
    vlSelfRef.scan_chain__DOT__ff4__DOT__scan_enable 
        = vlSelfRef.scan_chain__DOT__scan_enable;
    vlSelfRef.scan_chain__DOT__ff3__DOT__scan_enable 
        = vlSelfRef.scan_chain__DOT__scan_enable;
    vlSelfRef.scan_chain__DOT__ff2__DOT__scan_enable 
        = vlSelfRef.scan_chain__DOT__scan_enable;
    vlSelfRef.scan_chain__DOT__ff1__DOT__scan_enable 
        = vlSelfRef.scan_chain__DOT__scan_enable;
    vlSelfRef.scan_chain__DOT__ff4__DOT__d = vlSelfRef.scan_chain__DOT__d[3U];
    vlSelfRef.scan_chain__DOT__ff3__DOT__d = vlSelfRef.scan_chain__DOT__d[2U];
    vlSelfRef.scan_chain__DOT__ff2__DOT__d = vlSelfRef.scan_chain__DOT__d[1U];
    vlSelfRef.scan_chain__DOT__ff1__DOT__d = vlSelfRef.scan_chain__DOT__d[0U];
    vlSelfRef.scan_chain__DOT__so[3U] = vlSelfRef.scan_chain__DOT__ff4__DOT__so;
    vlSelfRef.scan_chain__DOT__so[2U] = vlSelfRef.scan_chain__DOT__ff3__DOT__so;
    vlSelfRef.scan_chain__DOT__so[1U] = vlSelfRef.scan_chain__DOT__ff2__DOT__so;
    vlSelfRef.scan_chain__DOT__so[0U] = vlSelfRef.scan_chain__DOT__ff1__DOT__so;
    vlSelfRef.scan_chain__DOT__ff4__DOT__scan_input 
        = vlSelfRef.scan_chain__DOT__so[2U];
    vlSelfRef.scan_chain__DOT__ff3__DOT__scan_input 
        = vlSelfRef.scan_chain__DOT__so[1U];
    vlSelfRef.scan_chain__DOT__ff2__DOT__scan_input 
        = vlSelfRef.scan_chain__DOT__so[0U];
    vlSelfRef.scan_chain__DOT__scan_out = vlSelfRef.scan_chain__DOT__so[3U];
    vlSelfRef.scan_out = vlSelfRef.scan_chain__DOT__scan_out;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__ico
        vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                          & vlSelfRef.__VicoTriggered[0U]) 
                                         | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vtop___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        {
            // Inlined CFunc: _eval_ico
            if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
                Vtop___024root___ico_sequent__TOP__0(vlSelf);
            }
        }
    }
    return (__VicoExecute);
}

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__act\n"); );
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

void Vtop___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        (((((IData)(vlSelfRef.scan_chain__DOT__ff1__DOT__clk) 
                                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__scan_chain__DOT__ff1__DOT__clk__0))) 
                                                           << 3U) 
                                                          | (((IData)(vlSelfRef.scan_chain__DOT__ff2__DOT__clk) 
                                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__scan_chain__DOT__ff2__DOT__clk__0))) 
                                                             << 2U)) 
                                                         | ((((IData)(vlSelfRef.scan_chain__DOT__ff3__DOT__clk) 
                                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__scan_chain__DOT__ff3__DOT__clk__0))) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.scan_chain__DOT__ff4__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__scan_chain__DOT__ff4__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__scan_chain__DOT__ff4__DOT__clk__0 
            = vlSelfRef.scan_chain__DOT__ff4__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__scan_chain__DOT__ff3__DOT__clk__0 
            = vlSelfRef.scan_chain__DOT__ff3__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__scan_chain__DOT__ff2__DOT__clk__0 
            = vlSelfRef.scan_chain__DOT__ff2__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__scan_chain__DOT__ff1__DOT__clk__0 
            = vlSelfRef.scan_chain__DOT__ff1__DOT__clk;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtop___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vtop___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtop___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__0
                    vlSelfRef.scan_chain__DOT__ff4__DOT__Q 
                        = ((IData)(vlSelfRef.scan_chain__DOT__ff4__DOT__reset)
                            ? 0U : ((IData)(vlSelfRef.scan_chain__DOT__ff4__DOT__scan_enable)
                                     ? (IData)(vlSelfRef.scan_chain__DOT__ff4__DOT__scan_input)
                                     : (IData)(vlSelfRef.scan_chain__DOT__ff4__DOT__d)));
                    vlSelfRef.scan_chain__DOT__Q[3U] 
                        = vlSelfRef.scan_chain__DOT__ff4__DOT__Q;
                    vlSelfRef.scan_chain__DOT__ff4__DOT__so 
                        = vlSelfRef.scan_chain__DOT__ff4__DOT__Q;
                    vlSelfRef.scan_chain__DOT__so[3U] 
                        = vlSelfRef.scan_chain__DOT__ff4__DOT__so;
                }
            }
            if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__1
                    vlSelfRef.scan_chain__DOT__ff3__DOT__Q 
                        = ((IData)(vlSelfRef.scan_chain__DOT__ff3__DOT__reset)
                            ? 0U : ((IData)(vlSelfRef.scan_chain__DOT__ff3__DOT__scan_enable)
                                     ? (IData)(vlSelfRef.scan_chain__DOT__ff3__DOT__scan_input)
                                     : (IData)(vlSelfRef.scan_chain__DOT__ff3__DOT__d)));
                    vlSelfRef.scan_chain__DOT__Q[2U] 
                        = vlSelfRef.scan_chain__DOT__ff3__DOT__Q;
                    vlSelfRef.scan_chain__DOT__ff3__DOT__so 
                        = vlSelfRef.scan_chain__DOT__ff3__DOT__Q;
                    vlSelfRef.scan_chain__DOT__so[2U] 
                        = vlSelfRef.scan_chain__DOT__ff3__DOT__so;
                }
            }
            if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__2
                    vlSelfRef.scan_chain__DOT__ff2__DOT__Q 
                        = ((IData)(vlSelfRef.scan_chain__DOT__ff2__DOT__reset)
                            ? 0U : ((IData)(vlSelfRef.scan_chain__DOT__ff2__DOT__scan_enable)
                                     ? (IData)(vlSelfRef.scan_chain__DOT__ff2__DOT__scan_input)
                                     : (IData)(vlSelfRef.scan_chain__DOT__ff2__DOT__d)));
                    vlSelfRef.scan_chain__DOT__Q[1U] 
                        = vlSelfRef.scan_chain__DOT__ff2__DOT__Q;
                    vlSelfRef.scan_chain__DOT__ff2__DOT__so 
                        = vlSelfRef.scan_chain__DOT__ff2__DOT__Q;
                    vlSelfRef.scan_chain__DOT__so[1U] 
                        = vlSelfRef.scan_chain__DOT__ff2__DOT__so;
                }
            }
            if ((8ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__3
                    vlSelfRef.scan_chain__DOT__ff1__DOT__Q 
                        = ((IData)(vlSelfRef.scan_chain__DOT__ff1__DOT__reset)
                            ? 0U : ((IData)(vlSelfRef.scan_chain__DOT__ff1__DOT__scan_enable)
                                     ? (IData)(vlSelfRef.scan_chain__DOT__ff1__DOT__scan_input)
                                     : (IData)(vlSelfRef.scan_chain__DOT__ff1__DOT__d)));
                    vlSelfRef.scan_chain__DOT__Q[0U] 
                        = vlSelfRef.scan_chain__DOT__ff1__DOT__Q;
                    vlSelfRef.scan_chain__DOT__ff1__DOT__so 
                        = vlSelfRef.scan_chain__DOT__ff1__DOT__Q;
                    vlSelfRef.scan_chain__DOT__so[0U] 
                        = vlSelfRef.scan_chain__DOT__ff1__DOT__so;
                }
            }
            if ((0x000000000000000fULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_comb__TOP__0
                    vlSelfRef.Q = vlSelfRef.scan_chain__DOT__Q;
                    vlSelfRef.scan_chain__DOT__ff4__DOT__scan_input 
                        = vlSelfRef.scan_chain__DOT__so[2U];
                    vlSelfRef.scan_chain__DOT__ff3__DOT__scan_input 
                        = vlSelfRef.scan_chain__DOT__so[1U];
                    vlSelfRef.scan_chain__DOT__ff2__DOT__scan_input 
                        = vlSelfRef.scan_chain__DOT__so[0U];
                    vlSelfRef.scan_chain__DOT__scan_out 
                        = vlSelfRef.scan_chain__DOT__so[3U];
                    vlSelfRef.scan_out = vlSelfRef.scan_chain__DOT__scan_out;
                }
            }
        }
        Vtop___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("/Users/triplethreat457/DFT/scan_chain/rtl/scan_chain.sv", 1, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vtop___024root___eval_phase__ico(vlSelf);
        vlSelfRef.__VicoFirstIteration = 0U;
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/Users/triplethreat457/DFT/scan_chain/rtl/scan_chain.sv", 1, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/Users/triplethreat457/DFT/scan_chain/rtl/scan_chain.sv", 1, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vtop___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtop___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
