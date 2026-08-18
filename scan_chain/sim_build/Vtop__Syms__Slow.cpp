// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(250);
    // Setup sub module instances
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscopep_TOP = new VerilatedScope{this, "TOP", "TOP", "<null>", 0, VerilatedScope::SCOPE_OTHER};
    __Vscopep_scan_chain = new VerilatedScope{this, "scan_chain", "scan_chain", "scan_chain", -12, VerilatedScope::SCOPE_MODULE};
    __Vscopep_scan_chain__ff1 = new VerilatedScope{this, "scan_chain.ff1", "ff1", "scan_ff", -12, VerilatedScope::SCOPE_MODULE};
    __Vscopep_scan_chain__ff2 = new VerilatedScope{this, "scan_chain.ff2", "ff2", "scan_ff", -12, VerilatedScope::SCOPE_MODULE};
    __Vscopep_scan_chain__ff3 = new VerilatedScope{this, "scan_chain.ff3", "ff3", "scan_ff", -12, VerilatedScope::SCOPE_MODULE};
    __Vscopep_scan_chain__ff4 = new VerilatedScope{this, "scan_chain.ff4", "ff4", "scan_ff", -12, VerilatedScope::SCOPE_MODULE};
    // Set up scope hierarchy
    __Vhier.add(0, __Vscopep_scan_chain);
    __Vhier.add(__Vscopep_scan_chain, __Vscopep_scan_chain__ff1);
    __Vhier.add(__Vscopep_scan_chain, __Vscopep_scan_chain__ff2);
    __Vhier.add(__Vscopep_scan_chain, __Vscopep_scan_chain__ff3);
    __Vhier.add(__Vscopep_scan_chain, __Vscopep_scan_chain__ff4);
    // Setup export functions - final: 0
    // Setup export functions - final: 1
    // Setup public variables
    __Vscopep_TOP->varInsert("Q", &(TOP.Q), false, VLVT_UINT8, VLVD_OUT|VLVF_PUB_RW, 1, 1 ,0,3 ,7,0);
    __Vscopep_TOP->varInsert("clk", &(TOP.clk), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("d", &(TOP.d), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 1, 1 ,0,3 ,7,0);
    __Vscopep_TOP->varInsert("reset", &(TOP.reset), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("scan_enable", &(TOP.scan_enable), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("scan_input", &(TOP.scan_input), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_TOP->varInsert("scan_out", &(TOP.scan_out), false, VLVT_UINT8, VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,7,0);
    __Vscopep_scan_chain->varInsert("Q", &(TOP.scan_chain__DOT__Q), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 1, 1 ,0,3 ,7,0);
    __Vscopep_scan_chain->varInsert("clk", &(TOP.scan_chain__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_scan_chain->varInsert("d", &(TOP.scan_chain__DOT__d), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 1, 1 ,0,3 ,7,0);
    __Vscopep_scan_chain->varInsert("reset", &(TOP.scan_chain__DOT__reset), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_scan_chain->varInsert("scan_enable", &(TOP.scan_chain__DOT__scan_enable), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_scan_chain->varInsert("scan_input", &(TOP.scan_chain__DOT__scan_input), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_scan_chain->varInsert("scan_out", &(TOP.scan_chain__DOT__scan_out), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,7,0);
    __Vscopep_scan_chain->varInsert("so", &(TOP.scan_chain__DOT__so), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_NET, 1, 1 ,0,3 ,7,0);
    __Vscopep_scan_chain->varInsert("width", const_cast<void*>(static_cast<const void*>(&(TOP.scan_chain__DOT__width))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_scan_chain__ff1->varInsert("Q", &(TOP.scan_chain__DOT__ff1__DOT__Q), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_scan_chain__ff1->varInsert("clk", &(TOP.scan_chain__DOT__ff1__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_scan_chain__ff1->varInsert("d", &(TOP.scan_chain__DOT__ff1__DOT__d), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_scan_chain__ff1->varInsert("reset", &(TOP.scan_chain__DOT__ff1__DOT__reset), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_scan_chain__ff1->varInsert("scan_enable", &(TOP.scan_chain__DOT__ff1__DOT__scan_enable), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_scan_chain__ff1->varInsert("scan_input", &(TOP.scan_chain__DOT__ff1__DOT__scan_input), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_scan_chain__ff1->varInsert("so", &(TOP.scan_chain__DOT__ff1__DOT__so), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET, 0, 1 ,7,0);
    __Vscopep_scan_chain__ff1->varInsert("width", const_cast<void*>(static_cast<const void*>(&(TOP.scan_chain__DOT__ff1__DOT__width))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_scan_chain__ff2->varInsert("Q", &(TOP.scan_chain__DOT__ff2__DOT__Q), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_scan_chain__ff2->varInsert("clk", &(TOP.scan_chain__DOT__ff2__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_scan_chain__ff2->varInsert("d", &(TOP.scan_chain__DOT__ff2__DOT__d), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_scan_chain__ff2->varInsert("reset", &(TOP.scan_chain__DOT__ff2__DOT__reset), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_scan_chain__ff2->varInsert("scan_enable", &(TOP.scan_chain__DOT__ff2__DOT__scan_enable), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_scan_chain__ff2->varInsert("scan_input", &(TOP.scan_chain__DOT__ff2__DOT__scan_input), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_scan_chain__ff2->varInsert("so", &(TOP.scan_chain__DOT__ff2__DOT__so), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET, 0, 1 ,7,0);
    __Vscopep_scan_chain__ff2->varInsert("width", const_cast<void*>(static_cast<const void*>(&(TOP.scan_chain__DOT__ff2__DOT__width))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_scan_chain__ff3->varInsert("Q", &(TOP.scan_chain__DOT__ff3__DOT__Q), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_scan_chain__ff3->varInsert("clk", &(TOP.scan_chain__DOT__ff3__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_scan_chain__ff3->varInsert("d", &(TOP.scan_chain__DOT__ff3__DOT__d), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_scan_chain__ff3->varInsert("reset", &(TOP.scan_chain__DOT__ff3__DOT__reset), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_scan_chain__ff3->varInsert("scan_enable", &(TOP.scan_chain__DOT__ff3__DOT__scan_enable), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_scan_chain__ff3->varInsert("scan_input", &(TOP.scan_chain__DOT__ff3__DOT__scan_input), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_scan_chain__ff3->varInsert("so", &(TOP.scan_chain__DOT__ff3__DOT__so), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET, 0, 1 ,7,0);
    __Vscopep_scan_chain__ff3->varInsert("width", const_cast<void*>(static_cast<const void*>(&(TOP.scan_chain__DOT__ff3__DOT__width))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_scan_chain__ff4->varInsert("Q", &(TOP.scan_chain__DOT__ff4__DOT__Q), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_scan_chain__ff4->varInsert("clk", &(TOP.scan_chain__DOT__ff4__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_scan_chain__ff4->varInsert("d", &(TOP.scan_chain__DOT__ff4__DOT__d), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_scan_chain__ff4->varInsert("reset", &(TOP.scan_chain__DOT__ff4__DOT__reset), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_scan_chain__ff4->varInsert("scan_enable", &(TOP.scan_chain__DOT__ff4__DOT__scan_enable), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_scan_chain__ff4->varInsert("scan_input", &(TOP.scan_chain__DOT__ff4__DOT__scan_input), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_scan_chain__ff4->varInsert("so", &(TOP.scan_chain__DOT__ff4__DOT__so), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET, 0, 1 ,7,0);
    __Vscopep_scan_chain__ff4->varInsert("width", const_cast<void*>(static_cast<const void*>(&(TOP.scan_chain__DOT__ff4__DOT__width))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
}

Vtop__Syms::~Vtop__Syms() {
    // Tear down scope hierarchy
    __Vhier.remove(0, __Vscopep_scan_chain);
    __Vhier.remove(__Vscopep_scan_chain, __Vscopep_scan_chain__ff1);
    __Vhier.remove(__Vscopep_scan_chain, __Vscopep_scan_chain__ff2);
    __Vhier.remove(__Vscopep_scan_chain, __Vscopep_scan_chain__ff3);
    __Vhier.remove(__Vscopep_scan_chain, __Vscopep_scan_chain__ff4);
    // Clear keys from hierarchy map after values have been removed
    __Vhier.clear();
    // Tear down scopes
    VL_DO_CLEAR(delete __Vscopep_TOP, __Vscopep_TOP = nullptr);
    VL_DO_CLEAR(delete __Vscopep_scan_chain, __Vscopep_scan_chain = nullptr);
    VL_DO_CLEAR(delete __Vscopep_scan_chain__ff1, __Vscopep_scan_chain__ff1 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_scan_chain__ff2, __Vscopep_scan_chain__ff2 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_scan_chain__ff3, __Vscopep_scan_chain__ff3 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_scan_chain__ff4, __Vscopep_scan_chain__ff4 = nullptr);
    // Tear down sub module instances
}
