/************************************
*	-(GPIO) Ports ADDRESSES			*
*	-Base Address for every PORT	*
*	-Start Address for Clock Enable	*
*************************************
 * GPIO_PORTS_Addresses.h
 *
 * Created: 1/13/2017 6:12:47 PM
 */


#ifndef GPIO_PORTS_ADDRESSES_H_
#define GPIO_PORTS_ADDRESSES_H_

#define __Port_A_Address		0x40004000	//Start Address of port A.
#define __Port_B_Address		0x40005000	//Start Address of port B.
#define __Port_C_Address		0x40006000	//Start Address of port C.
#define __Port_D_Address		0x40007000	//Start Address of port D.
#define __Port_E_Address		0x40024000	//Start Address of port E.
#define __Port_F_Address		0x40025000	//Start Address of port F.

#define __Clock_Enable			0x400FE608	//Start Address for Clock Enable Register (RCGCGPIO).
#define __Unlock_Register		0x4C4F434B

#endif /* GPIO_PORTS_ADDRESSES_H_ */
