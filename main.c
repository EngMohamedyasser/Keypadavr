/*
 * keypad_driver.c
 *
 * Created: 11/4/2020 3:45:02 AM
 * Author : 315150386
 */ 

#include <avr/io.h>
#include "Keypad.h"


int main(void)
{
	vKeypadInit();
    /* Replace with your application code */
    while (1) 
    {
		u8ScanKeypad();
    }
}

