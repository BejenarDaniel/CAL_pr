/* 
 * File:   hal_line_follower.c
 */

#include "hal_line_follower.h"

void LF_vSetPinsDir(BOOL bDir)
{
	GPIO_u8SetPortPin(PORT_C,0,1,bDir);
	GPIO_u8SetPortPin(PORT_C,1,1,bDir);
	GPIO_u8SetPortPin(PORT_C,2,1,bDir);
	GPIO_u8SetPortPin(PORT_C,3,1,bDir);
	GPIO_u8SetPortPin(PORT_C,4,1,bDir);
	GPIO_u8SetPortPin(PORT_C,5,1,bDir);
}


void LF_vWritePins(void)
{
	GPIO_u8WritePortPin(PORT_C,0,1);
	GPIO_u8WritePortPin(PORT_C,1,1);
	GPIO_u8WritePortPin(PORT_C,2,1);
	GPIO_u8WritePortPin(PORT_C,3,1);
	GPIO_u8WritePortPin(PORT_C,4,1);
	GPIO_u8WritePortPin(PORT_C,5,1);
}

T_U8 LF_u8ReadPins(void)
{
	//setam pinii ca output si dam valoarea HIGH pe piin
	LF_vSetPinsDir(OUTPUT);
	LF_vWritePins();
	__delay_us(10);
	//dupa 10 us setam pinii ca input
	LF_vSetPinsDir(INPUT);
	__delay_us(250);
	//dupa 250 us citim pinii 
	return (T_U8)(GPIO_u16ReadPort(PORT_C)&0b111111);// &3F | 63
	
}