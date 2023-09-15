#define MAX_SIM 200

void set_random(Vtop *dut, vluint64_t sim_unit) {
	dut->data1_i = rand() % 256 - 128 ;
	dut->data2_i = rand() % 256 - 128 ;
	//dut->sel_i   = rand() % 2   ;
}
