/*      Include Project files       */
#include "Delay.h"

/*      Function Definitions        */
void _delay_s( u32 Sec ){                   /*  Delay API with Seconds                              */
    Timer_RCGC      |= (1 << 3);            /*  Enable clock for timer 3.                           */
    Timer3_GPTMCTL   = 0;                   /*  Disable timer for configuration.                    */
    Timer3_GPTMCFG   = 0x00;                /*  Set 16-bit Mode.                                    */
    Timer3_GPTMTAMR  = 0x02;                /*  Periodic Mode.                                      */
    Timer3_GPTMTAILR = (16000000 - 1);      /*  16,000,000 (PIOC in RCGC2 register provides 16MHz). */
    Timer3_GPTMICR  |= 0x1;                 /*  Reset Overflow flag.                                */
    Timer3_GPTMCTL  |= 0x01;                /*  Enable timer.                                       */
    u32 i;
    for (i = 0 ; i < Sec ; i++){
        while((Timer3_GPTMRIS & 0x1) == 0);
        Timer3_GPTMICR = 0x1;
    }
}

void _delay_ms( u32 milliS ){               /*  Delay API with milliseconds                         */
    Timer_RCGC      |= (1 << 3);            /*  Enable clock for timer 3.                           */
    Timer3_GPTMCTL   = 0;                   /*  Disable timer for configuration.                    */
    Timer3_GPTMCFG   = 0x04;                /*  Set 16-bit Mode.                                    */
    Timer3_GPTMTAMR  = 0x02;                /*  Periodic Mode.                                      */
    Timer3_GPTMTAILR = (16000 - 1);         /*  16,000 (PIOC in RCGC2 register provides 16MHz)      */
    Timer3_GPTMICR   = 0x01;                /*  Reset Overflow flag.                                */
    Timer3_GPTMCTL  |= 0x01;                /*  Enable timer.                                       */
    u32 i;
    for (i = 0 ; i < milliS ; i++){
        while((Timer3_GPTMRIS & 0x1) == 0);
        Timer3_GPTMICR = 0x1;
    }
}

void _delay_us( u32 microS ){               /*  Delay API with MicroSeconds                         */
    Timer_RCGC      |= (1 << 3);            /*  Enable clock for timer 3.                           */
    Timer3_GPTMCTL   = 0;                   /*  Disable timer for configuration.                    */
    Timer3_GPTMCFG   = 0x04;                /*  Set 16-bit Mode.                                    */
    Timer3_GPTMTAMR  = 0x02;                /*  Periodic Mode.                                      */
    Timer3_GPTMTAILR = (16 - 1);            /*  16 (PIOC in RCGC2 register provides 16MHz)          */
    Timer3_GPTMICR  |= 0x1;                 /*  Reset Overflow flag.                                */
    Timer3_GPTMCTL  |= 0x01;                /*  Enable timer.                                       */
    u32 i;
    for (i = 0 ; i < microS ; i++){
        while((Timer3_GPTMRIS & 0x1) == 0);
        Timer3_GPTMICR = 0x1;
    }
}

void delay(u32 count){
    u32  i = 0;
    while(i < count)
        i++;
}

