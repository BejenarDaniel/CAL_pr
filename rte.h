/* 
 * File:   rte.h
 */
#ifndef RTE_H
#define	RTE_H

#include "hal_motor.h"
#include "hal_servo.h"
#include "hal_line_follower.h"

#define SetDir(u8Angle) vSetAngle(u8Angle)
#define SetSpeed(u8Dir,u8Speed) vSetMotorDirSpeed( u8Dir, u8Speed)
#define LineSensor() LF_u8ReadPins()

void RTE_Task1ms();

#endif
