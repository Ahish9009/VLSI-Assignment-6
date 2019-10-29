`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:31:47 10/29/2019
// Design Name:   radix2fft
// Module Name:   /home/ahish/Desktop/Assignment-6/fft/radix2fft_tb.v
// Project Name:  fft
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: radix2fft
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module radix2fft_tb;

	// Inputs
	reg clk;
	reg rst;
	reg [3:0] x;

	// Outputs
	wire [11:0] yReal;
	wire [11:0] yImag;
	wire done;

	// Instantiate the Unit Under Test (UUT)
	radix2fft uut (
		.clk(clk), 
		.rst(rst), 
		.x(x), 
		.yReal(yReal), 
		.yImag(yImag), 
		.done(done)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;
		x = 4'b0000;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	always #2 clk=~clk;
	always #3 x[0]=~x[0];
	always #6 x[1]=~x[1];
	always #9 x[2]=~x[2];
	always #12 x[3]=~x[3];
      
endmodule

