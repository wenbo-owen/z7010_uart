/**
  *****************************************************************************
  * 					使用PS端的串口中断实现数据发送和接收处理
  * 				帧头'S' 帧尾'E' 中间有效数据长度为8字节，总长10字节
  *****************************************************************************
  *
  * @File   : main.c
  * @By     : Sun
  * @Version: V1.0
  * @Date   : 2022 / 06 / 07
  * @Shop	: https://xiaomeige.taobao.com/
  *
  *****************************************************************************
**/
#include "COMMON.h"

uint8_t Receive_Buffer[50];

int main(void)
{
	uint8_t Data[50];
	uint8_t i;
	uint32_t Tick_Cnt = 0;

	//开启通用中断控制器
	ScuGic_Init();

	//初始化私有定时器 ，参数是Time_us
	ScuTimer_Int_Init(1000000);

	//UART初始化
	PS_UART_Init(&UartPs1,XPAR_PS7_UART_1_DEVICE_ID, XUARTPS_OPER_MODE_NORMAL, 115200);

	//UART中断初始化，开启超时功能
	PS_UART_Intr_Init(&UartPs1, PS_UART1_IRQ_ID, 8, (void *)PS_UART1_IRQ_Handler);

	//UART发送
	PS_Uart_SendString(&UartPs1,"00 01 02 03 04 05 06 07 08 09 10 "
			"11 12 13 14 15 16 17 18 19 20 21 22 23 24 25\n");

	//等待上一轮发送完成
	while(!Send_All_Flag);
	Send_All_Flag = 0;

	PS_Uart_SendString(&UartPs1,"UART send done!!!\n");  //PS_uart发送字符串 PS_UART.C


	while(1) {
		//UART接收10个字符 ,第3个参数是 接收字节数字
		PS_Uart_RecvData(&UartPs1, Receive_Buffer, 50);  // 就是连续接收到10个字节

		//等待10字节接收完成或接收超时
		//while(!(Recv_All_Flag || TimeOut_Flag));


		//接收完成则处理数据
		if(Recv_All_Flag) {
			//清除接收完成标志
			Recv_All_Flag = 0;

			//处理接受到的数据，帧头'S' 帧尾'E'，中间有效数据长度为8字节
			if((Receive_Buffer[0] == 0x55) && (Receive_Buffer[9] == 0xAA))
			{
				for(i=0;i<8;i++) {
					Data[i] = Receive_Buffer[i+1];

				}

				//回发8位有效数据
				XUartPs_Send(&UartPs1,Data,8);

				//换行
				PS_Uart_SendString(&UartPs1,"\n");
			}
		}

		//接收超时则重新接收,当接受到的一组串口数据数量没有达到len时候，会触发超时，也可以正常接收数据
		if(TimeOut_Flag) {
			//清除接收超时标志
			TimeOut_Flag = 0;
		}

		if(Tick_Flag)
		{
			Tick_Flag = 0;
			//打印 Tick_Cnt 计数值
			printf("Tick Cnt: %lu\n", Tick_Cnt);
			//Tick_Cnt 范围 0~59
			if(Tick_Cnt >= 59)
			Tick_Cnt = 0;
			else
			Tick_Cnt++;
		}



	}

	return 0;
}
