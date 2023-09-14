module operand1(
    // input
    input logic [7:0] A_i ,
    input logic [1:0] B_i ,
    input logic       clk_i ,

    // output
    output logic [9:0] Output_o 
);
    logic [15:0] temp ;

    logic carry_temp1 ;
    logic carry_temp2 ;
    logic carry_temp3 ;
    logic [3:0] temp15_12 ;

    mul_comp #(.N(2)) processA1A0 (
        // input
        .data1_i ( A_i[1:0] ) ,
        .data2_i ( B_i ) ,
        .clk_i   ( clk_i ) ,

        // output
        .result_o( temp[3:0] ) 
    );

    mul_comp #(.N(2)) processA3A2 (
        // input
        .data1_i ( A_i[3:2] ) ,
        .data2_i ( B_i ) ,
        .clk_i   ( clk_i ) ,

        // output
        .result_o( temp[7:4] ) 
    );

    mul_comp #(.N(2)) processA5A4  (
        // input
        .data1_i ( A_i[5:4] ) ,
        .data2_i ( B_i ) ,
        .clk_i   ( clk_i ) ,

        // output
        .result_o( temp[11:8] ) 
    );

    mul_comp #(.N(2)) processA7A6  (
        // input
        .data1_i ( ~(A_i[7:6]) + 1) ,
        .data2_i ( B_i ) ,
        .clk_i   ( clk_i ) ,

        // output
        .result_o( temp15_12 ) 
    );

    assign Output_o[1:0] = temp[1:0] ;
    assign temp[15:12] = ~temp15_12 + 1 ;

    full_adder #(.N(2)) Result32 (
        // Input
        .Carry_i        (1'b0) ,
        .A_i            (temp[3:2]) ,
        .B_i            (temp[5:4]) ,

        // Output
        .Sum_o          (Output_o[3:2]) , 
        .Carry_o        (carry_temp1)  
    ) ;

    full_adder #(.N(2)) Result54 (
        // Input
        .Carry_i        (carry_temp1) ,
        .A_i            (temp[7:6]) ,
        .B_i            (temp[9:8]) ,

        // Output
        .Sum_o          (Output_o[5:4]) ,
        .Carry_o        (carry_temp2)
    ) ;

    full_adder #(.N(2)) Result76 (
        // Input
        .Carry_i        (carry_temp2) ,
        .A_i            (temp[11:10]) ,
        .B_i            (temp[13:12]) ,

        // Output
        .Sum_o          (Output_o[7:6]) ,
        .Carry_o        (carry_temp3)
    ) ;

    full_adder #(.N(2)) Result98 (
        // Input
        .Carry_i        (carry_temp3) ,
        .A_i            (2'b0) ,
        .B_i            (temp[15:14]) ,

        // Output
        .Sum_o          (Output_o[9:8]) ,
        /* verilator lint_off PINCONNECTEMPTY */
        .Carry_o        ()
        /* verilator lint_on PINCONNECTEMPTY */
    ) ; 

endmodule : operand1 
