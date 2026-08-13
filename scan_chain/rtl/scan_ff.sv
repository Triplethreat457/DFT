module scan_flop(
    input logic  clk,
    input logic  scan_input,
    input logic d,
    input logic scan_enable, // 1 is shift mode (load from scan chain) 
    // 0: Normal Operation (Capture Mode)
    output logic q
);





endmodule 

// SHIFT MODE (scan_en=1):  SI → FF[0].q → FF[1].q → ... → SO
// CAPTURE MODE (scan_en=0): apply 1 functional clock, capture logic values
// Then SHIFT MODE again to read out captured values at SO