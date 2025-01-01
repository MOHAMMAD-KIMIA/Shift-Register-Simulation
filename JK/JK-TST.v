module tb_shift_register_jk;

    // Testbench signals
    reg clk;              // Clock signal
    reg rst;              // Reset signal
    reg serial_in;        // Serial input data
    wire [3:0] q;         // Output from the shift register

    // Instantiate the shift register module
    shift_register_jk uut (
        .clk(clk),
        .rst(rst),
        .serial_in(serial_in),
        .q(q)
    );

    // Clock generation (toggle every 5 time units)
    initial clk = 0;
    always #5 clk = ~clk;

    // Test sequence
    initial begin
        // Initialize signals
        rst = 1;
        serial_in = 0;

        // Reset the register
        #10 rst = 0;

        // Shift in 4-bit serial data: 1011
        #10 serial_in = 1;
        #10 serial_in = 0;
        #10 serial_in = 1;
        #10 serial_in = 1;

        // Hold for a few clock cycles
        #30;

        // End simulation
        $finish;
    end

    // Monitor outputs
    initial begin
        $monitor("Time: %0d | rst: %b | serial_in: %b | q: %b",
                 $time, rst, serial_in, q);
    end

endmodule