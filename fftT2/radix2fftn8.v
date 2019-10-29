`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:04:47 10/29/2019 
// Design Name: 
// Module Name:    radix2fftn8 
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
module radix2fftn8(
	 input n,
    input [7:0] x,
    output [7:0] y,
    );
	 
	 //n=8
	 integer n = 8;
	 if (n == 2) begin
			
	 
	 


endmodule

module 2dft(
	input x,
	input y,
	output [2:0] x1,
	output [2:0] x2
	);
	
	assign x1 = x + y;
	assign x2 = x - y;
