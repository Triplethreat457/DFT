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
    

/* clk          = 0
   reset        = 0
   scan_enable  = 0
   scan_input   = 0
   d            = 0
*/

//Update the outputs based on the current inputs
dut->eval();

if (dut->Q == 0){
    printf("Initial Q = 0\n");
}
else{
    printf("Initial Q = %d\n", dut->Q);
}

printf("----------------------CAPTURE TEST-------------------------\n");


dut->d = 1; //  d is set to one , clk is still zero

dut->eval();

dut->clk = 1; // Posclk edge
dut->eval();
// Check to see if Q captured 
if(dut->Q == 1) {
    printf("\nPASS: Q Captured the D = 1\n");
} else {
    printf("\nFAIL: Q = %d, expected 1\n", dut->Q);
}

printf("\n----------------------SHIFT TEST-------------------------\n");
dut->clk = 0;
dut->scan_enable = 1;
dut->eval();

dut->clk = 1; // Posclk edge
dut->eval();
if(dut->Q == 0){
    printf("\nPASS: Q shifted in the input of scan_input into Q (SHIFT MODE works)!!\n");
} else {
    printf("\nFAIL: Q was read as %d expected 0 from scan_input\n", dut->Q);
}

printf("----------------------RESET TEST-------------------------\n");
dut->scan_input = 1;
dut->clk = 0;
dut-> eval();
dut->clk = 1;
dut->eval(); //posclk edge set 


dut->reset = 1; // Set the reset to be high
dut-> eval(); 

dut->clk = 0;
dut->eval();

dut->clk = 1; //posclk edge set
dut->eval(); // Q should be reset because reset was high

if(dut->Q == 0) {
    printf("\nPASS: Q was reset to zero when reset was asserted\n");
} else {
    printf("\nFAIL: Q was read to be %d did not reset to zero\n", dut->Q);
}


// CLEAN UP SPACE

delete dut; 
delete contextp;


return 0;




















    
    










}