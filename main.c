#include "general.h"
#include "hal_servo.h"
#include "hal_motor.h"
#include "hal_line_follower.h"
#include "mcal_timers.h"

T_U8 read;

#pragma config ICS = PGD2               // Comm Channel Select (Communicate on PGC2/EMUC2 and PGD2/EMUD2)
#pragma config JTAGEN = ON
int main()
{

	TASK_Inits();
	TASK_vSchedule();
    
    while(1)
    {
        
    }
    return 0;
}