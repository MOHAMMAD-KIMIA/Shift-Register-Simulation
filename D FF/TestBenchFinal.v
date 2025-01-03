`timescale 1ns / 1ps

module TestBench;

	reg [7:0] Data;
	reg [1:0] LR;
	reg Left_Input;
	reg Right_Input;
	reg Reset;
	reg Clk;

	wire [7:0] Result;

	Shift uut (
		.Data(Data), 
		.LR(LR), 
		.Left_Input(Left_Input), 
		.Right_Input(Right_Input), 
		.Reset(Reset), 
		.Result(Result), 
		.Clk(Clk)
	);

	initial begin
		Data = 8'b00110010;
		LR = 0;
		Left_Input = 1;
		Right_Input = 1;
		Reset = 0;
		Clk = 0;

		#20;
		Reset=1;
		#10;
		LR=0;
		
      #10;
		LR=1;
		
      #10;
		LR=2;
    		
      #10;
		LR=1;
		
      #10;
		LR=1;
		
	   #10;
		LR=3;
		
	   #10;
		LR=2;
		
      #20;
		Reset=0;

	end
      always #5 Clk=~Clk;
endmodule

