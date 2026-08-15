#include "Vscan_chain.h"
#include "verilated.h"
#include <vector>
#include  <cstdio> // for std::printf 
#include <cstdlib> // for std::rand()

#include "verilated_vcd_c.h" // File for tracing GTK Waves


int main(int argc, char** argv) {
   
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);

    Vscan_chain* dut = new Vscan_chain{contextp};

    //Always after creating dut
    Verilated::traceEverOn(true);
    VerilatedVcdC * tfp = new VerilatedVcdC; // create trace pointer 
    dut->trace(tfp, 99); // connects dut to tracer pointer, then say 99 simulation points in trace 
    tfp->open("scan_chain.vcd"); //open file for vcd being "scan_chain.vcd" and connecting the pointer tfp to it
    vluint64_t sim_time = 0;  //sim_time starts at zero



    // Initialize scan chain
    printf("-------------SCAN CHAIN TEST------------------------\n\n\n");

    dut->reset = 0;
    dut->scan_enable = 0;
    dut->scan_input = 4;
    dut->clk = 0;

    // Generate random d inputs
    for (int i = 0; i < 4; i++) {
        dut->d[i] = std::rand() % 80 + 1;
    }

    dut->eval();
    tfp->dump(sim_time++);

    printf("Intialized everything to zero and randomized d values\n");


    // Test reset
    dut->reset = 1;
    dut->eval();
    tfp->dump(sim_time++);

    dut->clk = 1; // posedge clk

    printf("Posedge asserted .....\n");
    printf("RESET is High.....\n");

    dut->eval();
    tfp->dump(sim_time++);

    bool ck = false;

    for (int i = 0; i < 4; ++i) {
        if (dut->Q[i] != 0)
            ck = true;
    }

    if (ck)
        printf("\nFAIL: Reset didn't set Scan FF's expected values for Q to be zero\n");
    else
        printf("\nPASS: Reset setted Scan FF's to be zero\n");


    // Set scan mode
    dut->reset = 0;
    dut->clk = 0;
    dut->scan_enable = 1;

    dut->eval();
    tfp->dump(sim_time++);


    // First shift
    dut->clk = 1;

    // Posedge should take scan_input of 4 into the first FF
    dut->eval();
    tfp->dump(sim_time++);

    if (dut->Q[0] != 4)
        printf("\nFAIL: The shift mode fails for the first shift in scan_chain. "
               "Expected Q[0]=4, but got Q[0]=%d\n",
               dut->Q[0]);
    else
        printf("\nPASS: The first shift works. "
               "Q[0]=4\n");


    // Second shift
    dut->scan_input = 5;
    dut->clk = 0;
    dut->eval();
    tfp->dump(sim_time++);

    dut->clk = 1; // posedge clk

    std::vector<int> vec = {5, 4};

    dut->eval();
    tfp->dump(sim_time++);

    ck = false;

    for (int i = 0; i < 2; ++i)
        if (dut->Q[i] != vec[i])
            ck = true;

    if (ck)
        printf("\nFAIL: The shift mode fails for the second shift in scan_chain. "
               "Expected Q[0]=5, Q[1]=4, "
               "but got Q[0]=%d, Q[1]=%d\n",
               dut->Q[0], dut->Q[1]);
    else
        printf("\nPASS: The second shift works. "
               "Q[0]=5, Q[1]=4\n");


    // Third shift
    vec.insert(vec.begin(), 6);

    dut->scan_input = 6;
    dut->clk = 0;
    dut->eval();
    tfp->dump(sim_time++);

    dut->clk = 1; // posedge clk

    dut->eval();
    tfp->dump(sim_time++);

    ck = false;

    for (int i = 0; i < 3; ++i)
        if (vec[i] != dut->Q[i])
            ck = true;

    if (ck)
        printf("\nFAIL: The shift mode fails for the third shift in scan_chain. "
               "Expected Q[0]=6, Q[1]=5, Q[2]=4, "
               "but got Q[0]=%d, Q[1]=%d, Q[2]=%d\n",
               dut->Q[0], dut->Q[1], dut->Q[2]);
    else
        printf("\nPASS: The third shift works. "
               "Q[0]=6, Q[1]=5, Q[2]=4\n");


    // Fourth shift
    vec = {7, 6, 5, 4};

    dut->scan_input = 7;
    dut->clk = 0;
    dut->eval();
    tfp->dump(sim_time++);

    dut->clk = 1; // posedge clk

    dut->eval();
    tfp->dump(sim_time++);

    ck = false;

    for (int i = 0; i < 4; ++i) {
        if (vec[i] != dut->Q[i])
            ck = true;
    }

    if (ck) {
        printf("\nFAIL: The shift mode fails for the fourth shift in scan_chain. "
               "Expected Q[0]=7, Q[1]=6, Q[2]=5, Q[3]=4, "
               "but got Q[0]=%d, Q[1]=%d, Q[2]=%d, Q[3]=%d\n",
               dut->Q[0], dut->Q[1], dut->Q[2], dut->Q[3]);
    }
    else {
        printf("\nPASS: The fourth shift works. "
               "Q[0]=7, Q[1]=6, Q[2]=5, Q[3]=4\n");
    }

    tfp->close(); // $finish in simulation kinfa thing 
    delete tfp; // first before deleting DUT

    // Free up space
    delete dut;
    delete contextp;

    return 0;
}