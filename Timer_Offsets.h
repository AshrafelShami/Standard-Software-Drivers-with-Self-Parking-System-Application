
#ifndef TIMER_OFFSETS_H_
#define TIMER_OFFSETS_H_

#define RCGC_T			0x604	//Offset of timer.
#define RCRC_WT         0x65C   //Offset of wide timer.
#define GPTMCFG			0x000	//GPTM Configuration
#define GPTMTAMR		0x004	//GPTM Timer A Mode
#define GPTMTBMR		0x008	//GPTM Timer B Mode
#define GPTMCTL			0x00C	//GPTM Control
#define GPTMSYNC		0x010	//GPTM Synchronize
#define GPTMIMR			0x018	//GPTM Interrupt Mask
#define GPTMRIS			0x01C	//GPTM Raw Interrupt Status
#define GPTMMIS			0x020	//GPTM Masked Interrupt Status
#define GPTMICR			0x024	//GPTM Interrupt Clear
#define GPTMTAILR		0x028	//GPTM Timer A Interval Load
#define GPTMTBILR		0x02C	//GPTM Timer B Interval Load
#define GPTMTAMATCHR	0x030	//GPTM Timer A Match
#define GPTMTBMATCHR	0x034	//GPTM Timer B Match
#define GPTMTAPR		0x038	//GPTM Timer A PRESCALER
#define GPTMTBPR		0x03C	//GPTM Timer B PRESCALER
#define GPTMTAPMR		0x040	//GPTM TimerA PRESCALER Match
#define GPTMTBPMR		0x044	//GPTM TimerB PRESCALER Match
#define GPTMTAR			0x048	//GPTM Timer A
#define GPTMTBR			0x04C	//GPTM Timer B
#define GPTMTAV			0x050	//GPTM Timer A Value
#define GPTMTBV			0x054	//GPTM Timer B Value
#define GPTMRTCPD		0x058	//GPTM RTC PreDivide
#define GPTMTAPS		0x05C	//GPTM Timer A PRESCALER Snapshot
#define GPTMTBPS		0x060	//GPTM Timer B PRESCALER Snapshot
#define GPTMTAPV		0x064	//GPTM Timer A PRESCALER Value
#define GPTMTBPV		0x068	//GPTM Timer B PRESCALER Value
#define GPTMPP			0xFC0	//GPTM Peripheral Properties
	
#endif /* TIMER_OFFSETS_H_ */
