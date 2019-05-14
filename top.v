`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:24:43 03/06/2019 
// Design Name: 
// Module Name:    top 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module top(
	input wire [7:0] sw_i,
	output wire [7:0] led7_seg_o,
	output wire [3:0]led7_an_o 
 );
assign led7_an_o = 4'b111;
assign led7_seg_o = ^sw_i ? 8'b11: 8'b1100001;  
endmodule
