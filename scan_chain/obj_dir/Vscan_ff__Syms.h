// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSCAN_FF__SYMS_H_
#define VERILATED_VSCAN_FF__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vscan_ff.h"

// INCLUDE MODULE CLASSES
#include "Vscan_ff___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vscan_ff__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vscan_ff* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vscan_ff___024root             TOP;

    // CONSTRUCTORS
    Vscan_ff__Syms(VerilatedContext* contextp, const char* namep, Vscan_ff* modelp);
    ~Vscan_ff__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
