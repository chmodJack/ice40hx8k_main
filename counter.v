module counter#(parameter N=32)
(
	input wire clk,
	input wire rst,
	output reg[N-1:0] data
);

always@(posedge clk or negedge rst) begin
	if(rst == 0) begin
		data <= 0;
	end else begin
		data <= data + 1;
	end
end

endmodule
