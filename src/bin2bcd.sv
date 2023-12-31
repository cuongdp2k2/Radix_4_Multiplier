module bin2bcd(
   input logic [15:0] bin,
   output reg [19:0] bcd,
   output logic sign
   );
logic [15:0] bint;
always_comb begin
  if (bin[15]) begin
    sign = 1'b1;
    bint = ~bin + 1'b1;
  end
  else begin
    sign = 1'b0;
    bint = bin;
  end
end   
integer i;
	
always @(bin) begin
    bcd=0;		 	
    for (i=0;i<16;i=i+1) begin					//Iterate once for each bit in input number
        if (bcd[3:0] >= 5) bcd[3:0] = bcd[3:0] + 3;		//If any BCD digit is >= 5, add three
	if (bcd[7:4] >= 5) bcd[7:4] = bcd[7:4] + 3;
	if (bcd[11:8] >= 5) bcd[11:8] = bcd[11:8] + 3;
	if (bcd[15:12] >= 5) bcd[15:12] = bcd[15:12] + 3;
	if (bcd[19:16] >= 5) bcd[19:16] = bcd[19:16] + 3;
	bcd = {bcd[18:0],bint[15-i]};				//Shift one bit, and shift in proper bit from input 
    end
end
endmodule
