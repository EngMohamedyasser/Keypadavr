#ifndef _KEYPAD_
#define _KEYPAD_
#include "config.h"
#include "keypad.h"
 static const char G_keypad[4][4]={{'7','8','9','/'},{'4','5','6','*'},{'1','2','3','-'},{'C','0','=','+'}};
 void vKeypadInit(void){
//setting rows
	Row0reg|=(OUTPUT_STATE<<Row0);
	Row1reg|=(OUTPUT_STATE<<Row1);
	Row2reg|=(OUTPUT_STATE<<Row2);
	Row3reg|=(OUTPUT_STATE<<Row3);
//setting columns
	Column0reg&=~(OUTPUT_STATE<<Column0);
	Column1reg&=~(OUTPUT_STATE<<Column1);
	Column2reg&=~(OUTPUT_STATE<<Column2);
	Column3reg&=~(OUTPUT_STATE<<Column3);	
//setting pullup res
	Column0pullup|=(OUTPUT_STATE<<Column0);
	Column1pullup|=(OUTPUT_STATE<<Column1);
	Column2pullup|=(OUTPUT_STATE<<Column2);
	Column3pullup|=(OUTPUT_STATE<<Column3);
//setting no output
Row0Dataout|=(NO_OUTPUT<<Row0);
Row1Dataout|=(NO_OUTPUT<<Row1);
Row2Dataout|=(NO_OUTPUT<<Row2);
Row3Dataout|=(NO_OUTPUT<<Row3);
}
uint8_t u8ScanKeypad(){
	char line=Not_valid;
	char result=Not_valid;
	uint8_t row=0;
	for(row=0;row<4;row++){
			Row0Dataout|=(NO_OUTPUT<<Row0);
			Row1Dataout|=(NO_OUTPUT<<Row1);
			Row2Dataout|=(NO_OUTPUT<<Row2);
			Row3Dataout|=(NO_OUTPUT<<Row3);		
		switch(row)
		{
			case 0:Row0Dataout&=~(OUTPUT_STATE<<Row0);
			case 1:Row1Dataout&=~(OUTPUT_STATE<<Row1);
			case 2:Row2Dataout&=~(OUTPUT_STATE<<Row2);
			case 3:Row3Dataout&=~(OUTPUT_STATE<<Row3);
		}
		if((Column0datain&(1<<Column0))==INPUT_STATE){line=0;}
		else if((Column1datain&(1<<Column1))==INPUT_STATE){line=1;}
		else if((Column2datain&(1<<Column2))==INPUT_STATE){line=2;}
		else if((Column3datain&(1<<Column3))==INPUT_STATE){line=3;}
	if(line!=Not_valid){
		while(check_lines!=INPUT_STATE);
	result=G_keypad[row][line];
	break;
	}}
	return result;
	}







#endif