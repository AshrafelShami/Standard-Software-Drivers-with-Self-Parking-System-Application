/*      Include Project files       */
#include "Timer_Add_Off.h"

/*      Function Definitions        */
void Timer_1_Init             ( void ){ /*    Initialization function for Timer 1.                  */
    Timer_RCGC |= (1 << 1);             /*    Activate clock for Timer 1 module.                    */
    Timer1_GPTMCTL   = 0;               /*    Disable timer for configuration.                      */
    Timer1_GPTMCFG   = 0x00;            /*    Set Timer to 32-bit Mode.                             */
    Timer1_GPTMTAMR |= 0x02;            /*    Select the Periodic shot mode.                        */
    Timer1_GPTMTAMR |=(1 << 4);         /*    Select the Up count Mode.                             */
    Timer1_GPTMTAILR|= 0xFFFF;          /*    value of 16,000 Hz in HEX.                            */
}

void Start_Timer_1            ( void ){ /*    API used to start the Timer                           */
    Timer1_GPTMCTL |= (1 << 0);
}

void Stop_Timer_1             ( void ){ /*    API used to stop  the Timer                           */
    Timer1_GPTMCTL &=~(1 << 0);
}

u32 Timer_1_GetCounts         ( void ){ /*    API used to return the value of the Timer Counter     */
    return Timer1_GPTMTAR;
}

void Timer_1_Reset ( u32 Reset_Value ){ /*    API used to Assign a value to the Timer               */
    Timer1_GPTMTAV = Reset_Value;
}
