module combine (
    input wire [3:0] d_in,   
    input wire [3:0] s_cnt,  
    input wire sl,          
    input wire sr,          
    input wire ld,          
    output wire [3:0] int_q  
);
    assign int_q = ld ? d_in :                      
                   (sr ? {1'b0, d_in[3:1]} :        
                    sl ? {d_in[2:0], 1'b0} : d_in); 
endmodule

