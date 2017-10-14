
#ifndef LCD_LIB_CONFIG_H_
#define LCD_LIB_CONFIG_H_
/*************** MCU Clock definition for LCD delay function ***********/

#ifndef HEAD
#define HEAD

#define  F_CPU			(16000000UL)
#include "../_NTI_PROJECT/GPIO/GPIO_Address_Offset.h"

#endif

#define PA2    2
#define PA3    3
#define PA4    4

#define PC4    4
#define PC5    5
#define PC6    6
#define PC7    7

#define PTA   (1U<<0)
#define PTC   (1U<<2)

/*************** LCD Control pins **************************/
#define LCD_RS_DDR		DDRPORT_A
#define LCD_RS_PORT		DataPORT_A
#define LCD_RS_PIN		PA2


#define LCD_RW_DDR		DDRPORT_A
#define LCD_RW_PORT		DataPORT_A
#define LCD_RW_PIN		PA3

#define LCD_EN_DDR		DDRPORT_A
#define LCD_EN_PORT		DataPORT_A
#define LCD_EN_PIN		PA4

/*************** LCD DATA pins ********************/
#define LCD_D4_DDR		DDRPORT_C
#define LCD_D4_PORT		DataPORT_C
#define LCD_D4_PIN		PC4

#define LCD_D5_DDR		DDRPORT_C
#define LCD_D5_PORT		DataPORT_C
#define LCD_D5_PIN		PC5

#define LCD_D6_DDR		DDRPORT_C
#define LCD_D6_PORT		DataPORT_C
#define LCD_D6_PIN		PC6

#define LCD_D7_DDR		DDRPORT_C
#define LCD_D7_PORT		DataPORT_C
#define LCD_D7_PIN		PC7

/*********************************************************************/
#endif /* LCD_LIB_CONFIG_H_ */
