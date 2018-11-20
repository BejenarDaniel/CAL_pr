/* 
 * File:   hal_motor.c
 */

#include "hal_motor.h"


void vMotorInit()
{
	PWM1_vInit();
	GPIO_u8SetPortPin(PORT_A,9,DIGITAL,OUTPUT);
}

void vSetMotorDir(T_U8 u8Dir)
{

	GPIO_u8WritePortPin(PORT_A,9,u8Dir);
}

void vSetMotorSpeed(T_U8 u8Speed)
{
	if(u8Speed>100)
		u8Speed=100;

	PWM1_vSetDuty(u8Speed,2);
}

void vSetMotorDirSpeed(T_U8 u8Dir,T_U8 u8Speed)
{
	vSetMotorDir(u8Dir);
	vSetMotorSpeed(u8Speed);
}