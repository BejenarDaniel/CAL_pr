#include "general.h"
#include "hal_motor.h"
int main()
{
    vMotorInit();
	vSetMotorDir(FWD);
	vSetMotorSpeed(50);

    while(1)
    {
        
    }
    return 0;
}