/**
  *****************************************************************************
  * 					存放用户中断处理函数，方便统一处理
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

//中断里使用的标志位
volatile int Send_All_Flag = 0;	//全部发送标志
volatile int Recv_All_Flag = 0;	//全部接收标志
volatile int TimeOut_Flag = 0;	//超时标志

volatile uint16_t Cnt0_Flag = 0;
volatile uint16_t Cnt1_Flag = 0;
volatile uint16_t Cnt0 = 0;
volatile uint16_t Cnt1 = 0;



/**
  *****************************************************
  * @brief	私有定时器中断处理程序
  * @tag	本函数用来处理私有定时器中断，在内部加入用户程序即可
  *****************************************************
**/
void ScuTimer_IRQ_Handler(void *CallBackRef)
{
	/* ↓↓↓用户处理↓↓↓ */
	Tick_Flag =1;

	/* ↑↑↑结束处理↑↑↑ */
    XScuTimer_ClearInterruptStatus(&ScuTimer);
}

/***********************************************************************************************************
 * @brief:	PS_UART1中断处理函数
 * @param:	CallBackRef：包含来自驱动程序的回调引用，在本例中，它是XUartPs驱动程序的实例指针。
 * @param:	Event：包含已发生的特定类型的事件。
 * @param:	EventData：包含发送和接收事件所发送或接收的字节数。
 * @return:	None.
***********************************************************************************************************/
void PS_UART1_IRQ_Handler(void *CallBackRef, uint32_t Event, unsigned int EventData)
{
	//发送完成
	if(Event == XUARTPS_EVENT_SENT_DATA){
		Send_All_Flag = 1;
	}

	//接收完成
	if(Event == XUARTPS_EVENT_RECV_DATA){	//如果中断事件为串口接收中断
		Recv_All_Flag = 1;
	}

	//超时
	if(Event == XUARTPS_EVENT_RECV_TOUT){
		TimeOut_Flag = 1;
	}

}




void AXI_Timer0_IRQ_Handler(void *CallBackRef, u8 TmrCtrNum)
{
	//Timer0 的计数器 0 中断
	if (TmrCtrNum == TIMER_CNTR_0)
	{
		/* ↓↓↓用户处理↓↓↓ */
		Cnt0_Flag = 1;
		Cnt0++;
		/* ↑↑↑结束处理↑↑↑ */
	}
	//Timer0 的计数器 1 中断
	if(TmrCtrNum == TIMER_CNTR_1)
	{
		/* ↓↓↓用户处理↓↓↓ */
		Cnt1_Flag = 1;
		Cnt1++;
		/* ↑↑↑结束处理↑↑↑ */
	}
}





