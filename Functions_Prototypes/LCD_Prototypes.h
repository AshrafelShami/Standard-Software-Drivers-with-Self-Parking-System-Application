
#ifndef NTI_PROJECT_FUNCTIONS_PROTOTYPES_LCD_PROTOTYPES_H_
#define NTI_PROJECT_FUNCTIONS_PROTOTYPES_LCD_PROTOTYPES_H_
#include "../DataTypes/Data_Types.h"

void LCD_Initialization( void );

void LCD_Write_Command( u8 command );

void LCD_Go_To_X_Y( u8 row, u8 position );

void LCD_Write_Character( u8  character );

void LCD_Write_String( u8  *pointer );

void LCD_Write_float( f32  float_value );

void delay( u32 count );

void LCD_Write_Int( u32  INT_Value );

#endif /* NTI_PROJECT_FUNCTIONS_PROTOTYPES_LCD_PROTOTYPES_H_ */
