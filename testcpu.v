`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:19:49 06/11/2021
// Design Name:   Main
// Module Name:   D:/verilog_project/Final_home/Main_test.v
// Project Name:  Final_home
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Main
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Main_test;

	// Inputs
	reg clk50;
	wire [7:0] instruction;
	reg reset;

	// Outputs
	wire [7:0] ReadAddress;
	wire [6:0] seg_ten;
	wire [6:0] seg_one;

	// Instantiate the Unit Under Test (UUT)
	cpu uut (
		.clk50(clk50), 
		.instruction(instruction), 
		.reset(reset), 
		.address(ReadAddress), 
		.bcd10(seg_ten), 
		.bcd1(seg_one)
	);

	wire [7:0] MemByte [31:0];
	
	assign MemByte[0] = {2'b01, 2'b00, 2'b10, 2'b01}; // lw $s2, 1($s0)
	assign MemByte[1] = {2'b11, 2'b00, 2'b00, 2'b01}; // j + 1
	assign MemByte[2] = {2'b00, 2'b01, 2'b10, 2'b00}; // add $s0, $s1, $s2
	assign MemByte[3] = {2'b10, 2'b10, 2'b10, 2'b01}; // sw $s2, 1($s2)
	assign MemByte[4] = {2'b01, 2'b00, 2'b11, 2'b01}; // lw $s3, 1($s0)
	assign instruction = MemByte[ReadAddress];
	initial begin
		// Initialize Inputs
		clk50 = 0;
		reset = 0;
		repeat(500000000) begin
			#10;
			clk50= ~clk50;
		end
	end
      
endmodule