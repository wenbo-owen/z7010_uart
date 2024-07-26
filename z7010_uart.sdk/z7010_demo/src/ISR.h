#ifndef ACZ7015_LIB_ISR_H_
#define ACZ7015_LIB_ISR_H_

#include "COMMON.h"

extern uint8_t Tick_Flag;

//中断里使用的标志位
extern volatile int Send_All_Flag;	//全部发送标志
extern volatile int Recv_All_Flag;	//全部接收标志
extern volatile int TimeOut_Flag;	//超时标志



extern volatile uint16_t Cnt0;
extern volatile uint16_t Cnt1;
extern volatile uint16_t Cnt0_Flag;
extern volatile uint16_t Cnt1_Flag;

void AXI_Timer0_IRQ_Handler(void *CallBackRef, u8 TmrCtrNum);



void ScuTimer_IRQ_Handler(void *CallBackRef);

void PS_UART1_IRQ_Handler(void *CallBackRef, uint32_t Event, unsigned int EventData);

#endif /* ACZ7015_LIB_ISR_H_ */
