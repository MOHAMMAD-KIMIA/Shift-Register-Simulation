module shift_reg (
    input wire [3:0] d_in, 
    input wire s_cnt,      
    input wire sr,         
    input wire sl,         
    input wire ld,        
    input wire clk,        
    input wire rst,        
    output reg [3:0] q  
);
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            q <= 4'b0000;
        end else if (ld) begin
            q <= d_in;    
        end else if (s_cnt) begin
            if (sr) begin
                q <= {1'b0, q[3:1]}; 
            end else if (sl) begin
                q <= {q[2:0], 1'b0}; 
            end
        end
    end
endmodule
