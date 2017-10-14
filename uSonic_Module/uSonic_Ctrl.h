/*
 * Port B Pin 0     ---->   Connected to the trigger pin of uSonic on the Left  side of the vehicle.
 * Port D Pin 6     ---->   Connected to the trigger pin of uSonic on the Right side of the vehicle.
 * Port E Pin 4     ---->   Connected to the trigger pin of uSonic on the Front side of the vehicle.
 * Port F Pin 3     ---->   Connected to the trigger pin of uSonic on the Back  side of the vehicle.
 *
 */

#include "../GPIO/GPIO_Address_Offset.h"

#ifndef NTI_PROJECT_USONIC_MODULE_USONIC_VCC_CTRL_H_
#define NTI_PROJECT_USONIC_MODULE_USONIC_VCC_CTRL_H_

#define uSonic_Left_Trigger_ON      DataPORT_B |= (1 << 0)
#define uSonic_Left_Trigger_OFF     DataPORT_B &=~(1 << 0)

#define uSonic_Right_Trigger_ON     DataPORT_D |= (1 << 6)
#define uSonic_Right_Trigger_OFF    DataPORT_D &=~(1 << 6)

#define uSonic_Front_Trigger_ON     DataPORT_E |= (1 << 4)
#define uSonic_Front_Trigger_OFF    DataPORT_E &=~(1 << 4)

#define uSonic_Back_Trigger_ON      DataPORT_F |= (1 << 3)
#define uSonic_Back_Trigger_OFF     DataPORT_F &=~(1 << 3)


#endif /* NTI_PROJECT_USONIC_MODULE_USONIC_VCC_CTRL_H_ */
