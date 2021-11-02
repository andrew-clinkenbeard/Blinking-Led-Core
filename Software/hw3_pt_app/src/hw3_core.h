#ifndef _hw3_H_INCLUDED
#define _hw3_H_INCLUDED

#include "chu_init.h"

class HW3Core {
public:
   /**
    * register map
    *
    */
   enum {
      BLINK0_REG = 0, /**< Blink rate for LED 12 in ms */
	  BLINK1_REG = 1, /**< Blink rate for LED 13 */
	  BLINK2_REG = 2, /**< Blink rate for LED 14 */
	  BLINK3_REG = 3 /**< Blink rate for LED 15 */
   };
   /**
    * constructor.
    *
    */
   HW3Core(uint32_t core_base_addr);
   ~HW3Core();                  // not used


   /*
    * function to write a timer to all of the timer reg
    *
    */
   void write_reg(uint32_t time0, uint32_t time1, uint32_t time2, uint32_t time3);

private:
   uint32_t base_addr;
   uint32_t wr_data0;
   uint32_t wr_data1;
   uint32_t wr_data2;
   uint32_t wr_data3;
};

#endif  // _HW3_H_INCLUDED
