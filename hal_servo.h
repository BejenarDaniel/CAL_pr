#ifndef HAL_SERVO_H_
#define HAL_SERVO_H_

#include "general_types.h"
#include "mcal_pwm.h"



#define OFFSET_PERCENT_DUTY 4
#define RESOLUTION 0.04375
#define OFFSET_ANGLE 10

void vSetAngle(T_U8 u8Angle);

#endif