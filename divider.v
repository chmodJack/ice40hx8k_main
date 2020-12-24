module divider#(parameter N=6000000)
(
	input wire clk,
	input wire rst,
	output reg out
);

reg[31:0] cnt;
reg cnt_rst;
counter#(.N(32)) counter0 (.clk(clk), .rst(cnt_rst), .data(cnt));

always@(posedge clk or negedge rst) begin
	if(rst == 0) begin
		out <= 0;
		cnt_rst <= 0;
	end else begin
		cnt_rst <= 1;
		if(cnt == N-1) begin
			cnt_rst <= 0;
			out <= ~ out;
		end
	end
end

endmodule
