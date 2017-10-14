/*      Include Project files       */
#include "uSonic_Ctrl.h"
#include "../Functions_Prototypes/Delay_Prototypes.h"

/*      Function Definitions        */
void Send_Trigger_Left ( void ){ /*      API used to send a trigger signal from the Left  uSonic    */
    uSonic_Left_Trigger_ON;
    _delay_us(12);
    uSonic_Left_Trigger_OFF;
}

void Send_Trigger_Right( void ){ /*      API used to send a trigger signal from the Right uSonic    */
    uSonic_Right_Trigger_ON;
    _delay_us(12);
    uSonic_Right_Trigger_OFF;
}

void Send_Trigger_Front( void ){ /*      API used to send a trigger signal from the Front uSonic    */
    uSonic_Front_Trigger_ON;
    _delay_us(12);
    uSonic_Front_Trigger_OFF;
}

void Send_Trigger_Back ( void ){ /*      API used to send a trigger signal from the Back  uSonic     */
    uSonic_Back_Trigger_ON;
    _delay_us(12);
    uSonic_Back_Trigger_OFF;
}
