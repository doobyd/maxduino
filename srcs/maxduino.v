module maxduino
(
	input  wire		clk,
	input  wire		reset_n,
	input  wire		rxd,
	output wire		txd,
	output wire [21:0] gpio
);

top_system u0 (
        .clk_clk                (clk),                //             clk.clk
        .gpio_connection_export (gpio), // gpio_connection.export
        .i2c_serial_sda_in      (1'b0),      //      i2c_serial.sda_in
        .i2c_serial_scl_in      (1'b0),      //                .scl_in
        .i2c_serial_sda_oe      (),      //                .sda_oe
        .i2c_serial_scl_oe      (),      //                .scl_oe
        .reset_reset_n          (reset_n),          //           reset.reset_n
        .spi_connection_MISO    (1'b0),    //  spi_connection.MISO
        .spi_connection_MOSI    (),    //                .MOSI
        .spi_connection_SCLK    (),    //                .SCLK
        .spi_connection_SS_n    (),    //                .SS_n
        .uart_connection_rxd    (rxd),    // uart_connection.rxd
        .uart_connection_txd    (txd)     //                .txd
    );
	 
endmodule