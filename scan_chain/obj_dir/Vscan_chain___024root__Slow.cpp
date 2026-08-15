// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vscan_chain.h for the primary calling header

#include "Vscan_chain__pch.h"

void Vscan_chain___024root___ctor_var_reset(Vscan_chain___024root* vlSelf);

Vscan_chain___024root::Vscan_chain___024root(Vscan_chain__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vscan_chain___024root___ctor_var_reset(this);
}

void Vscan_chain___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vscan_chain___024root::~Vscan_chain___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
