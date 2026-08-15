// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSCAN_CHAIN__SYMS_H_
#define VERILATED_VSCAN_CHAIN__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vscan_chain.h"

// INCLUDE MODULE CLASSES
#include "Vscan_chain___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vscan_chain__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vscan_chain* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vscan_chain___024root          TOP;

    // CONSTRUCTORS
    Vscan_chain__Syms(VerilatedContext* contextp, const char* namep, Vscan_chain* modelp);
    ~Vscan_chain__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
