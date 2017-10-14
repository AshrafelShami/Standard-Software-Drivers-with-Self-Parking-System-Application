
#ifndef NTI_PROJECT_AUTO_PARKING_ALGORITHM_AUTOPARKING_CONST_H_
#define NTI_PROJECT_AUTO_PARKING_ALGORITHM_AUTOPARKING_CONST_H_
#include "../DataTypes/Data_Types.h"
#include <math.h>

#define width_of_car            16
#define radius_of_car           200
#define Diameter_of_car         400
#define segma                   51
#define minimun_parking_slot    95.6
#define co_sine_segma           0.6285
#define perimeter_of_circle     533.8
#define parking_tolerance       25
#define TwopiR                  534

u32     Ds;
u32*    ptr_Ds      = &Ds;

u32     D;
u32*    ptr_D       = &D;

f32     Alpha;
f32*    ptr_Alpha   = &Alpha;

f32     N;
f32*    ptr_N       = &N;

u32     M;
u32*    ptr_M       = &M;

f32     Beta;
f32*    ptr_Beta    = &Beta;

f32     E;
f32*    ptr_E       = &E;

f32     F;
f32*    ptr_F       = &F;

#endif /* NTI_PROJECT_AUTO_PARKING_ALGORITHM_AUTOPARKING_CONST_H_ */
