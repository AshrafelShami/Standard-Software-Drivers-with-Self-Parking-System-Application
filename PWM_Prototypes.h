
#include "../DataTypes/Data_Types.h"

#ifndef PWM_INIT_H_
#define PWM_INIT_H_

void PWM_B6_Init  ( u8 Duty_Cycle );
void PWM_B6_Start ( void );
void PWM_B6_Stop  ( void );

void PWM_C4_Init  ( u8 Duty_Cycle );
void PWM_C4_Start ( void );
void PWM_C4_Stop  ( void );
        
void PWM_E4_Init  ( u8 Duty_Cycle );
void PWM_E4_Start ( void );
void PWM_E4_Stop  ( void );

void PWM_B4_Init  ( u8 Duty_Cycle );
void PWM_B4_Start ( void );
void PWM_B4_Stop  ( void );

#endif /* PWM_INIT_H_ */
