module operand2(
    // input
        input logic [7:0] A_i,
        input logic [1:0] B_i,
        input logic       clk_i,

    // output
        output logic [9:0] Output_o
);
    logic [15:0] temp ;
    logic carry_temp1 ;
    logic carry_temp2 ;
    /* verilator lint_off UNUSED */
    logic carry_temp3 ;
    /* verilator lint_on UNUSED */
    logic [3:0][3:0] temp2  ;

    mul_comp #(.N(2)) processA1A0 (
        // input
        .data1_i ( ~(A_i[1:0]) + 1 ) ,
        .data2_i ( B_i ) ,
        .clk_i   ( clk_i ) ,

        // output
        .result_o( temp[3:0] ) 
    );

    assign temp2[0] = ~temp[3:0] + 1 ;

    mul_comp #(.N(2)) processA3A2 (
        // input
        .data1_i ( ~(A_i[3:2]) + 1 ) ,
        .data2_i ( B_i ) ,
        .clk_i   ( clk_i ) ,

        // output
        .result_o( temp[7:4] ) 
    );

    assign temp2[1] = ~temp[7:4] + 1 ;

    mul_comp #(.N(2)) processA5A4  (
        // input
        .data1_i ( ~(A_i[5:4]) + 1 ) ,
        .data2_i ( B_i ) ,
        .clk_i   ( clk_i ) ,

        // output
        .result_o( temp[11:8] ) 
    );

    assign temp2[2] = ~temp[11:8] + 1 ;

    mul_comp #(.N(2)) processA7A6  (
        // input
        .data1_i ( ~(A_i[7:6]) + 1) ,
        .data2_i ( ~(B_i) + 1 ) ,
        .clk_i   ( clk_i ) ,

        // output
        .result_o( temp[15:12] ) 
    );

    assign temp2[3] = ~temp[15:12] + 1;

    assign Output_o[1:0] = temp2[0][1:0] ;

    full_adder #(.N(2)) Result32 (
        // Input
        .Carry_i        (1'b0) ,
        .A_i            (temp2[0][3:2]) ,
        .B_i            (~(temp2[1][1:0]) + 1 )  ,

        // Output
        .Sum_o          (Output_o[3:2]) , 
        .Carry_o        (carry_temp1)  
    ) ;

    full_adder #(.N(2)) Result54 (
        // Input
        .Carry_i        (carry_temp1) ,
        .A_i            (temp2[1][3:2]) ,
        .B_i            (~(temp2[2][1:0]) + 1 ) ,

        // Output
        .Sum_o          (Output_o[5:4]) ,
        .Carry_o        (carry_temp2)
    ) ;

    full_adder #(.N(2)) Result76 (
        // Input
        .Carry_i        (carry_temp2) ,
        .A_i            (temp2[2][3:2]) ,
        .B_i            (~(temp2[3][1:0]) + 1 ) ,

        // Output
        .Sum_o          (Output_o[7:6]) ,
        .Carry_o        (carry_temp3)
    ) ;

    assign Output_o[9:8] = ~(temp2[3][3:2]) + 1 ;

endmodule : operand2
