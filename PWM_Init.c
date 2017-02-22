/*      Include Project files       */
#include "../DataTypes/Data_Types.h"
#include "../GPIO/GPIO_Address_Offset.h"
#include "PWM_Registers.h"

/*      Defines      */
#define __PWM_LOAD__	0xFFFF

/*      Function Definitions        */
void PWM_B6_Init( u8 Duty_Cycle ){  /*  API used to initialize PWM on pin B6 for motion control             */
    RCGC0__  |= (1 << 20);          /*  enable clock for pwm module.                                        */
    RCC____ &=~ (1 << 20);          /*  No division                                                         */
    RCGCPWM_ |=1;                   /*  RCGCPWM_ first bit for module 0 and second bit for module 1         */
    PWM0_RCC |= 1;                  /*  PWM0_RCC and PWM1_RCC   to enable clock for each module             */
    RCGC2__ |= (1<<1);              /*  RCGC2__  Run Mode Clock Gating Control Register 2 for each GPIO     */
    AltFunSet_B |= 0x40;            /*  enable alternative function for B6                                  */
    PortControl_B |= 0x04000000;    /*  control alternative function to use PWM0                            */
    DENPORT_B |= 0x40;              /*  digital enable port B                                               */
    PWM0CTL_PWM0 = 0;               /*  stop counter                                                        */
    PWM0GENA_PWM0 |= 0x0000008C;    /*  Generate for PWM signal                                             */
    PWM0LOAD_PWM0 = __PWM_LOAD__;   /*  set Period of cycle                                                 */
    PWM0CMPA_PWM0 |= ((__PWM_LOAD__ * Duty_Cycle)/100); /*  set (Ton or Toff) to change the duty cycle      */
    PWM0CTL_PWM0 |= 1;              /*  start counter                                                       */
    PWMENABLE_PWM0  = 1;            /*  enable PWM                                                          */
}
void PWM_B6_Start( void ){          /*  API used to Start PWM for motion control                            */
    DataPORT_F |= (1 << 4);
}
void PWM_B6_Stop( void ){           /*  API used to Stop PWM for motion control                             */
    DataPORT_F      &=~(1 << 4);
    PWM0CTL_PWM0    &=~1;
    PWMENABLE_PWM0  &=~1;
}

void PWM_B4_Init( u8 Duty_Cycle ){
    RCGC0__  |= (1 << 20);
    RCC____ &=~ (1 << 20);
    RCGCPWM_ |=1;
    PWM0_RCC |= 1;
    RCGC2__ |= (1<<1);
    AltFunSet_B |= 0x10;
    PortControl_B |= 0x00040000;
    DENPORT_B |= 0x10;
    PWM1CTL_PWM0 = 0;
    PWM1GENA_PWM0 |= 0x0000008C;
    PWM1LOAD_PWM0  = __PWM_LOAD__;
    PWM1CMPA_PWM0 |= ((__PWM_LOAD__ * Duty_Cycle)/100);
    PWM1CTL_PWM0   =1;
    PWMENABLE_PWM0 =4;
}

void PWM_B4_Start( void ){
    DataPORT_F |= (1 << 4);
}

void PWM_B4_Stop( void ){
    DataPORT_F      &=~(1 << 4);
    PWM1CTL_PWM0    &=~1;
    PWMENABLE_PWM0  &=~4;
}
