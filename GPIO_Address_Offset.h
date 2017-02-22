 /************************************************
*	Define all (GPIO) Registers for all Ports	*
*	Using Address cast and dereference			*
*	Used Macros to set Directions of registers	*
*************************************************
 * GPIO.h
 *
 * Created: 1/13/2017 6:12:47 PM
 */


#ifndef GPIO_ADDRESS_OFFSET_H_
#define GPIO_ADDRESS_OFFSET_H_

#include "../DataTypes/Data_Types.h"

#include "GPIO_Ports_OFFSETS.h"
#include "GPIO_PORTS_Addresses.h"

#define RCGC0__ (*((volatile u32*)( 0x400FE000 + 0x100)))
#define RCGC2__ (*((volatile u32*)( 0x400FE000 + 0x108)))
#define RCGCPWM_ (*((volatile u32*)( 0x400FE000 + 0x640)))
#define RCC____ (*((volatile u32*)( 0x400FE000 + 0x060)))

/***********************************************************************************
*
*		DATA Direction Register		**0x400**	(GPIODATA)
*
***********************************************************************************/
#define DDRPORT_A (*((volatile u32*)(__Port_A_Address + _DIR_Offset)))
#define DDRPORT_B (*((volatile u32*)(__Port_B_Address + _DIR_Offset)))
#define DDRPORT_C (*((volatile u32*)(__Port_C_Address + _DIR_Offset)))
#define DDRPORT_D (*((volatile u32*)(__Port_D_Address + _DIR_Offset)))
#define DDRPORT_E (*((volatile u32*)(__Port_E_Address + _DIR_Offset)))
#define DDRPORT_F (*((volatile u32*)(__Port_F_Address + _DIR_Offset)))

/***********************************************************************************
*
*		Digital Enable Register		**0x51C**	(GPIODEN)
*
***********************************************************************************/
#define DENPORT_A (*((volatile u32*)(__Port_A_Address + _DEN_Offset)))
#define DENPORT_B (*((volatile u32*)(__Port_B_Address + _DEN_Offset)))
#define DENPORT_C (*((volatile u32*)(__Port_C_Address + _DEN_Offset)))
#define DENPORT_D (*((volatile u32*)(__Port_D_Address + _DEN_Offset)))
#define DENPORT_E (*((volatile u32*)(__Port_E_Address + _DEN_Offset)))
#define DENPORT_F (*((volatile u32*)(__Port_F_Address + _DEN_Offset)))

/***********************************************************************************
*
*		Data Register				**0x000**	(GPIODATA)
*	
***********************************************************************************/
#define DataPORT_A (*((volatile u32*)(__Port_A_Address + _DATA_Offset)))
#define DataPORT_B (*((volatile u32*)(__Port_B_Address + _DATA_Offset)))
#define DataPORT_C (*((volatile u32*)(__Port_C_Address + _DATA_Offset)))
#define DataPORT_D (*((volatile u32*)(__Port_D_Address + _DATA_Offset)))
#define DataPORT_E (*((volatile u32*)(__Port_E_Address + _DATA_Offset)))
#define DataPORT_F (*((volatile u32*)(__Port_F_Address + _DATA_Offset)))

/***********************************************************************************
*
*		Pull-Up Resistor Register	**0x510**	(GPIOPUR)	
*
***********************************************************************************/
#define PullUPPORT_A (*((volatile u32*)(__Port_A_Address + _PUE_Offset)))
#define PullUPPORT_B (*((volatile u32*)(__Port_B_Address + _PUE_Offset)))
#define PullUPPORT_C (*((volatile u32*)(__Port_C_Address + _PUE_Offset)))
#define PullUPPORT_D (*((volatile u32*)(__Port_D_Address + _PUE_Offset)))
#define PullUPPORT_E (*((volatile u32*)(__Port_E_Address + _PUE_Offset)))
#define PullUPPORT_F (*((volatile u32*)(__Port_F_Address + _PUE_Offset)))

/***********************************************************************************
*
*		Pull-Up Resistor Register	**0x514**	(GPIOPDR)
*
***********************************************************************************/
#define PullDOWNPORT_A (*((volatile u32*)(__Port_A_Address + _PDE_Offset)))
#define PullDOWNPORT_B (*((volatile u32*)(__Port_B_Address + _PDE_Offset)))
#define PullDOWNPORT_C (*((volatile u32*)(__Port_C_Address + _PDE_Offset)))
#define PullDOWNPORT_D (*((volatile u32*)(__Port_D_Address + _PDE_Offset)))
#define PullDOWNPORT_E (*((volatile u32*)(__Port_E_Address + _PDE_Offset)))
#define PullDOWNPORT_F (*((volatile u32*)(__Port_F_Address + _PDE_Offset)))

/***********************************************************************************
*
*		Interrupt Sense Register	**0x404**	(GPIOIS)
*
***********************************************************************************/
#define InterruptSense_A (*((volatile u32*)(__Port_A_Address + _IS_Offset)))
#define InterruptSense_B (*((volatile u32*)(__Port_B_Address + _IS_Offset)))
#define InterruptSense_C (*((volatile u32*)(__Port_C_Address + _IS_Offset)))
#define InterruptSense_D (*((volatile u32*)(__Port_D_Address + _IS_Offset)))
#define InterruptSense_E (*((volatile u32*)(__Port_E_Address + _IS_Offset)))
#define InterruptSense_F (*((volatile u32*)(__Port_F_Address + _IS_Offset)))

/***********************************************************************************
*
*		Interrupt Both Edges Register	**0x408**	(GPIOIBE)
*
***********************************************************************************/
#define InterruptBothEdges_A (*((volatile u32*)(__Port_A_Address + _IBE_Offset)))
#define InterruptBothEdges_B (*((volatile u32*)(__Port_B_Address + _IBE_Offset)))
#define InterruptBothEdges_C (*((volatile u32*)(__Port_C_Address + _IBE_Offset)))
#define InterruptBothEdges_D (*((volatile u32*)(__Port_D_Address + _IBE_Offset)))
#define InterruptBothEdges_E (*((volatile u32*)(__Port_E_Address + _IBE_Offset)))
#define InterruptBothEdges_F (*((volatile u32*)(__Port_F_Address + _IBE_Offset)))

/***********************************************************************************
*
*		Interrupt Event Register		**0x40C**	(GPIOIEV)
*
***********************************************************************************/
#define InterruptEvent_A (*((volatile u32*)(__Port_A_Address + _IEV_Offset)))
#define InterruptEvent_B (*((volatile u32*)(__Port_B_Address + _IEV_Offset)))
#define InterruptEvent_C (*((volatile u32*)(__Port_C_Address + _IEV_Offset)))
#define InterruptEvent_D (*((volatile u32*)(__Port_D_Address + _IEV_Offset)))
#define InterruptEvent_E (*((volatile u32*)(__Port_E_Address + _IEV_Offset)))
#define InterruptEvent_F (*((volatile u32*)(__Port_F_Address + _IEV_Offset)))

/***********************************************************************************
*
*		Interrupt Mask Register		**0x410**	(GPIOIM)
*
***********************************************************************************/
#define InterruptMask_A (*((volatile u32*)(__Port_A_Address + _IM_Offset)))
#define InterruptMask_B (*((volatile u32*)(__Port_B_Address + _IM_Offset)))
#define InterruptMask_C (*((volatile u32*)(__Port_C_Address + _IM_Offset)))
#define InterruptMask_D (*((volatile u32*)(__Port_D_Address + _IM_Offset)))
#define InterruptMask_E (*((volatile u32*)(__Port_E_Address + _IM_Offset)))
#define InterruptMask_F (*((volatile u32*)(__Port_F_Address + _IM_Offset)))

/***********************************************************************************
*
*		Raw Interrupt Status Register		**0x414**	(GPIORIS)
*
***********************************************************************************/
#define RawInterruptStatus_A (*((volatile u32*)(__Port_A_Address + _RIS_Offset)))
#define RawInterruptStatus_B (*((volatile u32*)(__Port_B_Address + _RIS_Offset)))
#define RawInterruptStatus_C (*((volatile u32*)(__Port_C_Address + _RIS_Offset)))
#define RawInterruptStatus_D (*((volatile u32*)(__Port_D_Address + _RIS_Offset)))
#define RawInterruptStatus_E (*((volatile u32*)(__Port_E_Address + _RIS_Offset)))
#define RawInterruptStatus_F (*((volatile u32*)(__Port_F_Address + _RIS_Offset)))

/***********************************************************************************
*
*		Masked Interrupt Status Register		**0x418**	(GPIOMIS)
*
***********************************************************************************/
#define MaskedInterruptStatus_A (*((volatile u32*)(__Port_A_Address + _MIS_Offset)))
#define MaskedInterruptStatus_B (*((volatile u32*)(__Port_B_Address + _MIS_Offset)))
#define MaskedInterruptStatus_C (*((volatile u32*)(__Port_C_Address + _MIS_Offset)))
#define MaskedInterruptStatus_D (*((volatile u32*)(__Port_D_Address + _MIS_Offset)))
#define MaskedInterruptStatus_E (*((volatile u32*)(__Port_E_Address + _MIS_Offset)))
#define MaskedInterruptStatus_F (*((volatile u32*)(__Port_F_Address + _MIS_Offset)))

/***********************************************************************************
*
*		Interrupt Clear Register		**0x41C**	(GPIOICR)
*
***********************************************************************************/
#define InterruptClear_A (*((volatile u32*)(__Port_A_Address + _ICR_Offset)))
#define InterruptClear_B (*((volatile u32*)(__Port_B_Address + _ICR_Offset)))
#define InterruptClear_C (*((volatile u32*)(__Port_C_Address + _ICR_Offset)))
#define InterruptClear_D (*((volatile u32*)(__Port_D_Address + _ICR_Offset)))
#define InterruptClear_E (*((volatile u32*)(__Port_E_Address + _ICR_Offset)))
#define InterruptClear_F (*((volatile u32*)(__Port_F_Address + _ICR_Offset)))

/***********************************************************************************
*
*		Alternate Function Select Register		**0x420**	(GPIOAFSEL)
*
***********************************************************************************/
#define AltFunSet_A (*((volatile u32*)(__Port_A_Address + _AFSEL_Offset)))
#define AltFunSet_B (*((volatile u32*)(__Port_B_Address + _AFSEL_Offset)))
#define AltFunSet_C (*((volatile u32*)(__Port_C_Address + _AFSEL_Offset)))
#define AltFunSet_D (*((volatile u32*)(__Port_D_Address + _AFSEL_Offset)))
#define AltFunSet_E (*((volatile u32*)(__Port_E_Address + _AFSEL_Offset)))
#define AltFunSet_F (*((volatile u32*)(__Port_F_Address + _AFSEL_Offset)))

/***********************************************************************************
*
*		Drive Select 2mA Register		**0x500**	(GPIODR2R)
*
***********************************************************************************/
#define DriveSel2mA_A (*((volatile u32*)(__Port_A_Address + _DRV2_Offset)))
#define DriveSel2mA_B (*((volatile u32*)(__Port_B_Address + _DRV2_Offset)))
#define DriveSel2mA_C (*((volatile u32*)(__Port_C_Address + _DRV2_Offset)))
#define DriveSel2mA_D (*((volatile u32*)(__Port_D_Address + _DRV2_Offset)))
#define DriveSel2mA_E (*((volatile u32*)(__Port_E_Address + _DRV2_Offset)))
#define DriveSel2mA_F (*((volatile u32*)(__Port_F_Address + _DRV2_Offset)))

/***********************************************************************************
*
*		Drive Select 4mA Register		**0x504**	(GPIODR4R)
*
***********************************************************************************/
#define DriveSel4mA_A (*((volatile u32*)(__Port_A_Address + _DRV4_Offset)))
#define DriveSel4mA_B (*((volatile u32*)(__Port_B_Address + _DRV4_Offset)))
#define DriveSel4mA_C (*((volatile u32*)(__Port_C_Address + _DRV4_Offset)))
#define DriveSel4mA_D (*((volatile u32*)(__Port_D_Address + _DRV4_Offset)))
#define DriveSel4mA_E (*((volatile u32*)(__Port_E_Address + _DRV4_Offset)))
#define DriveSel4mA_F (*((volatile u32*)(__Port_F_Address + _DRV4_Offset)))

/***********************************************************************************
*
*		Drive Select 8mA Register		**0x508**	(GPIODR8R)
*
***********************************************************************************/
#define DriveSel8mA_A (*((volatile u32*)(__Port_A_Address + _DRV8_Offset)))
#define DriveSel8mA_B (*((volatile u32*)(__Port_B_Address + _DRV8_Offset)))
#define DriveSel8mA_C (*((volatile u32*)(__Port_C_Address + _DRV8_Offset)))
#define DriveSel8mA_D (*((volatile u32*)(__Port_D_Address + _DRV8_Offset)))
#define DriveSel8mA_E (*((volatile u32*)(__Port_E_Address + _DRV8_Offset)))
#define DriveSel8mA_F (*((volatile u32*)(__Port_F_Address + _DRV8_Offset)))

/***********************************************************************************
*
*		Open Drain Register		**0x50C**	(GPIOORD)
*
***********************************************************************************/
#define OpenDrain_A (*((volatile u32*)(__Port_A_Address + _ODE_Offset)))
#define OpenDrain_B (*((volatile u32*)(__Port_B_Address + _ODE_Offset)))
#define OpenDrain_C (*((volatile u32*)(__Port_C_Address + _ODE_Offset)))
#define OpenDrain_D (*((volatile u32*)(__Port_D_Address + _ODE_Offset)))
#define OpenDrain_E (*((volatile u32*)(__Port_E_Address + _ODE_Offset)))
#define OpenDrain_F (*((volatile u32*)(__Port_F_Address + _ODE_Offset)))

/***********************************************************************************
*
*		Slew Rate Control Select Register		**0x518**	(GPIOSLR)
*
***********************************************************************************/
#define SlewRateCtrlSel_A (*((volatile u32*)(__Port_A_Address + _SRL_Offset)))
#define SlewRateCtrlSel_B (*((volatile u32*)(__Port_B_Address + _SRL_Offset)))
#define SlewRateCtrlSel_C (*((volatile u32*)(__Port_C_Address + _SRL_Offset)))
#define SlewRateCtrlSel_D (*((volatile u32*)(__Port_D_Address + _SRL_Offset)))
#define SlewRateCtrlSel_E (*((volatile u32*)(__Port_E_Address + _SRL_Offset)))
#define SlewRateCtrlSel_F (*((volatile u32*)(__Port_F_Address + _SRL_Offset)))

/***********************************************************************************
*
*		Lock Register		**0x520**	(GPIOLOCK)
*
***********************************************************************************/
#define LOCK_A (*((volatile u32*)(__Port_A_Address + _LOCK_Offset)))
#define LOCK_B (*((volatile u32*)(__Port_B_Address + _LOCK_Offset)))
#define LOCK_C (*((volatile u32*)(__Port_C_Address + _LOCK_Offset)))
#define LOCK_D (*((volatile u32*)(__Port_D_Address + _LOCK_Offset)))
#define LOCK_E (*((volatile u32*)(__Port_E_Address + _LOCK_Offset)))
#define LOCK_F (*((volatile u32*)(__Port_F_Address + _LOCK_Offset)))

/***********************************************************************************
*
*		Commit Register		**0x524**	(GPIOCR)
*
***********************************************************************************/
#define Commit_A (*((volatile u32*)(__Port_A_Address + _CR_Offset)))
#define Commit_B (*((volatile u32*)(__Port_B_Address + _CR_Offset)))
#define Commit_C (*((volatile u32*)(__Port_C_Address + _CR_Offset)))
#define Commit_D (*((volatile u32*)(__Port_D_Address + _CR_Offset)))
#define Commit_E (*((volatile u32*)(__Port_E_Address + _CR_Offset)))
#define Commit_F (*((volatile u32*)(__Port_F_Address + _CR_Offset)))

/***********************************************************************************
*
*		Analog Mode Select Register		**0x528**	(GPIOAMSEL)
*
***********************************************************************************/
#define AnalogMode_A (*((volatile u32*)(__Port_A_Address + _GPIOAMSEL_Offset)))
#define AnalogMode_C (*((volatile u32*)(__Port_B_Address + _GPIOAMSEL_Offset)))
#define AnalogMode_B (*((volatile u32*)(__Port_C_Address + _GPIOAMSEL_Offset)))
#define AnalogMode_D (*((volatile u32*)(__Port_D_Address + _GPIOAMSEL_Offset)))
#define AnalogMode_E (*((volatile u32*)(__Port_E_Address + _GPIOAMSEL_Offset)))
#define AnalogMode_F (*((volatile u32*)(__Port_F_Address + _GPIOAMSEL_Offset)))

/***********************************************************************************
*
*		Port Control Register		**0x52C**	(GPIOPCTL)		>>>>CASE STUDY<<<
*
***********************************************************************************/
#define PortControl_A (*((volatile u32*)(__Port_A_Address + _PC_Offset)))
#define PortControl_B (*((volatile u32*)(__Port_B_Address + _PC_Offset)))
#define PortControl_C (*((volatile u32*)(__Port_C_Address + _PC_Offset)))
#define PortControl_D (*((volatile u32*)(__Port_D_Address + _PC_Offset)))
#define PortControl_E (*((volatile u32*)(__Port_E_Address + _PC_Offset)))
#define PortControl_F (*((volatile u32*)(__Port_F_Address + _PC_Offset)))

/***********************************************************************************
*
*		ADC Control Register		**0x530**	(GPIOADCCTL)
*
***********************************************************************************/
#define ADCControl_A (*((volatile u32*)(__Port_A_Address + _ADCEN_Offset)))
#define ADCControl_B (*((volatile u32*)(__Port_B_Address + _ADCEN_Offset)))
#define ADCControl_C (*((volatile u32*)(__Port_C_Address + _ADCEN_Offset)))
#define ADCControl_D (*((volatile u32*)(__Port_D_Address + _ADCEN_Offset)))
#define ADCControl_E (*((volatile u32*)(__Port_E_Address + _ADCEN_Offset)))
#define ADCControl_F (*((volatile u32*)(__Port_F_Address + _ADCEN_Offset)))

/***********************************************************************************
*
*		DMA Control Register		**0x534**	(GPIODMACTL)
*
***********************************************************************************/
#define DMAControl_A (*((volatile u32*)(__Port_A_Address + _DMAEN_Offset)))
#define DMAControl_B (*((volatile u32*)(__Port_B_Address + _DMAEN_Offset)))
#define DMAControl_C (*((volatile u32*)(__Port_C_Address + _DMAEN_Offset)))
#define DMAControl_D (*((volatile u32*)(__Port_D_Address + _DMAEN_Offset)))
#define DMAControl_E (*((volatile u32*)(__Port_E_Address + _DMAEN_Offset)))
#define DMAControl_F (*((volatile u32*)(__Port_F_Address + _DMAEN_Offset)))

/***********************************************************************************
*
*		Clock Enable Register		**0x608**	(GPIOCEN)
*
***********************************************************************************/
#define CLK_Enable (*(volatile u32*)__Clock_Enable)
#define RCGC_GPIO     (*(volatile u32*)(0x400FE108))

/***********************************************************************************
*
*		Peripheral Identification 0 Register		**0xFE0**	(GPIOPeriphID0)
*
***********************************************************************************/
#define PeripheralID0_A (*((volatile u32*)(__Port_A_Address + _PID0__Offset)))
#define PeripheralID0_B (*((volatile u32*)(__Port_B_Address + _PID0__Offset)))
#define PeripheralID0_C (*((volatile u32*)(__Port_C_Address + _PID0__Offset)))
#define PeripheralID0_D (*((volatile u32*)(__Port_D_Address + _PID0__Offset)))
#define PeripheralID0_E (*((volatile u32*)(__Port_E_Address + _PID0__Offset)))
#define PeripheralID0_F (*((volatile u32*)(__Port_F_Address + _PID0__Offset)))

/***********************************************************************************
*
*		Peripheral Identification 1 Register		**0xFE4**	(GPIOPeriphID1)
*
***********************************************************************************/
#define PeripheralID1_A (*((volatile u32*)(__Port_A_Address + _PID1__Offset)))
#define PeripheralID1_B (*((volatile u32*)(__Port_B_Address + _PID1__Offset)))
#define PeripheralID1_C (*((volatile u32*)(__Port_C_Address + _PID1__Offset)))
#define PeripheralID1_D (*((volatile u32*)(__Port_D_Address + _PID1__Offset)))
#define PeripheralID1_E (*((volatile u32*)(__Port_E_Address + _PID1__Offset)))
#define PeripheralID1_F (*((volatile u32*)(__Port_F_Address + _PID1__Offset)))

/***********************************************************************************
*
*		Peripheral Identification 2 Register		**0xFE8**	(GPIOPeriphID2)
*
***********************************************************************************/
#define PeripheralID2_A (*((volatile u32*)(__Port_A_Address + _PID2__Offset)))
#define PeripheralID2_B (*((volatile u32*)(__Port_B_Address + _PID2__Offset)))
#define PeripheralID2_C (*((volatile u32*)(__Port_C_Address + _PID2__Offset)))
#define PeripheralID2_D (*((volatile u32*)(__Port_D_Address + _PID2__Offset)))
#define PeripheralID2_E (*((volatile u32*)(__Port_E_Address + _PID2__Offset)))
#define PeripheralID2_F (*((volatile u32*)(__Port_F_Address + _PID2__Offset)))

/***********************************************************************************
*
*		Peripheral Identification 3 Register		**0xFEC**	(GPIOPeriphID3)
*
***********************************************************************************/
#define PeripheralID3_A (*((volatile u32*)(__Port_A_Address + _PID3__Offset)))
#define PeripheralID3_B (*((volatile u32*)(__Port_B_Address + _PID3__Offset)))
#define PeripheralID3_C (*((volatile u32*)(__Port_C_Address + _PID3__Offset)))
#define PeripheralID3_D (*((volatile u32*)(__Port_D_Address + _PID3__Offset)))
#define PeripheralID3_E (*((volatile u32*)(__Port_E_Address + _PID3__Offset)))
#define PeripheralID3_F (*((volatile u32*)(__Port_F_Address + _PID3__Offset)))

/***********************************************************************************
*
*		Peripheral Identification 4 Register		**0xFD0**	(GPIOPeriphID4)
*
***********************************************************************************/
#define PeripheralID4_A (*((volatile u32*)(__Port_A_Address + _PID4__Offset)))
#define PeripheralID4_B (*((volatile u32*)(__Port_B_Address + _PID4__Offset)))
#define PeripheralID4_C (*((volatile u32*)(__Port_C_Address + _PID4__Offset)))
#define PeripheralID4_D (*((volatile u32*)(__Port_D_Address + _PID4__Offset)))
#define PeripheralID4_E (*((volatile u32*)(__Port_E_Address + _PID4__Offset)))
#define PeripheralID4_F (*((volatile u32*)(__Port_F_Address + _PID4__Offset)))

/***********************************************************************************
*
*		Peripheral Identification 5 Register		**0xFD4**	(GPIOPeriphID5)
*
***********************************************************************************/
#define PeripheralID5_A (*((volatile u32*)(__Port_A_Address + _PID5__Offset)))
#define PeripheralID5_B (*((volatile u32*)(__Port_B_Address + _PID5__Offset)))
#define PeripheralID5_C (*((volatile u32*)(__Port_C_Address + _PID5__Offset)))
#define PeripheralID5_D (*((volatile u32*)(__Port_D_Address + _PID5__Offset)))
#define PeripheralID5_E (*((volatile u32*)(__Port_E_Address + _PID5__Offset)))
#define PeripheralID5_F (*((volatile u32*)(__Port_F_Address + _PID5__Offset)))

/***********************************************************************************
*
*		Peripheral Identification 6 Register		**0xFD8**	(GPIOPeriphID6)
*
***********************************************************************************/
#define PeripheralID6_A (*((volatile u32*)(__Port_A_Address + _PID6__Offset)))
#define PeripheralID6_B (*((volatile u32*)(__Port_B_Address + _PID6__Offset)))
#define PeripheralID6_C (*((volatile u32*)(__Port_C_Address + _PID6__Offset)))
#define PeripheralID6_D (*((volatile u32*)(__Port_D_Address + _PID6__Offset)))
#define PeripheralID6_E (*((volatile u32*)(__Port_E_Address + _PID6__Offset)))
#define PeripheralID6_F (*((volatile u32*)(__Port_F_Address + _PID6__Offset)))

/***********************************************************************************
*
*		Peripheral Identification 7 Register		**0xFDC**	(GPIOPeriphID7)
*
***********************************************************************************/
#define PeripheralID7_A (*((volatile u32*)(__Port_A_Address + _PID7__Offset)))
#define PeripheralID7_B (*((volatile u32*)(__Port_B_Address + _PID7__Offset)))
#define PeripheralID7_C (*((volatile u32*)(__Port_C_Address + _PID7__Offset)))
#define PeripheralID7_D (*((volatile u32*)(__Port_D_Address + _PID7__Offset)))
#define PeripheralID7_E (*((volatile u32*)(__Port_E_Address + _PID7__Offset)))
#define PeripheralID7_F (*((volatile u32*)(__Port_F_Address + _PID7__Offset)))

/***********************************************************************************
*
*		Peripheral Identification 0 Register		**0xFF0**	(GPIOPeriphID0)
*
***********************************************************************************/
#define PrimeCellID0_A (*((volatile u32*)(__Port_A_Address + _CID0_Offset)))
#define PrimeCellID0_B (*((volatile u32*)(__Port_B_Address + _CID0_Offset)))
#define PrimeCellID0_C (*((volatile u32*)(__Port_C_Address + _CID0_Offset)))
#define PrimeCellID0_D (*((volatile u32*)(__Port_D_Address + _CID0_Offset)))
#define PrimeCellID0_E (*((volatile u32*)(__Port_E_Address + _CID0_Offset)))
#define PrimeCellID0_F (*((volatile u32*)(__Port_F_Address + _CID0_Offset)))

/***********************************************************************************
*
*		Peripheral Identification 1 Register		**0xFF4**	(GPIOPeriphID1)
*
***********************************************************************************/
#define PrimeCellID1_A (*((volatile u32*)(__Port_A_Address + _CID1_Offset)))
#define PrimeCellID1_B (*((volatile u32*)(__Port_B_Address + _CID1_Offset)))
#define PrimeCellID1_C (*((volatile u32*)(__Port_C_Address + _CID1_Offset)))
#define PrimeCellID1_D (*((volatile u32*)(__Port_D_Address + _CID1_Offset)))
#define PrimeCellID1_E (*((volatile u32*)(__Port_E_Address + _CID1_Offset)))
#define PrimeCellID1_F (*((volatile u32*)(__Port_F_Address + _CID1_Offset)))

/***********************************************************************************
*
*		Peripheral Identification 2 Register		**0xFF8**	(GPIOPeriphID2)
*
***********************************************************************************/
#define PrimeCellID2_A (*((volatile u32*)(__Port_A_Address + _CID2_Offset)))
#define PrimeCellID2_B (*((volatile u32*)(__Port_B_Address + _CID2_Offset)))
#define PrimeCellID2_C (*((volatile u32*)(__Port_C_Address + _CID2_Offset)))
#define PrimeCellID2_D (*((volatile u32*)(__Port_D_Address + _CID2_Offset)))
#define PrimeCellID2_E (*((volatile u32*)(__Port_E_Address + _CID2_Offset)))
#define PrimeCellID2_F (*((volatile u32*)(__Port_F_Address + _CID2_Offset)))

#endif /* GPIO_ADDRESS_OFFSET_H_ */
