
module model_3(
    // input 
        input logic clk_i ,
        input logic [7:0] MD_i , MR_i ,

    // output
        output logic [15:0] result_o
);

    logic [15:0] mc [4:1] ;   // Generate new MR
    logic [8:0]  result[4:1] ;
    //logic        carry[4:1] ;
    logic [15:0] op [4:1] ;
    logic [15:0] re_op [4:2] ;
    logic [7:0]  __MD [4:2] ;
    logic [7:0]  __MR [4:2] ;
    //logic        take_carry[4:2] ;

    reg [15:0]   op_st [4:1] ;
    reg [7:0]    MD_st  [4:1] ;
    reg [7:0]    MR_st  [4:1] ;    
    //reg          carry_st [4:1] ;

// Stage 1

    mul_comp mul1 (
        // input
        .data_i (MD_i) ,
        .multi_i({MR_i[1:0],1'b0}) ,

        // output
        .result_o(result[1]) // 9 bit
    );

    assign mc[1] = {{7{result[1][8]}},result[1]} ;

    adder #(.N(16)) add1 (
        .A_i (16'b0) ,
        .B_i (mc[1]) ,
        //.carry_i(1'b0) ,
        .sel_i(1'b0) ,

        //.carry_o(carry[1]),
        .result_o(op[1])
    ); 

    always @(posedge clk_i) begin : Store_value_stage_1
        op_st[1] <= op[1] ;
        MD_st[1] <= MD_i ;
        MR_st[1] <= MR_i ;
        //carry_st[1] <= carry[1] ;
    end
// Stage 2

    assign re_op[2] = op_st [1] ;
    assign __MD[2]  = MD_st [1] ;
    assign __MR[2]  = MR_st [1] ;
    //assign take_carry[2] = carry_st[1] ;

    mul_comp mul2 (
        // input
        .data_i (__MD[2]) ,
        .multi_i(__MR[2][3:1]) ,

        // output
        .result_o(result[2]) // 9 bit
    );

    assign mc[2] = {{5{result[2][8]}},result[2],2'b00} ;

    adder #(.N(16)) add2 (
        .A_i (re_op[2]) ,
        .B_i (mc[2]) ,
      //  .carry_i(take_carry[2]) ,
        .sel_i(1'b0) ,

        //.carry_o(carry[2]),
        .result_o(op[2])
    ); 

    always @(posedge clk_i) begin : Store_value_stage_2
        op_st[2] <= op[2] ;
        MD_st[2] <= __MD[2] ;
        MR_st[2] <= __MR[2] ;
        //carry_st[2] <= carry[2] ;
    end

// Stage 3

    assign re_op[3] = op_st [2] ;
    assign __MD[3]  = MD_st [2] ;
    assign __MR[3]  = MR_st [2] ;
    //assign take_carry[3] = carry_st[2] ;    

    mul_comp mul3 (
        // input
        .data_i (__MD[3]) ,
        .multi_i(__MR[3][5:3]) ,

        // output
        .result_o(result[3]) // 9 bit
    );

    assign mc[3] = {{3{result[3][8]}},result[3],4'b00} ;

    adder #(.N(16)) add3 (
        .A_i (re_op[3]) ,
        .B_i (mc[3]) ,
        //.carry_i(take_carry[3]) ,
        .sel_i(1'b0) ,

        //.carry_o(carry[3]),
        .result_o(op[3])
    ); 

    always @(posedge clk_i) begin : Store_value_stage_3
        op_st[3] <= op[3] ;
        MD_st[3] <= __MD[3] ;
        MR_st[3] <= __MR[3] ;
        ///carry_st[3] <= carry[3] ;
    end

// Stage 4

    assign re_op[4] = op_st [3] ;
    assign __MD[4]  = MD_st [3] ;
    assign __MR[4]  = MR_st [3] ;
    //assign take_carry[4] = carry_st[3] ;

    mul_comp mul4 (
        // input
        .data_i (__MD[4]) ,
        .multi_i(__MR[4][7:5]) ,

        // output
        .result_o(result[4]) // 9 bit
    );

    assign mc[4] = {{1{result[4][8]}},result[4],6'b000000} ;

    adder #(.N(16)) add4 (
        .A_i (re_op[4]) ,
        .B_i (mc[4]) ,
        //.carry_i(take_carry[4]) ,
        .sel_i(1'b0) ,

        //.carry_o(carry[4]),
        .result_o(op[4])
    ); 

    always @(posedge clk_i) begin
        result_o <= op[4] ;
    end

endmodule : model_3
