module model_4(
    // input 
        input logic [7:0] X_i , Y_i ,

    // output
        output logic [15:0] Output_o ,
);
// Wires
    logic [2:0] encode[3:0] ;
    logic [9:0] encode[3:0] ;

// -------------- Encode ------------------
    always_comb begin : Encode_1

    end

    always_comb begin : Encode_2
    end 

    always_comb begin : Encode_3
    end
    always_comb begin : Encode_4
    end

// ------------ 9 bit Deocode --------------
    always_comb begin : 9_bit_Decode_1
    end
    always_comb begin : 9_bit_Decode_2
    end
    always_comb begin : 9_bit_Decode_3
    end
    
    always_comb begin : 9_bit_Decode_4
    end


endmodule : model_4;
