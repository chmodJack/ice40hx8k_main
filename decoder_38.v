module decoder_38
#(
	parameter A=8'b10000000,
	parameter B=8'b01000000,
	parameter C=8'b00100000,
	parameter D=8'b00010000,
	parameter E=8'b00001000,
	parameter F=8'b00000100,
	parameter G=8'b00000010,
	parameter H=8'b00000001
)
(
	input wire[2:0] a,
	output wire[7:0] b
);

assign b =
	(a == 3'b000) ? A :
	(a == 3'b001) ? B :
	(a == 3'b010) ? C :
	(a == 3'b011) ? D :
	(a == 3'b100) ? E :
	(a == 3'b101) ? F :
	(a == 3'b110) ? G :
	(a == 3'b111) ? H :
	8'b11111111;

endmodule
