#include "general.h"
#include "hal_servo.h"
#include "hal_motor.h"
#include "hal_line_follower.h"
#include "mcal_timers.h"

T_U8 read;



int main()
{

	TASK_Inits();
//	TASK_vSchedule();
    
    while(1)
    {
        read = LF_u8ReadPins();
		if(read ==0b00110000) //vireaza stanga
		{
			vSetAngle(65);
		}
		if(read ==0x0A)//inainte
		{
			vSetAngle(90);
		}
		if(read ==0x03)//dreapta
		{
			vSetAngle(115);
		}
		if(read ==0x05)//dreapta jumate
		{
			vSetAngle(100);
		}
		if(read ==0x18)//stanga jumate
		{
			vSetAngle(75);
		}
		if(read ==0)
		{
			vSetAngle(90);
		}

    }
    return 0;
}