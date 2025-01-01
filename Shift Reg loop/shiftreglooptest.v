module tb_shift_reg;
    reg [3:0] d_in;
    reg s_cnt, sr, sl, ld, clk, rst;
    wire [3:0] q;

    shift_reg uut (
        .d_in(d_in),
        .s_cnt(s_cnt),
        .sr(sr),
        .sl(sl),
        .ld(ld),
        .clk(clk),
        .rst(rst),
        .q(q)
    );

    always #5 clk = ~clk;

    initial begin

        clk = 0; rst = 1; d_in = 4'b0000; s_cnt = 0; sr = 0; sl = 0; ld = 0;

        #10 rst = 0;

        d_in = 4'b1010; ld = 1;
        #10 ld = 0;

        s_cnt = 1; sr = 1; sl = 0;
        #10 sr = 0; s_cnt = 0;

        s_cnt = 1; sl = 1; sr = 0;
        #10 sl = 0; s_cnt = 0;

        #20 $finish;
    end

endmodule
