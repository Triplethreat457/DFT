// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__scan_chain__DOT__ff4__DOT__clk__0 
        = vlSelfRef.scan_chain__DOT__ff4__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__scan_chain__DOT__ff3__DOT__clk__0 
        = vlSelfRef.scan_chain__DOT__ff3__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__scan_chain__DOT__ff2__DOT__clk__0 
        = vlSelfRef.scan_chain__DOT__ff2__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__scan_chain__DOT__ff1__DOT__clk__0 
        = vlSelfRef.scan_chain__DOT__ff1__DOT__clk;
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("/Users/triplethreat457/DFT/scan_chain/rtl/scan_chain.sv", 1, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtop___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__stl\n"); );
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

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
        Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtop___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vtop___024root___ico_sequent__TOP__0(vlSelf);
            }
        }
    }
    return (__VstlExecute);
}

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge scan_chain.ff4.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge scan_chain.ff3.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge scan_chain.ff2.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(posedge scan_chain.ff1.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
    vlSelf->scan_chain__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6333457417570385507ull);
    vlSelf->scan_chain__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4266250448008527912ull);
    vlSelf->scan_chain__DOT__scan_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 294061562697706028ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->scan_chain__DOT__d[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7308614485656261245ull);
    }
    vlSelf->scan_chain__DOT__scan_input = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 292766480980222456ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->scan_chain__DOT__Q[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9919194512531828939ull);
    }
    vlSelf->scan_chain__DOT__scan_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3152471634077288347ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->scan_chain__DOT__so[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1515699831876080567ull);
    }
    vlSelf->scan_chain__DOT__ff4__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1241685791232425920ull);
    vlSelf->scan_chain__DOT__ff4__DOT__scan_input = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14800120956301351028ull);
    vlSelf->scan_chain__DOT__ff4__DOT__d = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17966156544412554396ull);
    vlSelf->scan_chain__DOT__ff4__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13823138285684585381ull);
    vlSelf->scan_chain__DOT__ff4__DOT__scan_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7327536258027576470ull);
    vlSelf->scan_chain__DOT__ff4__DOT__Q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4896892334552265320ull);
    vlSelf->scan_chain__DOT__ff4__DOT__so = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15264807441990417653ull);
    vlSelf->scan_chain__DOT__ff3__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10370045939975773173ull);
    vlSelf->scan_chain__DOT__ff3__DOT__scan_input = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12553477471970710926ull);
    vlSelf->scan_chain__DOT__ff3__DOT__d = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14212477332005119191ull);
    vlSelf->scan_chain__DOT__ff3__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12954913945128497897ull);
    vlSelf->scan_chain__DOT__ff3__DOT__scan_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6150964887438728099ull);
    vlSelf->scan_chain__DOT__ff3__DOT__Q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3019396039002645308ull);
    vlSelf->scan_chain__DOT__ff3__DOT__so = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15508255377408362194ull);
    vlSelf->scan_chain__DOT__ff2__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15789088300450489750ull);
    vlSelf->scan_chain__DOT__ff2__DOT__scan_input = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10328345094982655094ull);
    vlSelf->scan_chain__DOT__ff2__DOT__d = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16920211660501684584ull);
    vlSelf->scan_chain__DOT__ff2__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13129251300623805422ull);
    vlSelf->scan_chain__DOT__ff2__DOT__scan_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10634711007206859884ull);
    vlSelf->scan_chain__DOT__ff2__DOT__Q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4523669553823867482ull);
    vlSelf->scan_chain__DOT__ff2__DOT__so = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10162510949660517088ull);
    vlSelf->scan_chain__DOT__ff1__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4924308695905551090ull);
    vlSelf->scan_chain__DOT__ff1__DOT__scan_input = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5551744131827222861ull);
    vlSelf->scan_chain__DOT__ff1__DOT__d = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7863627743235063390ull);
    vlSelf->scan_chain__DOT__ff1__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 248042793977353399ull);
    vlSelf->scan_chain__DOT__ff1__DOT__scan_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15129766052528757771ull);
    vlSelf->scan_chain__DOT__ff1__DOT__Q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7797197442037347895ull);
    vlSelf->scan_chain__DOT__ff1__DOT__so = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3639778302862402891ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__scan_chain__DOT__ff4__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__scan_chain__DOT__ff3__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__scan_chain__DOT__ff2__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__scan_chain__DOT__ff1__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
