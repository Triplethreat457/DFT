// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vscan_chain__Syms.h"


void Vscan_chain___024root__trace_chg_0_sub_0(Vscan_chain___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vscan_chain___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscan_chain___024root__trace_chg_0\n"); );
    // Body
    Vscan_chain___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vscan_chain___024root*>(voidSelf);
    Vscan_chain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vscan_chain___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vscan_chain___024root__trace_chg_dtype____0(Vscan_chain___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 4>& __VdtypeVar);
void Vscan_chain___024root__trace_chg_dtype____1(Vscan_chain___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 4>& __VdtypeVar);

void Vscan_chain___024root__trace_chg_0_sub_0(Vscan_chain___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscan_chain___024root__trace_chg_0_sub_0\n"); );
    Vscan_chain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgCData(oldp+0,(vlSelfRef.scan_chain__DOT____Vcellout__ff4__Q),8);
        bufp->chgCData(oldp+1,(vlSelfRef.scan_chain__DOT__so[0]),8);
        bufp->chgCData(oldp+2,(vlSelfRef.scan_chain__DOT__so[1]),8);
        bufp->chgCData(oldp+3,(vlSelfRef.scan_chain__DOT__so[2]),8);
        bufp->chgCData(oldp+4,(vlSelfRef.scan_chain__DOT__so[3]),8);
        bufp->chgCData(oldp+5,(vlSelfRef.scan_chain__DOT____Vcellout__ff1__Q),8);
        bufp->chgCData(oldp+6,(vlSelfRef.scan_chain__DOT____Vcellout__ff2__Q),8);
        bufp->chgCData(oldp+7,(vlSelfRef.scan_chain__DOT____Vcellout__ff3__Q),8);
    }
    bufp->chgBit(oldp+8,(vlSelfRef.clk));
    bufp->chgBit(oldp+9,(vlSelfRef.reset));
    bufp->chgBit(oldp+10,(vlSelfRef.scan_enable));
    Vscan_chain___024root__trace_chg_dtype____0(vlSelf, bufp, 11, vlSelfRef.d);
    bufp->chgCData(oldp+15,(vlSelfRef.scan_input),8);
    Vscan_chain___024root__trace_chg_dtype____1(vlSelf, bufp, 16, vlSelfRef.Q);
    bufp->chgCData(oldp+20,(vlSelfRef.d[0U]),8);
    bufp->chgCData(oldp+21,(vlSelfRef.d[1U]),8);
    bufp->chgCData(oldp+22,(vlSelfRef.d[2U]),8);
    bufp->chgCData(oldp+23,(vlSelfRef.d[3U]),8);
}

void Vscan_chain___024root__trace_chg_dtype____0(Vscan_chain___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscan_chain___024root__trace_chg_dtype____0\n"); );
    Vscan_chain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[0]),8);
    bufp->chgCData(oldp+1,(__VdtypeVar[1]),8);
    bufp->chgCData(oldp+2,(__VdtypeVar[2]),8);
    bufp->chgCData(oldp+3,(__VdtypeVar[3]),8);
}

void Vscan_chain___024root__trace_chg_dtype____1(Vscan_chain___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscan_chain___024root__trace_chg_dtype____1\n"); );
    Vscan_chain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[0]),8);
    bufp->chgCData(oldp+1,(__VdtypeVar[1]),8);
    bufp->chgCData(oldp+2,(__VdtypeVar[2]),8);
    bufp->chgCData(oldp+3,(__VdtypeVar[3]),8);
}

void Vscan_chain___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscan_chain___024root__trace_cleanup\n"); );
    // Body
    Vscan_chain___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vscan_chain___024root*>(voidSelf);
    Vscan_chain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
