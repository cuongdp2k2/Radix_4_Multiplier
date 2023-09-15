module model_2(
    // input 
        input logic clk_i ,
        input logic [7:0] MD_i , MR_i ,

    // output
        output logic [15:0] result_o
);
    logic [16:0] shif_MR [6:1] ;
    logic [8:0 ]  mc     [6:0] ;
    logic [16:0] result  [6:1] ;
    logic [7:0] MD_wire  [6:1] ;
    logic [16:0] MR_gen_wire [6:1] ;

    reg [16:0] MR_gen [5:0]   ;
    reg [7:0] __MD [5:0] ;
    

// stage 0

    always @(posedge clk_i) begin
        __MD[0] <= MD_i ;
        MR_gen[0] <= (MR_i[7]) ? {8'hff,MR_i,1'b0} : {8'b0,MR_i,1'b0} ;
    end

    // stage 1
    assign MR_gen_wire[1] = MR_gen[0] ;
    assign shif_MR[1] = MR_gen_wire[1] >> 1 ;
    assign MD_wire[1] = __MD[0] ;
    
    mul_comp mul1(
        .data_i (MD_wire[1]) ,
        .multi_i(MR_gen_wire[1][2:0]) ,

        .result_o(mc[1])
    );

    adder #(.N(17)) add1 (
        .A_i (MR_gen_wire[1]) ,
        .B_i ({mc[1],8'b0}) ,
        .sel_i (1'b0) ,

        .result_o (result[1]) 
    );

    always @(posedge clk_i) begin
        __MD[1] <= MD_wire[1] ;
        MR_gen[1] <= result[1] ;
        
    end

// stage 2
    assign MR_gen_wire[2] = MR_gen[1] ;
    assign shif_MR[2] = MR_gen_wire[2] >> 1 ;
    assign MD_wire[2] = __MD[1] ;
    
    always @(posedge clk_i) begin
        __MD[2] <= MD_wire[2] ;
        MR_gen[2] <= shif_MR[2] ;
    end

// stage 3
    assign MR_gen_wire[3] = MR_gen[2] ;
    assign shif_MR[3] = MR_gen_wire[3] >> 1 ;
    assign MD_wire[3] = __MD[2] ;
    
    mul_comp mul2(
        .data_i (MD_wire[3]) ,
        .multi_i(MR_gen_wire[3][2:0]) ,

        .result_o(mc[3])
    );

    adder #(.N(17)) add2 (
        .A_i (MR_gen_wire[3]) ,
        .B_i ({mc[3],8'b0}) ,
        .sel_i (1'b0) ,

        .result_o (result[3]) 
    );

    always @(posedge clk_i) begin
        __MD[3] <= MD_wire[3] ;
        MR_gen[3] <= result[3] ;
    end

// stage 4
    assign MR_gen_wire[4] = MR_gen[3] ;
    assign shif_MR[4] = MR_gen_wire[4] >> 2 ;
    assign MD_wire[4] = __MD[3] ;
    
    mul_comp mul3(
        .data_i (MD_wire[4]) ,
        .multi_i(MR_gen_wire[4][2:0]) ,

        .result_o(mc[4])
    );

    adder #(.N(17)) add3 (
        .A_i (MR_gen_wire[4]) ,
        .B_i ({mc[4],8'b0}) ,
        .sel_i (1'b0) ,

        .result_o (result[4]) 
    );

    always @(posedge clk_i) begin
        __MD[4] <= MD_wire[4] ;
        MR_gen[4] <= result[4] ;
    end

// stage 5
    assign MR_gen_wire[5] = MR_gen[4] ;
    assign shif_MR[5] = MR_gen_wire[5] >> 1 ;
    assign MD_wire[5] = __MD[4] ;
    
    always @(posedge clk_i) begin
        __MD[5] <= MD_wire[5] ;
        MR_gen[5] <= shif_MR[5] ;
    end

// stage 6
    assign MR_gen_wire[6] = MR_gen[5] ;
    assign shif_MR[6] = MR_gen_wire[6] >> 1 ;
    assign MD_wire[6] = __MD[5] ;
    
    mul_comp mul4(
        .data_i (MD_wire[6]) ,
        .multi_i(MR_gen_wire[6][2:0]) ,

        .result_o(mc[6])
    );

    adder #(.N(17)) add4 (
        .A_i (MR_gen_wire[6]) ,
        .B_i ({mc[6],8'b0}) ,
        .sel_i (1'b0) ,

        .result_o (result[6]) 
    );

    always @(posedge clk_i) begin
        result_o <= result[6][15:0] >> 1 ;
    end
    
endmodule : model_2
