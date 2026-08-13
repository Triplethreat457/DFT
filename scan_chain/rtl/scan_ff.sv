module scan_ff(
    input logic  clk,
    input logic  scan_input,
    input logic d, // data input (regular operation)
    input logic reset, 
    input logic scan_enable, // 1: SHIFT Mode (load from scan chain) 
    // 0: Normal Operation (Capture Mode)
    output logic  Q
);

always_ff @(posedge clk) begin
    if (reset) Q <= 1'b0;
    else Q <= scan_enable ? scan_input: d;
end






// SHIFT MODE (scan_en=1):  SI → FF[0].q → FF[1].q → ... → SO
// CAPTURE MODE (scan_en=0): apply 1 functional clock, capture logic values
// Then SHIFT MODE again to read out captured values at SO

endmodule
