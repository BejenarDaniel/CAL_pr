/* 
 * File:   hal_motor.h
 */
#ifndef HAL_MOTOR_H
#define	HAL_MOTOR_H

#include "general_types.h"
#include "mcal_pwm.h"
#include "mcal_gpio.h"

#define FWD 0
#define BCK 1

void vMotorInit();
void vSetMotorDir(T_U8 u8Dir);
void vSetMotorSpeed(T_U8 u8Speed);
void vSetMotorDirSpeed(T_U8 u8Dir,T_U8 u8Speed);


#endif /* HAL_MOTOR_H */