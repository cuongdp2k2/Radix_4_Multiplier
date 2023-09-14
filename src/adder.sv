module adder
#(
    parameter N = 8
)
(
    // input
        input logic [N-1:0] A_i ,
        input logic [N-1:0] B_i ,
        input logic         sel_i ,

    // output
        output logic [N-1:0] result_o
) ;
    assign result_o = ( sel_i ) ? A_i + (~B_i + 1) : A_i + B_i ;

endmodule : adder 
