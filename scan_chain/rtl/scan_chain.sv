module scan_chain #(parameter int width = 1
)(
    input logic clk,
    input logic reset,
    input logic scan_enable,
    input logic [width-1:0] d [0:3],
    input logic [width-1:0] scan_input,
    output reg [width-1:0] Q [0:3],
    output logic [width-1:0] scan_out
);

wire [width-1:0] so [0:3];
scan_ff #(width) ff1(.scan_input(scan_input), .reset(reset), .scan_enable(scan_enable), .clk(clk), .d(d[0]), .Q(Q[0]), .so(so[0]));
scan_ff #(width) ff2(.scan_input(so[0]), .reset(reset), .scan_enable(scan_enable), .clk(clk), .d(d[1]), .Q(Q[1]), .so(so[1]));
scan_ff #(width) ff3(.scan_input(so[1]), .reset(reset), .scan_enable(scan_enable), .clk(clk), .d(d[2]), .Q(Q[2]), .so(so[2]));
scan_ff #(width) ff4(.scan_input(so[2]), .reset(reset), .scan_enable(scan_enable), .clk(clk), .d(d[3]), .Q(Q[3]), .so(so[3]));

assign scan_out = so[3];






endmodule
