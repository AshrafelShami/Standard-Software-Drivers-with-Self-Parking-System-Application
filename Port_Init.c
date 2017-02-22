/*      Include Project files       */
#include "GPIO_Address_Offset.h"
#include "DataTypes/Data_Types.h"

/*      Function Definitions        */
void PortA_Init( void ){    /*  Initialization of PORT A    */
    RCGC_GPIO       |= 0x01;                 /*  Active clock for port A.           */
    u32 delay_for_RCGC = RCGC_GPIO;          /*  Allow time for clock to start.     */
    LOCK_A          |= __Unlock_Register;    /*  Unlock GPIO A.                     */
    Commit_A        |= 0x80;                 /*  Allow change in pins.              */

    AnalogMode_A    |= 0x00;                 /*  Disable the analog mode.           */
    PortControl_A   |= 0x00000000;           /*  No port control.                   */
    DDRPORT_A       |= 0x80;                 /*  Direction of Pins.                 */
    AltFunSet_A     |= 0x00;                 /*  Disable alternative function.      */
    DENPORT_A       |= 0x80;                 /*  Enable the digital I/O.            */
}

void PortB_Init( void ){    /*  Initialization of PORT B    */
    RCGC_GPIO       |= 0x02;                 /*  Active clock for port B.           */
    LOCK_B          |= __Unlock_Register;    /*  Unlock GPIO B.                     */
    Commit_B        |= 0x69;                 /*  Allow change in pin PB0 and PB1.   */
    AltFunSet_B     |= 0x40;                 /*  Disable alternative function.      */
    PortControl_B   |= 0x04000000;           /*  No port control.                   */

    DDRPORT_B       |= (1 << 0);             /*  Left Trigger.                      */
    DDRPORT_B       &=~(1 << 5);             /*  Left Echo.                         */
    DDRPORT_B       &=~(1 << 3);             /*  Back Echo.                         */
    DENPORT_B       |= 0x69;                 /*  Enable the digital I/O.            */
}


void PortC_Init( void ){    /*  Initialization of PORT C    */
    RCGC_GPIO       |= 0x04;                 /*  Active clock for port C.           */
    LOCK_C          |= __Unlock_Register;    /*  Unlock GPIO C.                     */
    Commit_C        |= 0x00;                 /*  Allow change in pins.              */

    AnalogMode_C    |= 0x00;                 /*  Disable the analog mode.           */
    PortControl_C   |= 0x00000000;           /*  No port control.                   */
    DDRPORT_C       |= 0x00;                 /*  Direction of Port.                 */
    AltFunSet_C     |= 0x00;                 /*  Disable alternative function.      */
    DENPORT_C       |= 0x00;                 /*  Enable the digital I/O.            */
}

void PortD_Init( void ){    /*  Initialization of PORT D    */
    RCGC_GPIO       |= 0x08;                 /*  Active clock for port D.           */
    u32 delay_for_RCGC = RCGC_GPIO;          /*  Allow time for clock to start.     */
    LOCK_D          |= __Unlock_Register;    /*  Unlock GPIO D.                     */
    Commit_D        |= 0xCF;                 /*  Allow change in pins.              */

    AnalogMode_D    |= 0x00;                 /*  Disable the analog mode.           */
    PortControl_D   |= 0x00000000;           /*  No port control.                   */
    DDRPORT_D       |= 0x4F;                 /*  Direction of Pins.                 */
    AltFunSet_D     |= 0x00;                 /*  Disable alternative function.      */
    DENPORT_D       |= 0xCF;                 /*  Enable the digital I/O.            */
    DataPORT_D      |= (1 << 1);
}

void PortE_Init( void ){    /*  Initialization of PORT E    */
    RCGC_GPIO       |= 0x10;                 /*  Active clock for port E.           */
    u32 delay_for_RCGC = RCGC_GPIO;          /*  Allow time for clock to start.     */
    LOCK_E          |= __Unlock_Register;    /*  Unlock GPIO E.                     */
    Commit_E        |= 0x30;                 /*  Allow change in pins.              */

    AnalogMode_E    |= 0x00;                 /*  Disable the analog mode.           */
    PortControl_E   |= 0x00000000;           /*  No port control.                   */
    DDRPORT_E       |= 0x10;                 /*  Direction of Pins.                 */
    AltFunSet_E     |= 0x00;                 /*  Disable alternative function.      */
    DENPORT_E       |= 0x30;                 /*  Enable the digital I/O.            */
}

void PortF_Init( void ){    /*  Initialization of PORT F    */
    RCGC_GPIO       |= 0x20;                 /*  Active clock for port F.           */
    LOCK_F          |= __Unlock_Register;    /*  Unlock GPIO F.                     */
    Commit_F        |= 0x18;                 /*  Allow change in pins.              */

    AnalogMode_F    |= 0x00;                 /*  Disable the analog mode.           */
    PortControl_F   |= 0x00000000;           /*  No port control.                   */
    DDRPORT_F       |= 0x18;                 /*  Direction of Pins.                 */
    AltFunSet_F     |= 0x00;                 /*  Disable alternative function.      */
    DENPORT_F       |= 0x18;                 /*  Enable the digital I/O.            */
}


void Port_Init ( void ){    /*  Port Initializa for all the used GPIO ports */
    PortF_Init();
    PortD_Init();
    PortE_Init();
    PortB_Init();
}
