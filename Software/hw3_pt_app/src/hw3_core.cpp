#include "hw3_core.h"

HW3Core::HW3Core(uint32_t core_base_addr) {
   base_addr = core_base_addr;
   wr_data0 = 0;
   wr_data1 = 0;
   wr_data2 = 0;
   wr_data3 = 0;
}

HW3Core::~HW3Core() {
}


void HW3Core::write_reg(uint32_t time0, uint32_t time1, uint32_t time2, uint32_t time3) {
	wr_data0 = time0;
	wr_data1 = time1;
	wr_data2 = time2;
	wr_data3 = time3;

	io_write(base_addr, BLINK0_REG, wr_data0);
	io_write(base_addr, BLINK1_REG, wr_data1);
	io_write(base_addr, BLINK2_REG, wr_data2);
	io_write(base_addr, BLINK3_REG, wr_data3);
}



