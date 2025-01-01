module shift_reg (
    input wire [3:0] d_in,   
    input wire [3:0] s_cnt, 
    input wire sl,          
    input wire sr,           
    input wire ld,           
    input wire clk,          
    input wire rst,          
    output wire [3:0] q      
);
    wire [3:0] int_q;

    combine u_combine (
        .d_in(d_in),
        .s_cnt(s_cnt),
        .sl(sl),
        .sr(sr),
        .ld(ld),
        .int_q(int_q)
    );

    register u_register (
        .clk(clk),
        .rst(rst),
        .int_q(int_q),
        .q(q)
    );
endmodule

