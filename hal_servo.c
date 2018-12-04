#include "hal_servo.h"

void vSetAngle(T_U8 u8Angle)
{
	T_F16 duty;

	if(u8Angle < 60)
		u8Angle=60;
	else if(u8Angle> 120)
		u8Angle=120;
	

	duty=OFFSET_PERCENT_DUTY+ RESOLUTION*(u8Angle- OFFSET_ANGLE);

	

	PWM1_vSetDuty(duty, 1);

}