#ifndef _KEYPADH_
#define _KEYPADH_
#include "config.h"
#define  INPUT_STATE 0
#define  OUTPUT_STATE 1
#define  NO_OUTPUT 1
#define Not_valid 0xff
#define check_lines ((Column0datain&(1<<Column0))\
                    &&(Column1datain&(1<<Column1))\
					&&(Column2datain&(1<<Column2))\
                    &&(Column3datain&(1<<Column3)))
void vKeypadInit(void);
uint8_t u8ScanKeypad();
#endif
