#ifndef _KPCONFIG_
#define _KPCONFIG_
#include <avr/io.h>
/*Keypad 4*4 config */
//row0 config 7,8,9,division
#define Row0  0
#define Row0reg DDRA
#define Row0Dataout PORTA



//row1 config 4,5,6,multiplication
#define Row1  1
#define Row1reg DDRA
#define Row1Dataout PORTA



//Row 2 config 1,2,3, minus
#define Row2  2
#define Row2reg DDRA
#define Row2Dataout PORTA



//Row 3 config on/off,0,=,plus
#define Row3  3
#define Row3reg DDRA
#define Row3Dataout PORTA



//column0 config on/off,1,4,7
#define Column0 4
#define Column0reg DDRA
#define Column0datain PINA
#define Column0pullup PORTA 



//column1 config 0,2,5,8
#define Column1 5
#define Column1reg DDRA
#define Column1datain PINA
#define Column1pullup PORTA 



//column2 config =,3,6,9
#define Column2 6
#define Column2reg DDRA
#define Column2datain PINA
#define Column2pullup PORTA 



//column3 config plus,minus,multiplication,division
#define Column3 7
#define Column3reg DDRA
#define Column3datain PINA
#define Column3pullup PORTA 






#endif