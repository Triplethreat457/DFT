#include "Vscan_ff.h"
#include "verilated.h"


int main(int argc, char** argv){

    // Creates pointer "contextp" for Verilated Context that points to dynamic object VerilatedContext
    VerilatedContext* contextp = new VerilatedContext;

    contextp->commandArgs(argc, argv);

    // Created vitual Dut that can create the signals
    // dut = your simulated scan_ff
    Vscan_ff* dut = new Vscan_ff{contextp};

    dut->clk = 0;
    dut->reset = 0;
    dut->scan_enable = 0;
    dut->scan_input = 0;
    dut->d = 0;

/* clk          = 0
   reset        = 0
   scan_enable  = 0
   scan_input   = 0
   d            = 0
*/

//Update the outputs based on the current inputs
dut->eval();

if (dut->Q == 0)
    printf("Initial Q = 0\n");
else
    printf("Initial Q = %d\n", dut->Q);

printf("----------------------Capture test-------------------------\n");


dut->d = 1; //  d is set to one , clk is still zero

dut->eval();

dut->clk = 1; // Posclk edge
dut->eval();
// Check to see if Q captured 
if(dut->Q == 1) {
    printf("Pass: Q Captured the D = 1\n");
} else {
    printf("FAIL: Q = %d, expected 1\n", dut->Q);
}

printf("----------------------SHIFT TEST-------------------------\n")
dut->clk = 0;
dut->scan_enable = 1;
dut->eval();

dut->clk


















    
    










}