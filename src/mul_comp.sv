// Unsigned Multiplier Component

module mul_comp
#(
    parameter Mx0_1         = 3'b000 ,
    parameter Mx1_1         = 3'b001 ,
    parameter Mx1_2         = 3'b010 ,
    parameter Mx2           = 3'b011 ,
    parameter Mx_minus2     = 3'b100 ,
    parameter Mx_minus1_1   = 3'b101 ,
    parameter Mx_minus1_2   = 3'b110 ,
    parameter Mx0_2         = 3'b111 
)
(
    // input
    input logic [7:0] data_i ,
    input logic [2:0] multi_i ,
    //input logic         clk_i   ,

    // output
    output logic [8:0] result_o
) ;
    logic [8:0] data_temp ;
    assign data_temp = {data_i[7],data_i} ;


    always_comb begin
        case(multi_i)
            // Result = Data x 0
            Mx0_1 , 
            Mx0_2       :  result_o = 0 ;

            // Result = Data
            Mx1_1,
            Mx1_2       :  result_o = data_temp ;

            // Result = Data x 2
            Mx2         :  result_o = data_temp * 2 ;

            // Result = -Data 
            Mx_minus1_1,
            Mx_minus1_2 : result_o = ~data_temp + 1 ;

            // Result = -2 x Data
            Mx_minus2   : result_o = ~(2 * data_temp) + 1 ;

            default     : result_o <= 0 ;
        endcase
    end
endmodule : mul_comp 
