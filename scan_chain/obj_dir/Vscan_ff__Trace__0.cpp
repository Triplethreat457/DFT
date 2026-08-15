// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vscan_ff__Syms.h"


void Vscan_ff___024root__trace_chg_0_sub_0(Vscan_ff___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vscan_ff___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscan_ff___024root__trace_chg_0\n"); );
    // Body
    Vscan_ff___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vscan_ff___024root*>(voidSelf);
    Vscan_ff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vscan_ff___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vscan_ff___024root__trace_chg_0_sub_0(Vscan_ff___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscan_ff___024root__trace_chg_0_sub_0\n"); );
    Vscan_ff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    bufp->chgBit(oldp+0,(vlSelfRef.clk));
    bufp->chgBit(oldp+1,(vlSelfRef.scan_input));
    bufp->chgBit(oldp+2,(vlSelfRef.d));
    bufp->chgBit(oldp+3,(vlSelfRef.reset));
    bufp->chgBit(oldp+4,(vlSelfRef.scan_enable));
    bufp->chgBit(oldp+5,(vlSelfRef.Q));
}

void Vscan_ff___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscan_ff___024root__trace_cleanup\n"); );
    // Locals
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    Vscan_ff___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vscan_ff___024root*>(voidSelf);
    Vscan_ff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
