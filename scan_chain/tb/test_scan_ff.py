import cocotb
from cocotb.triggers import RisingEdge, FallingEdge, ReadOnly
from cocotb.clock import Clock
import random as rd


#create cocotb test
@cocotb.test()
async def test_scan_ff(dut):
    # Creating clock variable name clock with a 10ns period
    clock = Clock(dut.clk, 10,units= "ns")

    # Telling Cocotb to start the clock
    cocotb.start_soon(clock.start())

    print("Created 10ns period clock and connected it to DUT")
    print("\nStarted Clock......")

    print("\n-------------CAPTURE TEST------------------------\n")
    print(f"\nInitial Q before changes is {dut.Q.value.to_unsigned():#04x}...")

    print("Set scan-input to be 4....")
    print("Set the d-value input to be 2...")
    print("Set scan-enable to be 0 (Capture-Mode)")
    dut.scan_input.value = 4
    dut.scan_enable.value = 0
    dut.d.value = 2 # D valued to be captured
    dut.reset.value = 0 # Set reset to be low 

    await RisingEdge(dut.clk) # posedge clk
    await ReadOnly()

    assert (dut.Q.value.to_unsigned() == 2), \
        f"\nFail: Q didn't capture the d-value of 2 but we got Q = {dut.Q.value.to_unsigned()}"
    print("\nPass: Q captured a d-value of 2 in (Capture Mode)")
    

    print("\nGenerated random d-value...... ")
    await FallingEdge(dut.clk) ## Negedge clk to skip out of Read_only Phase
    
    ran = rd.randint(0, 255)
    dut.d.value = ran

    print("\nPosedge Asserted......")   
    await RisingEdge(dut.clk)
    await ReadOnly()

    assert((ran == dut.Q.value)) , \
        f"FAIL: Q value didn't capture random d-value of {dut.d.value.to_unsigned():#04x}\n but got {dut.Q.value.to_unsigned():#04x}"
    print(f"PASS: Q captured D = {dut.Q.value.to_unsigned():#04x}")

    print("\nTEST PASSED")

    await FallingEdge(dut.clk)


    print("\n-------------SHIFT TEST------------------------\n")

    print("\nSet Scan_Enable to be asserted high (SHIFT MODE)")
    dut.scan_enable.value = 1
    print("\nFIRST SHIFT.....")
    await RisingEdge(dut.clk)
    await ReadOnly()
    assert (dut.scan_input.value == dut.Q.value) , \
        f"\nFAIL: No SHIFT DETECTED: Expected Q ={dut.scan_input.value.to_unsigned():#04x} but got {dut.Q.value.to_unsigned():#04x}"
    print(f"\nPASS: SHIFT DETECTED: Q = {dut.scan_input.value.to_unsigned():#04x}")

    await FallingEdge(dut.clk)
    print("\nGenerated random scan_input......")
    dut.scan_input.value = rd.randint(0,255)

    print("SECOND SHIFT...")
    await RisingEdge(dut.clk)
    await ReadOnly()

    assert (dut.scan_input.value == dut.Q.value), \
        f"\nFAIL: No SHIFT DETECTED: Expected Q ={dut.scan_input.value.to_unsigned():#04x} but got {dut.Q.value.to_unsigned():#04x}"
    print(f"\nPASS: SHIFT DETECTED: Q = {dut.scan_input.value.to_unsigned():#04x}")
    await FallingEdge(dut.clk)
    print("\nTEST PASSED")
     
    print("\n-------------RESET TEST------------------------\n")

    print("\nSetted Reset to be asserted high")
    dut.reset.value = 1
    await RisingEdge(dut.clk)
    await ReadOnly()

    assert(dut.Q.value.to_unsigned() == 0) , \
        f"FAIL: RESET did not work...\nExpected, Q = 0 but Q was actually {dut.Q.value.to_unsigned():#04x}"
    




    
        








        
    

       

        



    

    

        






