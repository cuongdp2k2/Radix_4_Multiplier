#include <math.h>
#define MAX_SIM 500

void set_random(Vtop *dut, vluint64_t sim_unit) {
	dut->data1_i = rand() % 255  ;
	dut->data2_i = rand() % 255  ;
	//dut->sel_i   = rand() % 2   ;

	// Test
	static char data_1[4] = {0,0,0,0} ;
	static char data_2[4] = {0,0,0,0} ;
	static int test_counter = 0 ;
	static int test_pass    = 0 ;
	static int test_fail    = 0 ;
	if(sim_unit < 4 ){
		data_1[sim_unit] = dut->data1_i ;
		data_2[sim_unit] = dut->data2_i ;
	} else {
		test_counter ++ ; 
		long pass_mul =  data_1[0] * data_2[0] ;
		if(pass_mul < 0) pass_mul += 65536 ;
		// Check and Report
		if(pass_mul == dut->result_o){
			 printf("Test %d : %d %d :  \033[0;32mPASSS\033[0m\n ",test_counter,data_1[0],data_2[0]) ;
			 test_pass ++ ;
		}
		else {
			printf("Test %d : %d %d :  \033[0;31mFAIL\033[0m\n ",test_counter,data_1[0],data_2[0])  ;
			test_fail ++ ;
		}
		
		// Update Value
		for(int i = 0 ; i<3 ; i++) {
			data_1[i] = data_1[i+1] ;
			data_2[i] = data_2[i+1] ;
		} 

		data_1[3] = dut->data1_i ;
		data_2[3] = dut->data2_i ; 

	}

	// FINAL REPORT 
	if(sim_unit == MAX_SIM - 1) {
		printf("\n\nTotal PASS: \033[0;32m%d\033[0m/%d ",test_pass,test_counter);
		printf("\nTotal FAIL: \033[0;31m%d\033[0m/%d\n",test_fail,test_counter);
	}
	
}

// void testbench(Vtop *dut,vluint64_t sim_unit){
	
// }