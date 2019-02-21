/* 
 * File:   hal_battery.c
 */

#include "hal_battery.h"

T_U16 BatLvl()
{
    
    T_U16 x = ADC_u16Read(0);
    T_F16 Vcit = (T_F16)x / (T_F16)4095 ;
            Vcit = Vcit * Vref; 
    T_F16 Vbat = Vcit * 4;
    T_U16 ChargeLvl = 0;
    T_F16 Rez = 0;
    if(Vbat >= 7)
    {
        Rez = (100-20)/(8.4-7);
        ChargeLvl = 100-((8.4-Vbat)*Rez);
    }
    else if(Vbat > 6.5)
            {
                Rez = (20-10)/(7-6.5);
                ChargeLvl = 20-((7-Vbat)*Rez);
            }
            else   if(Vbat > 6)
                    {
                        Rez = 10/(7-6.5);
                        ChargeLvl = 10-((6.5-Vbat)*Rez);
                    }
                    else 
                        ChargeLvl = 0;
    
    if(ChargeLvl <= 60)
    {
        
    }
    
     return ChargeLvl;           
    
}