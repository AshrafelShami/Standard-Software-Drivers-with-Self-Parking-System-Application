/*      Include the OS system files     */
#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"
#include "semphr.h"

/*      Include Project files       */
#include "Functions_Prototypes/toStringFunction_Prototypest.h"
#include "Functions_Prototypes/Motor_Motion_Prototypes.h"
#include "Functions_Prototypes/Autoparking_Prototypes.h"
#include "Functions_Prototypes/Interrupt_Prototypes.h"
#include "Functions_Prototypes/uSonic_Prototypes.h"
#include "Functions_Prototypes/Delay_Prototypes.h"
#include "Functions_Prototypes/Timer_Prototypes.h"
#include "Functions_Prototypes/GPIO_Prototypes.h"
#include "Functions_Prototypes/LCD_Prototypes.h"
#include "Functions_Prototypes/PWM_Prototypes.h"

#include "Auto_Parking_Algorithm/Autoparking_Const.h"
#include "uSonic_Module/uSonic_Ctrl.h"
#include "GPIO/GPIO_Address_Offset.h"

/*      Defines and functions declaration     */
void T_uSonic_Measurements ( void* pvData );
void T_AutoParking_Calcs   ( void* pvData );
void T_Motion_Ctrl         ( void* pvData );
void System_Init           ( void );

/*      Services declarations (Semaphores, Group events .....)      */
xSemaphoreHandle    Semaphore_Calc;
xSemaphoreHandle    Semaphore_Motion;
xSemaphoreHandle    Semaphore_Done;

/*      Global Variables    */
u32 Element_1;                          /*  Used to record the first read of the sensors    */
u32 Element_2;                          /*  Used to record the next reads of the sensors    */

u32 R_uSonic_Distace        = 0;        /*  Right uSonic Distance   */
u32 L_uSonic_Distace        = 0;        /*  Left  uSonic Distance   */
u32 F_uSonic_Distace        = 0;        /*  Front uSonic Distance   */
u32 B_uSonic_Distace        = 0;        /*  Back  uSonic Distance   */

u32 i;                                  /*  Used in loop purposes   */
u32 First_Read_Flag = 0;                /*  Flag used to record the first read of the uSonic sensor */

int main(void){

    /*      System Initialization       */
    System_Init();

    /*      The OS services creation and installations      */
    vSemaphoreCreateBinary(Semaphore_Calc   , 0);
    vSemaphoreCreateBinary(Semaphore_Motion , 0);
    vSemaphoreCreateBinary(Semaphore_Done   , 0);

    /*      Tasks Creations     */
    xTaskCreate (T_uSonic_Measurements , NULL, 100, NULL, 1, NULL);
    xTaskCreate (T_AutoParking_Calcs   , NULL, 100, NULL, 2, NULL);
    xTaskCreate (T_Motion_Ctrl         , NULL, 100, NULL, 3, NULL);

    /*      Start the OS        */
    vTaskStartScheduler();

}

void T_uSonic_Measurements(void* pvData){
    while(1){
        Motion_Forward();
                                  ///////////////////
///////////////////////////////////Left uSonic Reads//////////////////////////////////////////////
                                  ///////////////////

        for(i = 0 ; i < 2 ; i++){
            Send_Trigger_Left();

            while ((DataPORT_B & (1 << 5)) == 0);
            Start_Timer_1();

            while ((DataPORT_B & (1 << 5)) == (1 << 5));
            Stop_Timer_1();

            R_uSonic_Distace = (Timer_1_GetCounts()/16)/58;
            Timer_1_Reset(0);
            First_Read_Flag++;
                                  ////////////////////
///////////////////////////////////Right uSonic Reads//////////////////////////////////////////////
                                ////////////////////

            Send_Trigger_Right();

            while ((DataPORT_D & (1 << 7)) == 0);
            Start_Timer_1();

            while ((DataPORT_D & (1 << 7)) == (1 << 7));
            Stop_Timer_1();

            L_uSonic_Distace = (Timer_1_GetCounts()/16)/58;
            Timer_1_Reset(0);
                                  ////////////////////
///////////////////////////////////Front uSonic Reads//////////////////////////////////////////////
                                  ////////////////////

            Send_Trigger_Front();

            while ((DataPORT_E & (1 << 5)) == 0);
            Start_Timer_1();

            while ((DataPORT_E & (1 << 5)) == (1 << 5));
            Stop_Timer_1();

            F_uSonic_Distace = (Timer_1_GetCounts()/16)/58;
            Timer_1_Reset(0);
                                  ///////////////////
///////////////////////////////////Back uSonic Reads//////////////////////////////////////////////
                                  ///////////////////

            Send_Trigger_Back();

            while ((DataPORT_B & (1 << 3)) == 0);
            Start_Timer_1();

            while ((DataPORT_B & (1 << 3)) == (1 << 3));
            Stop_Timer_1();

            B_uSonic_Distace = (Timer_1_GetCounts()/16)/58;
            Timer_1_Reset(0);

            if (First_Read_Flag == 1)
                Element_1 = R_uSonic_Distace+1;
            else if (i == 1)
                Element_2 = R_uSonic_Distace;
        }
        xSemaphoreGive(Semaphore_Calc);
    }
}


void T_AutoParking_Calcs(void* pvData){
    while(1){
        if(xSemaphoreTake(Semaphore_Calc, 0xFFFF)){
            if (Element_2 >= (Element_1 + width_of_car)){

                /************************************* Auto parking Calculations ************************************/
                *ptr_Ds     =   Element_1;
                *ptr_D      =   *ptr_Ds + 8;
                *ptr_Alpha  =   asin(((Diameter_of_car - (width_of_car/(float)2) - *ptr_D) / (float)Diameter_of_car));
                *ptr_N      =   Diameter_of_car * (cos(*ptr_Alpha));
                *ptr_M      =   (u32)*ptr_N + parking_tolerance;
                *ptr_Beta   =   90 - *ptr_Alpha;
                *ptr_E      =   (TwopiR * (*ptr_Beta / (float)360)) / (float)2;
                /****************************************************************************************************/

                xSemaphoreGive(Semaphore_Motion);
            }
            else
                Motion_Forward();
        }
    }
}

void T_Motion_Ctrl(void* pvData){
    while(1){
        if (xSemaphoreTake(Semaphore_Motion, 0xFFFF)){
            Motion_Distance_Forward((u32)*ptr_M);                   /*  Move Forward for distance *prt_M    */

            _delay_ms(250);

            Turn_Right();                                           /*  Turn right the front wheels          */
            Motion_Distance_Backward((u32)(*ptr_E));                /*  Move Backward for distance *prt_E    */

            _delay_ms(250);

            Turn_Left();                                            /*  Turn Left the front wheels           */
            Motion_Distance_Backward((u32)(*ptr_E));                /*  Move Backward for distance *prt_E    */

            _delay_ms(250);

            Motion_Distance_Forward(10);                            /*  Move Forward for distance 10cm       */
        }
    }
}

void System_Init(void){
    Port_Init();
    Timer_1_Init();
    _delay_ms(10);
}
