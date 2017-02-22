#ifndef DELAY_H_
#define DELAY_H_
#include "../DataTypes/Data_Types.h"

#define   Timer_3       0x40033000      /*  Base address of timer 3       */
#define   RCGC          0x400FE000      /*  Base address of RCGC.         */

#define RCGC_T          0x604           /*  Offset of timer.              */
#define GPTMCFG         0x000           /*  GPTM Configuration            */
#define GPTMCTL         0x00C           /*  GPTM Control                  */
#define GPTMTAMR        0x004           /*  GPTM Timer A Mode             */
#define GPTMTAILR       0x028           /*  GPTM Timer A Interval Load    */
#define GPTMRIS         0x01C           /*  GPTM Raw Interrupt Status     */
#define GPTMICR         0x024           /*  GPTM Interrupt Clear          */

#define Timer_RCGC       (*((volatile u32*)(RCGC + RCGC_T)))
#define Timer3_GPTMCFG   (*((volatile u32*)(Timer_3 + GPTMCFG)))
#define Timer3_GPTMCTL   (*((volatile u32*)(Timer_3 + GPTMCTL)))
#define Timer3_GPTMTAMR  (*((volatile u32*)(Timer_3 + GPTMTAMR)))
#define Timer3_GPTMTAILR (*((volatile u32*)(Timer_3 + GPTMTAILR)))
#define Timer3_GPTMRIS   (*((volatile u32*)(Timer_3 + GPTMRIS)))
#define Timer3_GPTMICR   (*((volatile u32*)(Timer_3 + GPTMICR)))

#endif /* DELAY_H_ */
