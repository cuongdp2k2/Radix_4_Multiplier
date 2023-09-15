/* verilator lint_off UNOPTFLAT */
module adder
#(
    parameter N = 9
)
(
    // input
        input logic [N-1:0] A_i ,
        input logic [N-1:0] B_i ,
        //input logic         carry_i ,
        input logic         sel_i ,

    // output
        //output logic         carry_o ,
        output logic [N-1:0] result_o

) ;
    assign result_o = (sel_i) ? A_i - B_i : A_i + B_i ;

    // logic [N:0] A_temp , B_temp , result_temp ;

    // assign A_temp = {A_i[N-1],A_i} ;
    // assign B_temp = {B_i[N-1],B_i} ;

    // always_comb begin
    //     if(carry_i) begin
    //         if(sel_i) result_temp = A_temp - B_temp - 1 ;
    //         else      result_temp = A_temp + B_temp + 1 ;
    //     end else begin
    //         result_temp = (sel_i) ? A_temp - B_temp : A_temp + B_temp ;
    //     end
    // end

    // assign carry_o = result_temp[N] ;
    // assign result_o = result_temp[N-1:0] ;

endmodule : adder 
