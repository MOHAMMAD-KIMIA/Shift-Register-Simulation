`timescale 1ns/1ps

module shift_reg_tb;
    reg [3:0] d_in;
    reg [3:0] s_cnt;
    reg sl, sr, ld, clk, rst;

    wire [3:0] q;

    shift_reg uut (
        .d_in(d_in),
        .s_cnt(s_cnt),
        .sl(sl),
        .sr(sr),
        .ld(ld),
        .clk(clk),
        .rst(rst),
        .q(q)
    );

    initial begin
        clk = 0;
        forever #10 clk = ~clk; 
    end

    initial begin
        d_in = 4'b0000;
        s_cnt = 4'b0001; 
        sl = 0; sr = 0; ld = 0; rst = 0;

        rst = 1; #20;   
        rst = 0;

        ld = 1; d_in = 4'b1010; #20;
        ld = 0;

        sl = 1; sr = 0; #20;
        sl = 0;

        sr = 1; sl = 0; #20;
        sr = 0;

        #20;

        rst = 1; #20;
        rst = 0;

        #50;
        $stop;
    end



endmodule

