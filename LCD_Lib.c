/*      Include Project files       */
#include "../LCD_Driver/LCD_Lib.h"
#include "../_NTI_PROJECT/Functions_Prototypes/Delay_Prototypes.h"
#include "../_NTI_PROJECT/DataTypes/Data_Types.h"

/*      Function Definitions        */
void static LCD_READ( void ){
    LCD_EN_PORT |= (1<<LCD_EN_PIN);
    delay(16U/2);
    LCD_EN_PORT &=~(1<<LCD_EN_PIN);
    delay(48000U/2);
}

/********************************************/
void static LCD_Write_4bit_mode( u8 value ){
    if (value &(1U<<7))  {LCD_D7_PORT |=(1U<<LCD_D7_PIN);} else {LCD_D7_PORT &=~(1U<<LCD_D7_PIN);}
    if (value &(1U<<6))  {LCD_D6_PORT |=(1U<<LCD_D6_PIN);} else {LCD_D6_PORT &=~(1U<<LCD_D6_PIN);}
    if (value &(1U<<5))  {LCD_D5_PORT |=(1U<<LCD_D5_PIN);} else {LCD_D5_PORT &=~(1U<<LCD_D5_PIN);}
    if (value &(1U<<4))  {LCD_D4_PORT |=(1U<<LCD_D4_PIN);} else {LCD_D4_PORT &=~(1U<<LCD_D4_PIN);}
    LCD_READ();
    if (value &(1U<<3))  {LCD_D7_PORT |=(1U<<LCD_D7_PIN);} else {LCD_D7_PORT &=~(1U<<LCD_D7_PIN);}
    if (value &(1U<<2))  {LCD_D6_PORT |=(1U<<LCD_D6_PIN);} else {LCD_D6_PORT &=~(1U<<LCD_D6_PIN);}
    if (value &(1U<<1))  {LCD_D5_PORT |=(1U<<LCD_D5_PIN);} else {LCD_D5_PORT &=~(1U<<LCD_D5_PIN);}
    if (value &(1U<<0))  {LCD_D4_PORT |=(1U<<LCD_D4_PIN);} else {LCD_D4_PORT &=~(1U<<LCD_D4_PIN);}
    LCD_READ();
}

/********************************************/

void LCD_Write_Command( u8 command ){
    LCD_RS_PORT &=~(1U<<LCD_RS_PIN);
    LCD_RW_PORT &=~(1U<<LCD_RW_PIN);
    LCD_Write_4bit_mode(command);
}
 
/********************************************/

void LCD_Go_To_X_Y( u8 row, u8 position ){
    u8 postionx;
    if (row == LCD_ROW_1)
        postionx = 0x80 + position;
    else
        postionx = 0xC0 + position;
    LCD_Write_Command(postionx);
}

/********************************************/

void LCD_Write_Character( u8 character ){
    _delay_ms(20);

    LCD_RS_PORT |= (1U<<LCD_RS_PIN);

    LCD_RW_PORT &=~(1U<<LCD_RW_PIN);

    LCD_Write_4bit_mode(character);
}


void LCD_Write_Int( u32  INT_Value ){
    LCD_RS_PORT |=(1U<<LCD_RS_PIN);

    LCD_RW_PORT &=~(1U<<LCD_RW_PIN);

    LCD_Write_4bit_mode(INT_Value);
}


/********************************************/

void LCD_Write_String( u8* String ){
    u8 i = 0;
    while(String[i] != '\0')
        LCD_Write_Character(String[i++]);
}

void LCD_Initialization( void ){
    RCGC_GPIO   |= PTA | PTC;
    LOCK_C      =  0x4C4F434B;
    LOCK_A      =  0x4C4F434B;
    Commit_A    |= (1U<<PA2) | (1U<<PA3) | (1U<<PA4);
    Commit_C    |= (1U<<PC4) | (1U<<PC5) | (1U<<PC6) | (1U<<PC7);
    AltFunSet_A &=~((1U<<PA2)| (1U<<PA3) | (1U<<PA4));
    AltFunSet_C &=~((1U<<PC4)| (1U<<PC5) | (1U<<PC6) | (1U<<PC7));
    DENPORT_A   |= (1U<<PA2) | (1U<<PA3) | (1U<<PA4);
    DENPORT_C   |= (1U<<PC4) | (1U<<PC5) | (1U<<PC6) | (1U<<PC7);

    delay(240000U/2);

    LCD_RS_DDR |=(1U<<LCD_RS_PIN);
    LCD_RW_DDR |=(1U<<LCD_RW_PIN);
    LCD_EN_DDR |=(1U<<LCD_EN_PIN);
    LCD_D7_DDR |=(1U<<LCD_D7_PIN);
    LCD_D6_DDR |=(1U<<LCD_D6_PIN);
    LCD_D5_DDR |=(1U<<LCD_D5_PIN);
    LCD_D4_DDR |=(1U<<LCD_D4_PIN);

    LCD_Write_Command(0x33U);     /*    Initialization.                         */
    _delay_ms(4);
    LCD_Write_Command(0x32U);	  /*    Initialization.                         */
    _delay_us(100);
    LCD_Write_Command(0x28U);	  /*    Function Set: 4-bit, 2 Line, 5x7 Dots.  */
    _delay_us(100);
    LCD_Write_Command(0x06U);
    _delay_us(100);
    LCD_Write_Command(0x0CU);	  /*    Display on ,cursor off.                 */
    _delay_us(100);
    LCD_Write_Command(0x01U);     /*    Clear display, Cursor home.             */
    _delay_ms(3);
    LCD_Write_Command(0x02U);
    _delay_ms(3);
}
