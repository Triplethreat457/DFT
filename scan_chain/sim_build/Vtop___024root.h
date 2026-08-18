// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(scan_enable,0,0);
    VL_IN8(scan_input,7,0);
    VL_OUT8(scan_out,7,0);
    CData/*0:0*/ scan_chain__DOT__clk;
    CData/*0:0*/ scan_chain__DOT__reset;
    CData/*0:0*/ scan_chain__DOT__scan_enable;
    CData/*7:0*/ scan_chain__DOT__scan_input;
    CData/*7:0*/ scan_chain__DOT__scan_out;
    CData/*0:0*/ scan_chain__DOT__ff4__DOT__clk;
    CData/*7:0*/ scan_chain__DOT__ff4__DOT__scan_input;
    CData/*7:0*/ scan_chain__DOT__ff4__DOT__d;
    CData/*0:0*/ scan_chain__DOT__ff4__DOT__reset;
    CData/*0:0*/ scan_chain__DOT__ff4__DOT__scan_enable;
    CData/*7:0*/ scan_chain__DOT__ff4__DOT__Q;
    CData/*7:0*/ scan_chain__DOT__ff4__DOT__so;
    CData/*0:0*/ scan_chain__DOT__ff3__DOT__clk;
    CData/*7:0*/ scan_chain__DOT__ff3__DOT__scan_input;
    CData/*7:0*/ scan_chain__DOT__ff3__DOT__d;
    CData/*0:0*/ scan_chain__DOT__ff3__DOT__reset;
    CData/*0:0*/ scan_chain__DOT__ff3__DOT__scan_enable;
    CData/*7:0*/ scan_chain__DOT__ff3__DOT__Q;
    CData/*7:0*/ scan_chain__DOT__ff3__DOT__so;
    CData/*0:0*/ scan_chain__DOT__ff2__DOT__clk;
    CData/*7:0*/ scan_chain__DOT__ff2__DOT__scan_input;
    CData/*7:0*/ scan_chain__DOT__ff2__DOT__d;
    CData/*0:0*/ scan_chain__DOT__ff2__DOT__reset;
    CData/*0:0*/ scan_chain__DOT__ff2__DOT__scan_enable;
    CData/*7:0*/ scan_chain__DOT__ff2__DOT__Q;
    CData/*7:0*/ scan_chain__DOT__ff2__DOT__so;
    CData/*0:0*/ scan_chain__DOT__ff1__DOT__clk;
    CData/*7:0*/ scan_chain__DOT__ff1__DOT__scan_input;
    CData/*7:0*/ scan_chain__DOT__ff1__DOT__d;
    CData/*0:0*/ scan_chain__DOT__ff1__DOT__reset;
    CData/*0:0*/ scan_chain__DOT__ff1__DOT__scan_enable;
    CData/*7:0*/ scan_chain__DOT__ff1__DOT__Q;
    CData/*7:0*/ scan_chain__DOT__ff1__DOT__so;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VicoPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__scan_chain__DOT__ff4__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__scan_chain__DOT__ff3__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__scan_chain__DOT__ff2__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__scan_chain__DOT__ff1__DOT__clk__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 4> d;
    VlUnpacked<CData/*7:0*/, 4> Q;
    VlUnpacked<CData/*7:0*/, 4> scan_chain__DOT__d;
    VlUnpacked<CData/*7:0*/, 4> scan_chain__DOT__Q;
    VlUnpacked<CData/*7:0*/, 4> scan_chain__DOT__so;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr IData/*31:0*/ scan_chain__DOT__width = 8U;
    static constexpr IData/*31:0*/ scan_chain__DOT__ff4__DOT__width = 8U;
    static constexpr IData/*31:0*/ scan_chain__DOT__ff3__DOT__width = 8U;
    static constexpr IData/*31:0*/ scan_chain__DOT__ff2__DOT__width = 8U;
    static constexpr IData/*31:0*/ scan_chain__DOT__ff1__DOT__width = 8U;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* namep);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
