#ifndef ACZ7015_LIB_ISR_H_
#define ACZ7015_LIB_ISR_H_

#include "COMMON.h"

extern uint8_t Tick_Flag;

//�ж���ʹ�õı�־λ
extern volatile int Send_All_Flag;	//ȫ�����ͱ�־
extern volatile int Recv_All_Flag;	//ȫ�����ձ�־
extern volatile int TimeOut_Flag;	//��ʱ��־



extern volatile uint16_t Cnt0;
extern volatile uint16_t Cnt1;
extern volatile uint16_t Cnt0_Flag;
extern volatile uint16_t Cnt1_Flag;

void AXI_Timer0_IRQ_Handler(void *CallBackRef, u8 TmrCtrNum);



void ScuTimer_IRQ_Handler(void *CallBackRef);

void PS_UART1_IRQ_Handler(void *CallBackRef, uint32_t Event, unsigned int EventData);

#endif /* ACZ7015_LIB_ISR_H_ */