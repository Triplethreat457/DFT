import cocotb
from cocotb.clock import Clock #  CLK module Clock(dut.clk, 10, units="ns")
from cocotb.triggers import RisingEdge,ReadOnly,FallingEdge # For posedge clk function we use "await RisingEdge(dut.clk)"
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
    await ReadOnly()
        
    for i in range(4):
        assert (dut.Q[i].value.to_unsigned() == 0) , \
            f"FAIL: Q[{i}] was {dut.Q[i].value.to_unsigned()}, expected {0x00:#04x}"
        print(f"PASS: Q[{i}] was {0x00}")
    print("\nThe Scan FF's properly reset")
    await FallingEdge(dut.clk)
    print("TEST PASSED")
    
    dut.reset.value = 0
    print("\n----------------------SHIFT TEST---------------------------")
    


    print("Set scan_input value to be 0xAA")
    scan = [0xAA, 0x00, 0x00, 0x00]
    dut.scan_enable.value = 1
    dut.scan_input.value = 0xAA
    print("Asserted the scan_enable to be high: (SHIFT MODE) ....")
    await RisingEdge(dut.clk) # Posedge clk
    await ReadOnly()
    print("FIRST SHIFT...")
    
    for i in range(4):
        assert (dut.Q[i].value.to_unsigned() == scan[i]), \
            f"FAIL: Q[{i}] was {dut.Q[i].value.to_unsigned():#04x} expected {scan[i]:#04x}"
        print(f"PASS: Q[{i}] was {dut.Q[i].value.to_unsigned():#04x}")

    await FallingEdge(dut.clk)
    dut.scan_input.value = 0xBB
    
    scan = [0xBB] + scan[:-1]
    print("Set scan_input value to be 0xBB")
    
    await RisingEdge(dut.clk)
    await ReadOnly()
    print("SECOND SHIFT...")
    for i in range(4):
        assert (dut.Q[i].value.to_unsigned() == scan[i]), \
            f"FAIL: Q[{i}] was {dut.Q[i].value.to_unsigned():#04x} expected {scan[i]:#04x}"
        print(f"PASS: Q[{i}] was {dut.Q[i].value.to_unsigned():#04x}")

    await FallingEdge(dut.clk) #  Time skip. By then all the signals are stable exit Read_Only()
    dut.scan_input.value = 0xCC
    scan = [0xCC] + scan[:-1]
    print("Set scan_input value to be 0xCC")
    await RisingEdge(dut.clk)

    await ReadOnly()
    print("THRID SHIFT...")

    for i in range(4):
        assert (dut.Q[i].value.to_unsigned() == scan[i]), \
            f"FAIL: Q[{i}] was {dut.Q[i].value.to_unsigned():#04x} expected {scan[i]:#04x}"
        print(f"PASS: Q[{i}] was {dut.Q[i].value.to_unsigned():#04x}")


    await FallingEdge(dut.clk)
    dut.scan_input.value = 0xDD
    scan = [0xDD] + scan[:-1]
    print("Set scan_input value to be 0xDD")
    await RisingEdge(dut.clk)
    await ReadOnly()
    print("FOURTH SHIFT...")

     
    for i in range(4):
        assert (dut.Q[i].value.integer == scan[i]), \
            f"FAIL: Q[{i}] was {dut.Q[i].value.to_unsigned():#04x} expected {scan[i]:#04x}"
        print(f"PASS: Q[{i}] was {dut.Q[i].value.to_unsigned():#04x}")
    print("TEST PASSED")
    print("\n----------------------CAPTURE TEST---------------------------")
    await FallingEdge(dut.clk)
    dut.scan_enable.value = 0
    print("Set scan_enable value to be zero (CAPTURE MODE)...")
    print("Generated random values for D inputs...")
    test = []
    for i in range (4):
        test.append(rd.randint(0,255))
        dut.d[i].value  = test[i]

    await RisingEdge(dut.clk)
    await ReadOnly()
    print("POSEDGE CLK ASSERTED SHOULD CAPTURE D INPUTS...")
    for p in range (4):
        assert (dut.Q[p].value.integer == test[p]), \
            f"FAIL: Q[{p}] was {dut.Q[p].value.to_unsigned():#04x} expected {test[p]:#04x}"
        print(f"PASS: Q[{p}] was {dut.Q[p].value.to_unsigned():#04x}")
    await FallingEdge(dut.clk)

    print("TEST PASSED")
    print("\n----------------------SHIFT AFTER CAPTURE TEST---------------------------")
    print("Set scan_enable to be ASSERTED HIGH (SHIFT MODE) ")
    print("Set the SCAN_INPUT to be 0xAA")
    
    dut.scan_input.value = 0xAA
    dut.scan_enable.value = 1
    test = [0xAA] + test[:-1]
    await RisingEdge(dut.clk)
    await ReadOnly()
    print("FIRST SHIFT AFTER CAPTURE.....")

    for i in range(4):
        assert (dut.Q[i].value.to_unsigned() == test[i]), \
            f"FAIL: Q[{i}] was {dut.Q[i].value.to_unsigned():#04x} expected {test[i]:#04x}"
        print(f"PASS: Q[{i}] was {dut.Q[i].value.to_unsigned():#04x}")
    await FallingEdge(dut.clk)



    