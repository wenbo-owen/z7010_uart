/**
  *****************************************************************************
  * 					����û��жϴ�����������ͳһ����
  *****************************************************************************
  *
  * @File   : ISR.c
  * @By     : Sun
  * @Version: V0.5
  * @Date   : 2022 / 06 / 01
  * @Shop	: https://xiaomeige.taobao.com/
  *
  *****************************************************************************
**/

#include "ISR.h"
uint8_t Tick_Flag = 0;

//�ж���ʹ�õı�־λ
volatile int Send_All_Flag = 0;	//ȫ�����ͱ�־
volatile int Recv_All_Flag = 0;	//ȫ�����ձ�־
volatile int TimeOut_Flag = 0;	//��ʱ��־

volatile uint16_t Cnt0_Flag = 0;
volatile uint16_t Cnt1_Flag = 0;
volatile uint16_t Cnt0 = 0;
volatile uint16_t Cnt1 = 0;



/**
  *****************************************************
  * @brief	˽�ж�ʱ���жϴ������
  * @tag	��������������˽�ж�ʱ���жϣ����ڲ������û����򼴿�
  *****************************************************
**/
void ScuTimer_IRQ_Handler(void *CallBackRef)
{
	/* �������û���������� */
	Tick_Flag =1;

	/* ������������������� */
    XScuTimer_ClearInterruptStatus(&ScuTimer);
}

/***********************************************************************************************************
 * @brief:	PS_UART1�жϴ�����
 * @param:	CallBackRef������������������Ļص����ã��ڱ����У�����XUartPs���������ʵ��ָ�롣
 * @param:	Event�������ѷ������ض����͵��¼���
 * @param:	EventData���������ͺͽ����¼������ͻ���յ��ֽ�����
 * @return:	None.
***********************************************************************************************************/
void PS_UART1_IRQ_Handler(void *CallBackRef, uint32_t Event, unsigned int EventData)
{
	//�������
	if(Event == XUARTPS_EVENT_SENT_DATA){
		Send_All_Flag = 1;
	}

	//�������
	if(Event == XUARTPS_EVENT_RECV_DATA){	//����ж��¼�Ϊ���ڽ����ж�
		Recv_All_Flag = 1;
	}

	//��ʱ
	if(Event == XUARTPS_EVENT_RECV_TOUT){
		TimeOut_Flag = 1;
	}

}




void AXI_Timer0_IRQ_Handler(void *CallBackRef, u8 TmrCtrNum)
{
	//Timer0 �ļ����� 0 �ж�
	if (TmrCtrNum == TIMER_CNTR_0)
	{
		/* �������û���������� */
		Cnt0_Flag = 1;
		Cnt0++;
		/* ������������������� */
	}
	//Timer0 �ļ����� 1 �ж�
	if(TmrCtrNum == TIMER_CNTR_1)
	{
		/* �������û���������� */
		Cnt1_Flag = 1;
		Cnt1++;
		/* ������������������� */
	}
}





