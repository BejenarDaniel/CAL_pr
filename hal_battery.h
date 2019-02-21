/* 
 * File:   hal_battery.h
 * Author: student
 *
 * Created on February 21, 2019, 6:46 PM
 */

#ifndef HAL_BATTERY_H
#define	HAL_BATTERY_H

#include "general_types.h"
#include "mcal_adc.h"
#include "general.h"

#define Vref 3.07

#ifdef	__cplusplus
extern "C" {
#endif

T_U16 BatLvl();  


#ifdef	__cplusplus
}
#endif

#endif	/* HAL_BATTERY_H */

