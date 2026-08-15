// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vscan_chain.h for the primary calling header

#ifndef VERILATED_VSCAN_CHAIN___024ROOT_H_
#define VERILATED_VSCAN_CHAIN___024ROOT_H_  // guard

#include "verilated.h"


class Vscan_chain__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vscan_chain___024root final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(scan_enable,0,0);
    VL_IN8(scan_input,7,0);
    VL_OUT8(scan_out,7,0);
    CData/*7:0*/ scan_chain__DOT____Vcellout__ff1__Q;
    CData/*7:0*/ scan_chain__DOT____Vcellout__ff2__Q;
    CData/*7:0*/ scan_chain__DOT____Vcellout__ff3__Q;
    CData/*7:0*/ scan_chain__DOT____Vcellout__ff4__Q;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 4> d;
    VlUnpacked<CData/*7:0*/, 4> Q;
    VlUnpacked<CData/*7:0*/, 4> scan_chain__DOT__so;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vscan_chain__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vscan_chain___024root(Vscan_chain__Syms* symsp, const char* namep);
    ~Vscan_chain___024root();
    VL_UNCOPYABLE(Vscan_chain___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
