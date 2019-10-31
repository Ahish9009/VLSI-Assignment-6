`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:12:28 10/29/2019 
// Design Name: 
// Module Name:    radix2fft 
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
module radix2fft(
	 input [3:0] x,
	 output [11:0] yReal,
	 output [11:0] yImag
    );
	 
	 wire [11:0] temp;
	  
	 
	 //phase 1
	 dftcalc A(x[0], x[2], temp[2:0], temp[5:3]);
	 dftcalc B(x[1], x[3], temp[8:6], temp[11:9]);
	 
	 //phase 2
				assign yReal[2:0] = temp[2:0] + temp[8:6];
				assign yImag[2:0] = 0;
				assign yReal[5:3] = temp[5:3];
				assign yImag[5:3] = -temp[11:9];
				assign yReal[8:6] = temp[2:0] - temp[8:6];
				assign yImag[8:6] = 0;
				assign yReal[11:9] = temp[5:3];
				assign yImag[11:9] = temp[11:9];
			
endmodule

module dftcalc(
	input x,
	input y,
	output [2:0] x1,
	output [2:0] x2
	);
	
	assign x1 = x + y;
	assign x2 = x - y;
	
endmodule
