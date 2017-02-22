/*      Include Project files       */
#include "../_NTI_PROJECT/GPIO/GPIO_Address_Offset.h"
#include "../_NTI_PROJECT/Functions_Prototypes/PWM_Prototypes.h"
#include "../DataTypes/Data_Types.h"
#include "../Functions_Prototypes/Delay_Prototypes.h"

/*      Function Definitions        */
void Turn_Right    ( void ){                    /*  API used to turn right the front wheel  */
    DataPORT_D |= (1 << 3);
    DataPORT_D &=~(1 << 2);
}

void Turn_Left     ( void ){                    /*  API used to turn Left  the front wheel  */
    DataPORT_D &=~(1 << 3);
    DataPORT_D |= (1 << 2);
}

void Turn_Neutral  ( void ){                    /*  API used to Neutralize wheel            */
    DataPORT_D &=~(1 << 3);
    DataPORT_D &=~(1 << 2);
}

void Motion_Forward( void ){                    /*  API used to move the Car forward        */
    PWM_B6_Init(65);
    PWM_B6_Start();
}

void Motion_Backward( void ){                   /*  API used to move the Car Backward       */
    PWM_B4_Init(65);
    PWM_B4_Start();
}

void Motion_Stop    ( void ){                   /*  API used to STOP the Car                */
    PWM_B6_Stop();
    PWM_B4_Stop();
}

void Motion_Distance_Forward (u32 Distance){    /*  API used to move the Car Forward with a certain distance (cm)     */
    Motion_Forward();
    _delay_ms((u32)(Distance / (f32)44)*1000);
    Motion_Stop();
}

void Motion_Distance_Backward (u32 Distance){   /*  API used to move the Car Backward with a certain distance (cm)    */
    Motion_Backward();
    _delay_ms((u32)((Distance / (f32)44)*1000));
    Motion_Stop();
}
