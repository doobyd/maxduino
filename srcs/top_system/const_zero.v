// const_zero.v

// This file was auto-generated as a prototype implementation of a module
// created in component editor.  It ties off all outputs to ground and
// ignores all inputs.  It needs to be edited to make it do something
// useful.
// 
// This file will not be automatically regenerated.  You should check it in
// to your version control system if you want to keep it.

`timescale 1 ps / 1 ps
module const_zero (
		output wire  zero,  // areset.areset
		input wire reset_in,
		output wire resetn_out
	);

	// TODO: Auto-generated HDL template

	assign zero = 1'b0;
	assign resetn_out = !reset_in;

endmodule
