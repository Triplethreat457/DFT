// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vscan_ff__Syms.h"


VL_ATTR_COLD void Vscan_ff___024root__trace_init_sub__TOP__0(Vscan_ff___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscan_ff___024root__trace_init_sub__TOP__0\n"); );
    Vscan_ff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "$rootio", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"scan_input",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BIT(tracep,c+3,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+4,0,"scan_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"so",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "scan_ff", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"scan_input",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BIT(tracep,c+3,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+4,0,"scan_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"so",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vscan_ff___024root__trace_init_top(Vscan_ff___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscan_ff___024root__trace_init_top\n"); );
    Vscan_ff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vscan_ff___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vscan_ff___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vscan_ff___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vscan_ff___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vscan_ff___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vscan_ff___024root__trace_register(Vscan_ff___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscan_ff___024root__trace_register\n"); );
    Vscan_ff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vscan_ff___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vscan_ff___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vscan_ff___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vscan_ff___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vscan_ff___024root__trace_const_0_sub_0(Vscan_ff___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vscan_ff___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscan_ff___024root__trace_const_0\n"); );
    // Body
    Vscan_ff___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vscan_ff___024root*>(voidSelf);
    Vscan_ff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vscan_ff___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vscan_ff___024root__trace_const_0_sub_0(Vscan_ff___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscan_ff___024root__trace_const_0_sub_0\n"); );
    Vscan_ff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+6,(1U),32);
}

VL_ATTR_COLD void Vscan_ff___024root__trace_full_0_sub_0(Vscan_ff___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vscan_ff___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscan_ff___024root__trace_full_0\n"); );
    // Body
    Vscan_ff___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vscan_ff___024root*>(voidSelf);
    Vscan_ff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vscan_ff___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vscan_ff___024root__trace_full_0_sub_0(Vscan_ff___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscan_ff___024root__trace_full_0_sub_0\n"); );
    Vscan_ff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+0,(vlSelfRef.clk));
    bufp->fullBit(oldp+1,(vlSelfRef.scan_input));
    bufp->fullBit(oldp+2,(vlSelfRef.d));
    bufp->fullBit(oldp+3,(vlSelfRef.reset));
    bufp->fullBit(oldp+4,(vlSelfRef.scan_enable));
    bufp->fullBit(oldp+5,(vlSelfRef.Q));
}
