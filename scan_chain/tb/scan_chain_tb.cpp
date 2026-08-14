#include "Vscan_chain.h"
#include "verilated.h"

int main (int argc, char** argv){
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc,argv);

    Vscan_chain* dut = new Vscan_chain{contextp};








  return 0;  
}