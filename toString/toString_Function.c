/*      Include Project files       */
#include <math.h>
#include "_NTI_PROJECT/DataTypes/Data_Types.h"

/*      Function Definitions        */
/*  This function converts the Integer numbers to String to Display it on the LCD   :)  */
void toString( u32 num, u8* str, u8 displaySize){
    u8 i = 0;
    for(i = 0 ; i < displaySize ; i++)
        str[i]=((num/(long)pow(10,(displaySize -i -1)))-(num/(long)pow(10,(displaySize -i)))*10)+'0';
}
