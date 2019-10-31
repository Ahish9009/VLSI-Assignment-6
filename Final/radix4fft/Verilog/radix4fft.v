`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:17:48 10/30/2019 
// Design Name: 
// Module Name:    radix4fft 
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
module radix4fft(
    input [3:0] x,
    output [11:0] yReal,
    output [11:0] yImag
    );
	 
	 assign yReal[2:0] = x[0] + x[1] + x[2] + x[3];
	 assign yImag[2:0] = 0;
	 assign yReal[5:3] = x[0] - x[2];
	 assign yImag[5:3] = x[3] - x[1];
	 assign yReal[8:6] = x[0] + x[2] - x[1] - x[3];
	 assign yImag[8:6] = 0;
	 assign yReal[11:9] = x[0] - x[2];
	 assign yImag[11:9] = x[1] - x[3];

endmodule
