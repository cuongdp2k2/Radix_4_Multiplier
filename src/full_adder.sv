module full_adder
#(
    parameter N = 2 
)
(
    // input
        input logic           Carry_i ,
        input logic [N-1 : 0] A_i , B_i ,

    // output
        output logic [N-1 : 0] Sum_o ,
        output logic           Carry_o  
);
    logic [N:0] A_temp = {1'b0,A_i} ;
    logic [N:0] B_temp = {1'b0,B_i} ;
    logic [N:0] Sum_temp ;

    assign Sum_temp = (Carry_i) ? A_temp + B_temp + 1 : A_temp + B_temp ;

    assign Sum_o = Sum_temp[N-1:0] ;
    assign Carry_o = Sum_temp[N]   ; 

endmodule : full_adder
