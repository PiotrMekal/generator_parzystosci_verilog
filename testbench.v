`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:12:13 03/06/2019 
// Design Name: 
// Module Name:    testbench 
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
module testbench;
wire [7:0] led;	 
reg [7:0] sw;
top top1(sw, led, leda);

initial
begin

sw <= 8'b0;

#10 sw[7] <= 1;
#10 sw[6] <= 1;
#10 sw[5] <= 1;
#10 sw[4] <= 1;
#10 sw[3] <= 1;
#10 sw[2] <= 1;
#10 sw[1] <= 1;
#10 sw[0] <= 1;

end

endmodule
