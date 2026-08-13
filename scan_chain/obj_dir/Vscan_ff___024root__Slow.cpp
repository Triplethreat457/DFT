// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vscan_ff.h for the primary calling header

#include "Vscan_ff__pch.h"

void Vscan_ff___024root___ctor_var_reset(Vscan_ff___024root* vlSelf);

Vscan_ff___024root::Vscan_ff___024root(Vscan_ff__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vscan_ff___024root___ctor_var_reset(this);
}

void Vscan_ff___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vscan_ff___024root::~Vscan_ff___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
