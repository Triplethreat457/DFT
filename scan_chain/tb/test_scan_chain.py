import cocotb
from cocotb.clock import Clock #  CLK module Clock(dut.clk, 10, units="ns")
from cocotb.triggers import RisingEdge # For posedge clk function we use "await RisingEdge(dut.clk)"
import random as rd

# Create actual test
@cocotb.test() 
async def test_scan_chain(dut): #Function to actually run test connect it to dut (created dut)

    clock = Clock(dut.clk, 10, units="ns") # initialize clk that changes every 10ns; Like always #10 clk = ~clk;
    cocotb.start_soon(clock.start()) #start the clock
    print("Created 10ns period clock and connected it to DUT")

    print("----------------------RESET TEST---------------------------")


    print("Reset is Asserted High...")
    dut.reset.value = 1

    await RisingEdge(dut.clk)

    for i in range(4):
          assert (dut.Q[i].value == 0) , /
          f"FAIL: Q[{i}] was {dut.Q[i].value}, expected {0x00}"
          print(f"PASS: Q[{i}] was {0x00}\nThe Scan FF's properly reset")

    dut.reset.value = 0 # Set reset to be low
    dut.scan_enable.value = 0
    dut.scan_input.value = 0xAA
    


   

    






