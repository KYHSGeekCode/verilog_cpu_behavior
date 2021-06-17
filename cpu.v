`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:24:53 06/17/2021 
// Design Name: 
// Module Name:    cpu 
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
module cpu(
    input [7:0] instruction,
    input clk50,
	 input reset,
    output [7:0] address,
	 output [6:0] bcd10,
	 output [6:0] bcd1
    );
	 
	reg [7:0] data [31:0];
	reg [7:0] register [3:0]; 
	reg [7:0] pc;
	reg [7:0] writereg;
	integer i;
	initial begin
	for (i=0;i<16;i=i+1) begin
    data[i] = i;
	 data[i+16] = -i;
	 end
	 for(i=0;i<4;i=i+1) begin
	 register[i] = 0;
	 end
	 pc = 0;
	 writereg =0;
	end
	
	Freq T0(clk50, clk);
	
	always@(posedge clk, posedge reset)
	begin
		if(reset) begin
			for (i=0;i<16;i=i+1) begin
				data[i] = i;
				data[i+16] = -i;
			end
		for(i=0;i<4;i=i+1) begin
			register[i] = 0;
		end
		pc = 0;
		writereg =0;		
		end else begin
		case(instruction[7:6])
			2'b00: begin register[instruction[1:0]] = register[instruction[3:2]] + register[instruction[5:4]];
						 writereg = register[instruction[1:0]];
						end
			2'b01: begin
		    register[instruction[3:2]]  = data[register[instruction[5:4]] + instruction[1:0]];
			 writereg = register[instruction[3:2]];
			end
			2'b10: data[register[instruction[5:4]] + instruction[1:0]] = register[instruction[3:2]];
			2'b11: begin
				if (instruction[1]) begin
					pc = pc + instruction[0] - 2;
				end else begin
					pc = pc + instruction[1:0];
				end
			end
		endcase
		pc = pc + 1;
		end
	end
	assign address = pc;
	BCDto7 T1(writereg[7:4], bcd10);
	BCDto7 T2(writereg[3:0], bcd1);
	
endmodule
