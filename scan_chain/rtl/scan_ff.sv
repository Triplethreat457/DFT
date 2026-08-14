module scan_ff #(parameter int  width = 1)(
    input logic  clk,
    input logic [width-1:0]  scan_input,
    input logic [width-1:0] d, // data input (regular operation)
    input logic reset, 
    input logic scan_enable, // 1: SHIFT Mode (load from scan chain) 
    // 0: Normal Operation (Capture Mode)
    output logic [width-1:0] Q,
    output  wire [width-1:0] so
);
assign so = Q;
always_ff @(posedge clk) begin
    if (reset) Q <= '0;
    else Q <= scan_enable ? scan_input: d;
end






// SHIFT MODE (scan_en=1):  SI → FF[0].q → FF[1].q → ... → SO
// CAPTURE MODE (scan_en=0): apply 1 functional clock, capture logic values
// Then SHIFT MODE again to read out captured values at SO

endmodule
