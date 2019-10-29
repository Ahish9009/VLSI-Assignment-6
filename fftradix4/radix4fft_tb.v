`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   01:25:25 10/30/2019
// Design Name:   radix4fft
// Module Name:   /home/ahish/Desktop/Assignment-6/fftradix4/radix4fft_tb.v
// Project Name:  fftradix4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: radix4fft
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module radix4fft_tb;

	// Inputs
	reg [3:0] x;

	// Outputs
	wire [11:0] yReal;
	wire [11:0] yImag;

	// Instantiate the Unit Under Test (UUT)
	radix4fft uut (
		.x(x), 
		.yReal(yReal), 
		.yImag(yImag)
	);

	initial begin
		// Initialize Inputs
		x = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	always #2 x[0]=~x[0];
	always #4 x[1]=~x[1];
	always #8 x[2]=~x[2];
	always #16 x[3]=~x[3];
      
endmodule

