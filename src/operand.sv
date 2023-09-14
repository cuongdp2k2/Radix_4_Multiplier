module operand(
    // input
        input logic [7:0] data1_i ,
        input logic [7:0] data2_i ,
        input logic [2:0] multi_i ,
    
    // output
        output logic [9:0] result_o
);
    logic [9:0] multi_result ;
    logic [9:0] gen_data2 ;

    always_comb begin 
        if( data2_i[7] ) begin
            gen_data2 = {2'b11 , data2_i} ;
        end else begin
            gen_data2 = {2'b00 , data2_i} ;
        end
    end 

    mul_comp multiflexer(
        // input
        .data_i  (data1_i) ,
        .multi_i (multi_i) ,

        // output
        .result_o(multi_result) 
    );

    adder #(.N(10)) add_comp(
        // input
        .A_i(multi_result) ,
        .B_i(gen_data2) ,
        .sel_i(multi_i[2]) ,
        
        // output
        .result_o(result_o)
    );

    endmodule : operand
