/************************************
*	Define all (GPIO) offsets		*
*************************************
 * GPIO_Ports_OFFSETS.h
 *
 * Created: 1/13/2017 6:12:47 PM
 */


#ifndef GPIO_PORTS_OFFSETS_H_
#define GPIO_PORTS_OFFSETS_H_

#define		_DATA_Offset	0x3FC		//Offset of Data.
#define		_DIR_Offset		0x400		//Offset of Data Direction.
#define		_IS_Offset		0x404		//Offset of Interrupt Sense.
#define		_IBE_Offset		0x408		//Offset of Interrupt Both Edges.
#define		_IEV_Offset		0x40C		//Offset of Interrupt Event.

#define		_IM_Offset		0x410		//Offset of Interrupt Mask.
#define		_RIS_Offset		0x414		//Offset of Raw Interrupt Status.
#define		_MIS_Offset		0x418		//Offset of Masked Interrupt Status.
#define		_ICR_Offset		0x41C		//Offset of Interrupt Clear.
#define		_AFSEL_Offset	0x420		//Offset of Alternate Function Select.

#define		_DRV2_Offset	0x500		//Offset of 2-mA Drive Select.
#define		_DRV4_Offset	0x504		//Offset of 4-mA Drive Select.
#define		_DRV8_Offset	0x508		//Offset of 8-mA Drive Select.
#define		_ODE_Offset		0x50C		//Offset of Open Drain Select.
#define		_PUE_Offset		0x510		//Offset of Pull-Up Select.

#define		_PDE_Offset		0x514		//Offset of Pull-Down Select.
#define		_SRL_Offset		0x518		//Offset of Slew Rate Control Select.
#define		_DEN_Offset		0x51C		//Offset of Digital Enable.
#define		_LOCK_Offset	0x520		//Offset of LOCK.
#define		_CR_Offset		0x524		//Offset of Commit.

#define		_CID3_Offset	0xFFC		//Offset of PrimeCell Identification 3.
#define		_PC_Offset		0x52C		//Offset of Port Control.
#define		_ADCEN_Offset	0x530		//Offset of ACD Control.
#define		_DMAEN_Offset	0x534		//Offset of DMA Control.
#define		_Clock_Enable	0x608		//Offset of CE
#define		_PID4__Offset	0xFD0		//Offset of Peripheral Identification 4.

#define		_PID5__Offset	0xFD4		//Offset of Peripheral Identification 5.
#define		_PID6__Offset	0xFD8		//Offset of Peripheral Identification 6.
#define		_PID7__Offset	0xFDC		//Offset of Peripheral Identification 7.
#define		_PID0__Offset	0xFE0		//Offset of Peripheral Identification 0.
#define		_PID1__Offset	0xFE4		//Offset of Peripheral Identification 1.

#define		_PID2__Offset	0xFE8		//Offset of Peripheral Identification 2.
#define		_PID3__Offset	0xFEC		//Offset of Peripheral Identification 3.
#define		_CID0_Offset	0xFF0		//Offset of PrimeCell Identification 0.
#define		_CID1_Offset	0xFF4		//Offset of PrimeCell Identification 1.
#define		_CID2_Offset	0xFF8		//Offset of PrimeCell Identification 2.

#define		_GPIOAMSEL_Offset	0x528	//Offset of Analog Mode Select.

#endif /* GPIO_PORTS_OFFSETS_H_ */
