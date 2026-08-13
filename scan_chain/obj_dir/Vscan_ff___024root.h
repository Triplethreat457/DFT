// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vscan_ff.h for the primary calling header

#ifndef VERILATED_VSCAN_FF___024ROOT_H_
#define VERILATED_VSCAN_FF___024ROOT_H_  // guard

#include "verilated.h"


class Vscan_ff__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vscan_ff___024root final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(scan_input,0,0);
    VL_IN8(d,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(scan_enable,0,0);
    VL_OUT8(Q,0,0);
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vscan_ff__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vscan_ff___024root(Vscan_ff__Syms* symsp, const char* namep);
    ~Vscan_ff___024root();
    VL_UNCOPYABLE(Vscan_ff___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
