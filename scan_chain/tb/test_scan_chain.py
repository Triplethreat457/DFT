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

    print("\n----------------------RESET TEST---------------------------\n")


    print("Reset is Asserted High...")
    dut.reset.value = 1

    await RisingEdge(dut.clk)

    for i in range(4):
          assert (dut.Q[i].value.integer == 0) , \
            f"FAIL: Q[{i}] was {dut.Q[i].value.integer}, expected {0x00:#04x}"
          print(f"PASS: Q[{i}] was {0x00}\nThe Scan FF's properly reset")

    dut.reset.value = 0 # Set reset to be low
    dut.scan_enable.value = 0
    dut.scan_input.value = 0xAA
    print("TEST PASSED")
    print("\n----------------------SHIFT TEST---------------------------")
    


    print("Set scan_input value to be 0xAA")
    scan = [0xAA, 0x00, 0x00, 0x00]
    dut.scan_enable.value = 1
    print("Asserted the scan_enable to be high: (SHIFT MODE) ....")
    await RisingEdge(dut.clk) # Posedge clk
    print("FIRST SHIFT...")
    
    for i in range(4):
        assert (dut.Q[i].value.integer == scan[i]), \
            f"FAIL: Q[{i}] was {dut.Q[i].value.integer:#04x} expected {scan[i]:#04x}"
        print(f"PASS: Q[{i}] was {dut.Q[i].value.integer:#04x}")

    
    dut.scan_input.value = 0xBB
    
    scan = [0xBB] + scan[:-1]
    print("Set scan_input value to be 0xBB")
    
    await RisingEdge(dut.clk)
    print("SECOND SHIFT...")
    for i in range(4):
        assert (dut.Q[i].value.integer == scan[i]), \
            f"FAIL: Q[{i}] was {dut.Q[i].value.integer:#04x} expected {scan[i]:#04x}"
        print(f"PASS: Q[{i}] was {dut.Q[i].value.integer:#04x}")

    dut.scan_input.value = 0xCC
    scan = [0xCC] + scan[:-1]
    print("Set scan_input value to be 0xCC")
    await RisingEdge(dut.clk)
    print("THRID SHIFT...")

    for i in range(4):
        assert (dut.Q[i].value.integer == scan[i]), \
            f"FAIL: Q[{i}] was {dut.Q[i].value.integer:#04x} expected {scan[i]:#04x}"
        print(f"PASS: Q[{i}] was {dut.Q[i].value.integer:#04x}")



    dut.scan_input.value = 0xDD
    scan = [0xDD] + scan[:-1]
    print("Set scan_input value to be 0xDD")
    await RisingEdge(dut.clk)
    print("FOURTH SHIFT...")
    
        
    for i in range(4):
        assert (dut.Q[i].value.integer == scan[i]), \
            f"FAIL: Q[{i}] was {dut.Q[i].value.integer:#04x} expected {scan[i]:#04x}"
        print(f"PASS: Q[{i}] was {dut.Q[i].value.integer:#04x}")
    print("TEST PASSED")
    print("\n----------------------CAPTURE TEST---------------------------")
    dut.scan_enable.val = 0
    print("Set scan_enable value to be zero (CAPTURE MODE)...")
    print("Generated random values for D inputs...")
    test = []
    for i in range (4):
        test.append(rd.randint(0,128))
        dut.d[i].value  = test[i]

    await RisingEdge(dut.clk)
    print("POSEDGE CLK ASSERTED SHOULD CAPTURE D INPUTS...")
    for p in range (4):
        assert (dut.Q[p].value.integer == test[p]), \
            f"FAIL: Q[{p}] was {dut.Q[p].value.integer:#04x} expected {test[p]:#04x}"
        print(f"PASS: Q[{p}] was {dut.Q[p].value.integer:#04x}")


    print("TEST PASSED")
    print("\n----------------------SHIFT AFTER CAPTURE TEST---------------------------")
    print("Set scan_enable to be ASSERTED HIGH (SHIFT MODE) ")
    print("Set the SCAN_INPUT to be 0xAA")

    dut.scan_input.value = 0xAA
    dut.scan_enable.value = 1
    scan = [0xAA] + scan[:-1]
    await RisingEdge(dut.clk)
    print("FIRST SHIFT AFTER CAPTURE.....")

    for i in range(4):
        assert (dut.Q[i].value.integer == scan[i]), \
            f"FAIL: Q[{i}] was {dut.Q[i].value.integer:#04x} expected {scan[i]:#04x}"
        print(f"PASS: Q[{i}] was {dut.Q[i].value.integer:#04x}")


    print("TEST PASSED")
    
    


    


    
    
    


    
    




    



    

    

    










    


   

    






