module top
(
	input wire clk,
	input wire rst,
	output wire a,
	output wire b,
	output wire c,
	output wire d,
	output wire e,
	output wire f,
	output wire g,
	output wire h
);

reg[2:0] d38_in;
decoder_38 d38 (.a(d38_in), .b({a,b,c,d,e,f,g,h}));

wire div_sig;
divider#(12000000) div (.clk(clk), .rst(rst), .out(div_sig));

always@(posedge div_sig or negedge rst) begin
	if(rst == 0) begin
		d38_in <= 0;
	end else begin
		d38_in <= d38_in + 1;
	end
end

endmodule

