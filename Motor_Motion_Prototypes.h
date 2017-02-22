
#ifndef NTI_PROJECT_FUNCTIONS_PROTOTYPES_MOTOR_MOTION_PROTOTYPES_H_
#define NTI_PROJECT_FUNCTIONS_PROTOTYPES_MOTOR_MOTION_PROTOTYPES_H_
#include "../DataTypes/Data_Types.h"

void Turn_Right      ( void );
void Turn_Left       ( void );
void Turn_Neutral    ( void );

void Motion_Forward  ( void );
void Motion_Backward ( void );
void Motion_Stop     ( void );

void Motion_Distance_Forward  ( u32 Distance );
void Motion_Distance_Backward ( u32 Distance );

#endif /* NTI_PROJECT_FUNCTIONS_PROTOTYPES_MOTOR_MOTION_PROTOTYPES_H_ */
