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

VL_ATTR_COLD void Vscan_ff___024root___eval_settle(Vscan_ff___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscan_ff___024root___eval_settle\n"); );
    Vscan_ff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
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
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
