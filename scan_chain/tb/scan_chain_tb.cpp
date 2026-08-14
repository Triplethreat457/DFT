#include "Vscan_chain.h"
#include "verilated.h"


int main (int argc, char** argv){
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc,argv);

    Vscan_chain* dut = new Vscan_chain{contextp};

printf("-------------SCAN CHAIN TEST------------------------\n\n\n");
dut->reset = 0;
dut->scan_enable = 0; 
dut->scan_input = 4;
dut->clk = 0;
for(int i = 0; i < 8; i ++){
    dut->d[i] = std::rand() % 80 + 1; // Generating all of the d inputs
}
dut->eval();
printf("Intialized everything to zero and randomized d values\n");

dut->reset = 1;
dut->eval();
dut-> clk = 1; //posedge clk
printf("Posedge asserted .....\n");
printf("RESET is High.....\n");

dut->eval();
bool ck = false;
for (int i = 0; i < 8; ++i){
    if (dut->Q[i] != 0) ck = true;
}
if 
















  return 0;  
}