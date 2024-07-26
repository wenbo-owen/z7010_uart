#ifndef ACZ7015_LIB_COMMON_H_
#define ACZ7015_LIB_COMMON_H_


//ϵͳͷ�ļ�
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


//Xilinxͷ�ļ�
#include "xil_types.h"
#include "sleep.h"
#include "xparameters.h"
#include "xil_exception.h"
#include "xscugic.h"
#include "xscutimer.h"
#include "AXI_TIMER.h"
#include "AXI_GPIO.h"
#include "PS_GPIO.h"


//ACZ7015ͷ�ļ�
#include "ISR.h"
#include "PS_UART.h"

#include "SCU_GIC.h"
#include "SCU_TIMER.h"



//�û�ͷ�ļ�
//MIOn ��Ӧ�� GPIO ���Ϊ n
#define PS_LED 7 //MIO_LED Ϊ MIO7����Ӧ�� GPIO ���Ϊ 7
#define PS_KEY 47 //MIO_KEY Ϊ MIO47����Ӧ�� GPIO ���Ϊ 47
//EMIOn ��Ӧ�� GPIO ���Ϊ 54+n����Ϊ MIO ����Ϊ 54��EMIO �Ǵ� 54 ��ʼ���
#define PL_LED0 (54 + 0) 	//EMIO_LED0 Ϊ EMIO0����Ӧ�� GPIO ���Ϊ 54+0=54
#define PL_LED1 (54 + 1)
#define PL_LED2 (54 + 2)
#define PL_LED3 (54 + 3)


//�û��궨��
#define	CPU_CLK_HZ	XPAR_PS7_CORTEXA9_0_CPU_CLK_FREQ_HZ	//CPUʱ��Ƶ��(��λHz)
#define INPUT		1
#define OUTPUT		0
#define	REG8		8
#define	REG16		16


#define GPIO_0_ID XPAR_AXI_GPIO_0_DEVICE_ID


//�û���������

#endif /* ACZ7015_LIB_COMMON_H_ */
