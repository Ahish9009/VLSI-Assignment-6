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
	 input clk, rst, 
    input [3:0] x,
	 output reg [11:0] yReal = 8'b00000000,
	 output reg [11:0] yImag = 8'b00000000,
	 output reg done
    );
	 
	 reg [2:0] count = 0;
	 reg [3:0] storedx;
	 reg [11:0] temp;
	 wire [2:0] t0, t1, t2, t3;
	 dftcalc A(storedx[0], storedx[2], t0, t1);
	 dftcalc B(storedx[1], storedx[3], t2, t3);
	 
	 always @ (posedge clk) begin
		
			if (count == 0 | rst) begin
				storedx <= x;
				temp <= 0;
				done <= 0;
			end 
			else if (count == 1) begin
				temp[2:0] <= t0;
				temp[5:3] <= t1;
				temp[8:6] <= t2;
				temp[11:9] <= t3;
			end
			else if (count == 2) begin
				yReal[2:0] <= temp[2:0] + temp[8:6];
				yReal[5:3] <= temp[5:3];
				yImag[5:3] <= -temp[11:9];
				yReal[8:6] <= temp[2:0] - temp[8:6];
				yReal[11:9] <= temp[5:3];
				yImag[11:9] <= temp[11:9];
			end
			
			count = count + 1;
			if (count == 3) begin
				done <= 1;
				count = 0;
			end
		end
			
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
