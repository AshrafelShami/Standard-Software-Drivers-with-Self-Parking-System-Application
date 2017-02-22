
#ifndef PWM_OFFSETS_H_
#define PWM_OFFSETS_H_

#define			_PWM_RCGC			0x640	//PWM RCGC_Register offset.

#define			_PWMCTL				0x000	// PWM Master Control.
#define			_PWMSYNC			0x004	// Time Base Sync.
#define			_PWMENABLE			0x008	// PWM Output Enable.
#define			_PWMINVERT			0x00C	// PWM Output Inversion.
#define			_PWMFAULT			0x010	// PWM Output Fault.
#define			_PWMINTEN			0x014	// PWM Interrupt Enable.
#define			_PWMRIS				0x018	// PWM Raw Interrupt Status.
#define			_PWMISC				0x01C	// PWM Interrupt Status and Clear.
#define			_PWMSTATUS			0x020	// PWM Status.
#define			_PWMFAULTVAL		0x024	// PWM Fault Condition Value.
#define			_PWMENUPD			0x028	// PWM Enable Update.

#define			_PWM0CTL			0x040	// PWM0 Control.
#define			_PWM0INTEN			0x044	// PWM0 Interrupt and Trigger Enable.
#define			_PWM0RIS			0x048	// PWM0 Raw Interrupt Status.
#define			_PWM0ISC			0x04C	// PWM0 Interrupt Status and Clear.
#define			_PWM0LOAD			0x050	// PWM0 Load.
#define			_PWM0COUNT			0x054	// PWM0 Counter.
#define			_PWM0CMPA			0x058	// PWM0 Compare A.
#define			_PWM0CMPB			0x05C	// PWM0 Compare B.
#define			_PWM0GENA			0x060	// PWM0 Generator A Control.
#define			_PWM0GENB			0x064	// PWM0 Generator B Control.
#define			_PWM0DBCTL			0x068	// PWM0 Dead-Band Control.
#define			_PWM0DBRISE			0x06C	// PWM0 Dead-Band Rising-Edge Delay.
#define			_PWM0DBFALL			0x070	// PWM0 Dead-Band Falling-Edge-Delay.
#define			_PWM0FLTSRC0		0x074	// PWM0 Fault Source 0.
#define			_PWM0FLTSRC1		0x078	// PWM0 Fault Source 1.
#define			_PWM0MINFLTPER		0x07C	// PWM0 Minimum Fault Period.

#define			_PWM1CTL			0x080	// PWM1 Control.
#define			_PWM1INTEN			0x084	// PWM1 Interrupt and Trigger Enable.
#define			_PWM1RIS			0x088	// PWM1 Raw Interrupt Status.
#define			_PWM1ISC			0x08C	// PWM1 Interrupt Status and Clear.
#define			_PWM1LOAD			0x090	// PWM1 Load.
#define			_PWM1COUNT			0x094	// PWM1 Counter.
#define			_PWM1CMPA			0x098	// PWM1 Compare A.
#define			_PWM1CMPB			0x09C	// PWM1 Compare B.
#define			_PWM1GENA			0x0A0	// PWM1 Generator A Control.
#define			_PWM1GENB			0x0A4	// PWM1 Generator B Control.
#define			_PWM1DBCTL			0x0A8	// PWM1 Dead-Band Control.
#define			_PWM1DBRISE			0x0AC	// PWM1 Dead-Band Rising-Edge Delay.
#define			_PWM1DBFALL			0x0B0	// PWM1 Dead-Band Falling-Edge-Delay.
#define			_PWM1FLTSRC0		0x0B4	// PWM1 Fault Source 0.
#define			_PWM1FLTSRC1		0x0B8	// PWM1 Fault Source 1.
#define			_PWM1MINFLTPER		0x0BC	// PWM1 Minimum Fault Period.

#define			_PWM2CTL			0x0C0	// PWM2 Control.
#define			_PWM2INTEN			0x0C4	// PWM2 Interrupt and Trigger Enable.
#define			_PWM2RIS			0x0C8	// PWM2 Raw Interrupt Status.
#define			_PWM2ISC			0x0CC	// PWM2 Interrupt Status and Clear.
#define			_PWM2LOAD			0x0D0	// PWM2 Load.
#define			_PWM2COUNT			0x0D4	// PWM2 Counter.
#define			_PWM2CMPA			0x0D8	// PWM2 Compare A.
#define			_PWM2CMPB			0x0DC	// PWM2 Compare B.
#define			_PWM2GENA			0x0E0	// PWM2 Generator A Control.
#define			_PWM2GENB			0x0E4	// PWM2 Generator B Control.
#define			_PWM2DBCTL			0x0E8	// PWM2 Dead-Band Control.
#define			_PWM2DBRISE			0x0EC	// PWM2 Dead-Band Rising-Edge Delay.
#define			_PWM2DBFALL			0x0F0	// PWM2 Dead-Band Falling-Edge-Delay.
#define			_PWM2FLTSRC0		0x0F4	// PWM2 Fault Source 0.
#define			_PWM2FLTSRC1		0x0F8	// PWM2 Fault Source 1.
#define			_PWM2MINFLTPER		0x0FC	// PWM2 Minimum Fault Period.

#define			_PWM3CTL			0x100	// PWM3 Control.
#define			_PWM3INTEN			0x104	// PWM3 Interrupt and Trigger Enable.
#define			_PWM3RIS			0x108	// PWM3 Raw Interrupt Status.
#define			_PWM3ISC			0x10C	// PWM3 Interrupt Status and Clear.
#define			_PWM3LOAD			0x110	// PWM3 Load.
#define			_PWM3COUNT			0x114	// PWM3 Counter.
#define			_PWM3CMPA			0x118	// PWM3 Compare A.
#define			_PWM3CMPB			0x11C	// PWM3 Compare B.
#define			_PWM3GENA			0x120	// PWM3 Generator A Control.
#define			_PWM3GENB			0x124	// PWM3 Generator B Control.
#define			_PWM3DBCTL			0x128	// PWM3 Dead-Band Control.
#define			_PWM3DBRISE			0x12C	// PWM3 Dead-Band Rising-Edge Delay.
#define			_PWM3DBFALL			0x130	// PWM3 Dead-Band Falling-Edge-Delay.
#define			_PWM3FLTSRC0		0x134	// PWM3 Fault Source 0.
#define			_PWM3FLTSRC1		0x138	// PWM3 Fault Source 1.
#define			_PWM3MINFLTPER		0x13C	// PWM3 Minimum Fault Period.

#define			_PWM0FLTSEN			0x800	// PWM0 Fault Pin Logic Sense.
#define			_PWM0FLTSTAT0		0x804	// PWM0 Fault Status 0.
#define			_PWM0FLTSTAT1		0x808	// PWM0 Fault Status 1.

#define			_PWM1FLTSEN			0x880	// PWM1 Fault Pin Logic Sense.
#define			_PWM1FLTSTAT0		0x884	// PWM1 Fault Status 0.
#define			_PWM1FLTSTAT1		0x888	// PWM1 Fault Status 1.

#define			_PWM2FLTSTAT0		0x904	// PWM2 Fault Status 0.
#define			_PWM2FLTSTAT1		0x908	// PWM2 Fault Status 1.

#define			_PWM3FLTSTAT0		0x984	// PWM3 Fault Status 0.
#define			_PWM3FLTSTAT1		0x988	// PWM3 Fault Status 1.

#define			_PWMPP				0xFC0	// PWM Peripheral Properties.



#endif /* PWM_OFFSETS_H_ */
