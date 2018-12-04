/* 
 * File:   sys_tasks.h
 * Author: Cristian T. A.
 *
 * Created on August 17, 2018, 1:26 PM
 */

#include "general.h"
#include "sys_tasks.h"

#include "mcal_init.h"
#include "hal_motor.h"
#include "hal_servo.h"
T_U8 counter=0;
T_U8 a=60;

void TASK_Inits()
{
    MCAL_vInit();

    GPIO_u8SetPortPin(PORT_A, 10, DIGITAL, OUTPUT);	
	vMotorInit();
	vSetMotorDir(0);
}
void TASK_1ms()
{

}

void TASK_5ms()
{

}

void TASK_10ms()
{   

}

void TASK_100ms()
{ 
	/* from hal_motor
    increaseDutyCycle();
	*/
	vSetMotorDir(FWD);
	vSetMotorSpeed( 70);
	counter++;
	
	if((counter %5)==0)
		{
			vSetAngle(a);
			a=a+10;
		}


}
void TASK_500ms()
{ 

}

void TASK_1000ms()
{

}