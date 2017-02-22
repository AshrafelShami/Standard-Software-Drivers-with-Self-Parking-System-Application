#ifndef LCD_LIB_H_
#define LCD_LIB_H_

#include "../LCD_Driver/LCD_Lib_Config.h"
#include "../DataTypes/Data_Types.h"

#define  LCD_CLEAR_CMD					(0x01U)
#define  LCD_RETURN_HOME_CMD			(0x80U)
#define  LCD_CURSOR_OFF_CMD       		(0x0CU)
#define  LCD_UNDERLINE_ON_CMD			(0x0EU)
#define  LCD_BLINK_CURSOR_ON_CMD   		(0x0FU)
#define  LCD_TURN_ON_CMD				(0x0CU)
#define  LCD_TURN_OFF_CMD				(0x08U)
#define  LCD_SHIFT_LEFT_CMD				(0x18U)
#define  LCD_SHIFT_RIGHT_CMD			(0x1CU)
#define  LCD_CURSOR_SHIFT_LIFT_CMD		(0x10U)
#define  LCD_CURSOR_SHIFT_RIGHT_CMD	    (0x14U)
#define  LCD_ROW_1				    	(0U)
#define  LCD_ROW_2					    (1U)
#define  LCD_POSITION_1					(0U)
#define  LCD_POSITION_2					(1U)
#define  LCD_POSITION_3					(2U)
#define  LCD_POSITION_4					(3U)
#define  LCD_POSITION_5					(4U)
#define  LCD_POSITION_6					(5U)
#define  LCD_POSITION_7					(6U)
#define  LCD_POSITION_8					(7U)
#define  LCD_POSITION_9					(8U)
#define  LCD_POSITION_10				(9U)
#define  LCD_POSITION_11				(10U)
#define  LCD_POSITION_12				(11U)
#define  LCD_POSITION_13				(12U)
#define  LCD_POSITION_14				(13U)
#define  LCD_POSITION_15				(14U)
#define  LCD_POSITION_16				(15U)

#endif /* LCD_LIB_H_ */
