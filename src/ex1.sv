module ex1 (
    // input
    input logic [7:0] MD_i  , 
    input logic [7:0] MR_i  , 
    input logic       clk_i ,

    // output
    output logic [15:0] result_o 
);
    logic [8:0] result          [3:0] ;
    logic [7:0] __MD            [3:1] ;
    logic [6:0] multi_result    [3:1] ;
    
    logic [2:0] __R3R2R1              ;
    logic [2:0] __R5R4R3        [2:1] ;
    logic [2:0] __R7R6R5        [3:1] ;
    
    logic [1:0] __P1P0          [3:1] ;
    logic [1:0] __P3P2          [3:2] ;
    logic [1:0] __P5P4                ;


    // Pipeline stage 0
    reg [2:0] Stg0_MR_7_to_5 ;
    reg [2:0] Stg0_MR_5_to_3 ;
    reg [2:0] Stg0_MR_3_to_1 ;
    reg [7:0] Stg0_MD        ;
    reg [8:0] Stg0_Muti      ;
    //reg [1:0] Stg0_P1P0      ;

    operand operand1 (
        // input
        .data1_i (MD_i)                 ,
        .data2_i (8'b0)                 ,
        .multi_i({MR_i[1:0],1'b0})  ,

        // output
        .result_o(result[0])  
    );

    always @(posedge clk_i) begin
        Stg0_MR_7_to_5 <= MR_i[7:5]      ;
        Stg0_MR_5_to_3 <= MR_i[5:3]      ;
        Stg0_MR_3_to_1 <= MR_i[3:1]      ;
        Stg0_MD        <= MD_i           ;
        Stg0_Muti      <= result[0]      ;
        // Stg0_P1P0      <= result[0][1:0] ;
    end

    // Pipeline stage 1
    reg [2:0] Stg1_MR_7_to_5 ;
    reg [2:0] Stg1_MR_5_to_3 ;
    reg [7:0] Stg1_MD        ;
    reg [8:0] Stg1_Muti      ;
    reg [1:0] Stg1_P1P0      ;

    assign __R3R2R1          = Stg0_MR_3_to_1 ;
    assign __MD[1]           = Stg0_MD        ;
    assign multi_result[1]   = Stg0_Muti[8:2] ;
    assign __P1P0[1]         = Stg0_Muti[1:0] ;
    assign __R7R6R5[1]       = Stg0_MR_7_to_5 ;
    assign __R5R4R3[1]       = Stg0_MR_5_to_3 ;

    operand operand2 (
        // input
        .data1_i (__MD[1])                                    ,
        .data2_i ({multi_result[1][6],multi_result[1]})       ,
        .multi_i(__R3R2R1)                                    ,

        // output
        .result_o(result[1])  
    );

    always @(posedge clk_i) begin
        Stg1_MR_7_to_5 <= __R7R6R5[1]    ;
        Stg1_MR_5_to_3 <= __R5R4R3[1]    ;
        Stg1_P1P0      <= __P1P0[1]      ; 
        Stg1_MD        <= __MD[1]        ;
        Stg1_Muti      <= result[1]      ;
    end

    // Pipeline stage 2
    reg [2:0] Stg2_MR_7_to_5 ;
    reg [7:0] Stg2_MD        ;
    reg [8:0] Stg2_Muti      ;
    reg [1:0] Stg2_P1P0      ;
    reg [1:0] Stg2_P3P2      ;

    assign __R7R6R5[2]     = Stg1_MR_7_to_5 ;
    assign __MD[2]         = Stg1_MD        ;
    assign multi_result[2] = Stg1_Muti[8:2] ;
    assign __R5R4R3[2]     = Stg1_MR_5_to_3 ;
    assign __P1P0[2]       = Stg1_P1P0      ; 
    assign __P3P2[2]       = Stg1_Muti[1:0] ;

    operand operand3 (
        // input
        .data1_i(__MD[2])                               ,
        .data2_i({multi_result[2][6],multi_result[2]})  ,
        .multi_i(__R5R4R3[2])                           ,

        // output
        .result_o(result[2])  
    );

    always @(posedge clk_i) begin
        Stg2_MD        <= __MD[2]            ;
        Stg2_MR_7_to_5 <= __R7R6R5[2]        ;
        Stg2_Muti      <= result[2]          ;
        Stg2_P1P0      <= __P1P0[2]          ;
        Stg2_P3P2      <= __P3P2[2]          ;
    end

    // Pipeline stage 3

    assign __R7R6R5[3]       = Stg2_MR_7_to_5 ;
    assign __MD[3]           = Stg2_MD        ;
    assign multi_result[3]   = Stg2_Muti[8:2] ;
    assign __P5P4            = Stg2_Muti[1:0] ;

    operand operand4(
        // input
        .data1_i(__MD[3])          ,
        .data2_i({multi_result[3][6],multi_result[3]})  ,
        .multi_i(__R7R6R5[3])  ,

        // output
        .result_o(result[3])
    );

    assign result_o[1:0]   = Stg2_P1P0        ;
    assign result_o[3:2]   = Stg2_P3P2        ;
    assign result_o[5:4]   = __P5P4           ;
    assign result_o[14:6]  = result[3]        ;
    assign result_o[15]    = result[3][8]     ;

endmodule : ex1 
