// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_dtype____0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 4>& __VdtypeVar);

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    bufp->chgBit(oldp+0,(vlSelfRef.clk));
    bufp->chgBit(oldp+1,(vlSelfRef.reset));
    bufp->chgBit(oldp+2,(vlSelfRef.scan_enable));
    Vtop___024root__trace_chg_dtype____0(vlSelf, bufp, 3, vlSelfRef.d);
    bufp->chgCData(oldp+7,(vlSelfRef.scan_input),8);
    bufp->chgCData(oldp+8,(vlSelfRef.Q[0]),8);
    bufp->chgCData(oldp+9,(vlSelfRef.Q[1]),8);
    bufp->chgCData(oldp+10,(vlSelfRef.Q[2]),8);
    bufp->chgCData(oldp+11,(vlSelfRef.Q[3]),8);
    bufp->chgCData(oldp+12,(vlSelfRef.scan_out),8);
    bufp->chgBit(oldp+13,(vlSelfRef.scan_chain__DOT__clk));
    bufp->chgBit(oldp+14,(vlSelfRef.scan_chain__DOT__reset));
    bufp->chgBit(oldp+15,(vlSelfRef.scan_chain__DOT__scan_enable));
    bufp->chgCData(oldp+16,(vlSelfRef.scan_chain__DOT__d[0]),8);
    bufp->chgCData(oldp+17,(vlSelfRef.scan_chain__DOT__d[1]),8);
    bufp->chgCData(oldp+18,(vlSelfRef.scan_chain__DOT__d[2]),8);
    bufp->chgCData(oldp+19,(vlSelfRef.scan_chain__DOT__d[3]),8);
    bufp->chgCData(oldp+20,(vlSelfRef.scan_chain__DOT__scan_input),8);
    bufp->chgCData(oldp+21,(vlSelfRef.scan_chain__DOT__Q[0]),8);
    bufp->chgCData(oldp+22,(vlSelfRef.scan_chain__DOT__Q[1]),8);
    bufp->chgCData(oldp+23,(vlSelfRef.scan_chain__DOT__Q[2]),8);
    bufp->chgCData(oldp+24,(vlSelfRef.scan_chain__DOT__Q[3]),8);
    bufp->chgCData(oldp+25,(vlSelfRef.scan_chain__DOT__scan_out),8);
    bufp->chgCData(oldp+26,(vlSelfRef.scan_chain__DOT__so[0]),8);
    bufp->chgCData(oldp+27,(vlSelfRef.scan_chain__DOT__so[1]),8);
    bufp->chgCData(oldp+28,(vlSelfRef.scan_chain__DOT__so[2]),8);
    bufp->chgCData(oldp+29,(vlSelfRef.scan_chain__DOT__so[3]),8);
    bufp->chgBit(oldp+30,(vlSelfRef.scan_chain__DOT__ff1__DOT__clk));
    bufp->chgCData(oldp+31,(vlSelfRef.scan_chain__DOT__ff1__DOT__scan_input),8);
    bufp->chgCData(oldp+32,(vlSelfRef.scan_chain__DOT__ff1__DOT__d),8);
    bufp->chgBit(oldp+33,(vlSelfRef.scan_chain__DOT__ff1__DOT__reset));
    bufp->chgBit(oldp+34,(vlSelfRef.scan_chain__DOT__ff1__DOT__scan_enable));
    bufp->chgCData(oldp+35,(vlSelfRef.scan_chain__DOT__ff1__DOT__Q),8);
    bufp->chgCData(oldp+36,(vlSelfRef.scan_chain__DOT__ff1__DOT__so),8);
    bufp->chgBit(oldp+37,(vlSelfRef.scan_chain__DOT__ff2__DOT__clk));
    bufp->chgCData(oldp+38,(vlSelfRef.scan_chain__DOT__ff2__DOT__scan_input),8);
    bufp->chgCData(oldp+39,(vlSelfRef.scan_chain__DOT__ff2__DOT__d),8);
    bufp->chgBit(oldp+40,(vlSelfRef.scan_chain__DOT__ff2__DOT__reset));
    bufp->chgBit(oldp+41,(vlSelfRef.scan_chain__DOT__ff2__DOT__scan_enable));
    bufp->chgCData(oldp+42,(vlSelfRef.scan_chain__DOT__ff2__DOT__Q),8);
    bufp->chgCData(oldp+43,(vlSelfRef.scan_chain__DOT__ff2__DOT__so),8);
    bufp->chgBit(oldp+44,(vlSelfRef.scan_chain__DOT__ff3__DOT__clk));
    bufp->chgCData(oldp+45,(vlSelfRef.scan_chain__DOT__ff3__DOT__scan_input),8);
    bufp->chgCData(oldp+46,(vlSelfRef.scan_chain__DOT__ff3__DOT__d),8);
    bufp->chgBit(oldp+47,(vlSelfRef.scan_chain__DOT__ff3__DOT__reset));
    bufp->chgBit(oldp+48,(vlSelfRef.scan_chain__DOT__ff3__DOT__scan_enable));
    bufp->chgCData(oldp+49,(vlSelfRef.scan_chain__DOT__ff3__DOT__Q),8);
    bufp->chgCData(oldp+50,(vlSelfRef.scan_chain__DOT__ff3__DOT__so),8);
    bufp->chgBit(oldp+51,(vlSelfRef.scan_chain__DOT__ff4__DOT__clk));
    bufp->chgCData(oldp+52,(vlSelfRef.scan_chain__DOT__ff4__DOT__scan_input),8);
    bufp->chgCData(oldp+53,(vlSelfRef.scan_chain__DOT__ff4__DOT__d),8);
    bufp->chgBit(oldp+54,(vlSelfRef.scan_chain__DOT__ff4__DOT__reset));
    bufp->chgBit(oldp+55,(vlSelfRef.scan_chain__DOT__ff4__DOT__scan_enable));
    bufp->chgCData(oldp+56,(vlSelfRef.scan_chain__DOT__ff4__DOT__Q),8);
    bufp->chgCData(oldp+57,(vlSelfRef.scan_chain__DOT__ff4__DOT__so),8);
}

void Vtop___024root__trace_chg_dtype____0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[0]),8);
    bufp->chgCData(oldp+1,(__VdtypeVar[1]),8);
    bufp->chgCData(oldp+2,(__VdtypeVar[2]),8);
    bufp->chgCData(oldp+3,(__VdtypeVar[3]),8);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Locals
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
