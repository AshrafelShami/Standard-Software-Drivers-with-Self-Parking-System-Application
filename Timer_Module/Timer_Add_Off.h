
#include "../DataTypes/Data_Types.h"
#include "Timer_Base_Address.h"
#include "Timer_Offsets.h"

#ifndef TIMER_ADD_OFF_H_
#define TIMER_ADD_OFF_H_

#define Timer_RCGC        (*((volatile u32*)(RCGC_Timer + RCGC_T)))
#define Timer_WRCGC       (*((volatile u32*)(RCGC_Timer + RCRC_WT)))


#define Timer1_GPTMCTL    (*((volatile u32*)(Timer_1 + GPTMCTL)))
#define Timer1_GPTMCFG    (*((volatile u32*)(Timer_1 + GPTMCFG)))
#define Timer1_GPTMTAMR   (*((volatile u32*)(Timer_1 + GPTMTAMR)))
#define Timer1_GPTMTAILR  (*((volatile u32*)(Timer_1 + GPTMTAILR)))
#define Timer1_GPTMICR    (*((volatile u32*)(Timer_1 + GPTMICR)))
#define Timer1_GPTMRIS    (*((volatile u32*)(Timer_1 + GPTMRIS)))
#define Timer1_GPTMTAV    (*((volatile u32*)(Timer_1 + GPTMTAV)))
#define Timer1_GPTMTAPR   (*((volatile u32*)(Timer_1 + GPTMTAPR)))
#define Timer1_GPTMTAR    (*((volatile u32*)(Timer_1 + GPTMTAR)))


#define Timer3_GPTMCFG    (*((volatile u32*)(Timer_3 + GPTMCFG)))
#define Timer3_GPTMCTL    (*((volatile u32*)(Timer_3 + GPTMCTL)))
#define Timer3_GPTMTAMR   (*((volatile u32*)(Timer_3 + GPTMTAMR)))
#define Timer3_GPTMTAILR  (*((volatile u32*)(Timer_3 + GPTMTAILR)))
#define Timer3_GPTMRIS    (*((volatile u32*)(Timer_3 + GPTMRIS)))
#define Timer3_GPTMICR    (*((volatile u32*)(Timer_3 + GPTMICR)))

#endif /* TIMER_ADD_OFF_H_ */
