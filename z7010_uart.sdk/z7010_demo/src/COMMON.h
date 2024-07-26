#ifndef ACZ7015_LIB_COMMON_H_
#define ACZ7015_LIB_COMMON_H_


//系统头文件
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


//Xilinx头文件
#include "xil_types.h"
#include "sleep.h"
#include "xparameters.h"
#include "xil_exception.h"
#include "xscugic.h"
#include "xscutimer.h"
#include "AXI_TIMER.h"
#include "AXI_GPIO.h"
#include "PS_GPIO.h"


//ACZ7015头文件
#include "ISR.h"
#include "PS_UART.h"

#include "SCU_GIC.h"
#include "SCU_TIMER.h"



//用户头文件
//MIOn 对应的 GPIO 编号为 n
#define PS_LED 7 //MIO_LED 为 MIO7，对应的 GPIO 编号为 7
#define PS_KEY 47 //MIO_KEY 为 MIO47，对应的 GPIO 编号为 47
//EMIOn 对应的 GPIO 编号为 54+n，因为 MIO 总数为 54，EMIO 是从 54 开始算的
#define PL_LED0 (54 + 0) 	//EMIO_LED0 为 EMIO0，对应的 GPIO 编号为 54+0=54
#define PL_LED1 (54 + 1)
#define PL_LED2 (54 + 2)
#define PL_LED3 (54 + 3)


//用户宏定义
#define	CPU_CLK_HZ	XPAR_PS7_CORTEXA9_0_CPU_CLK_FREQ_HZ	//CPU时钟频率(单位Hz)
#define INPUT		1
#define OUTPUT		0
#define	REG8		8
#define	REG16		16


#define GPIO_0_ID XPAR_AXI_GPIO_0_DEVICE_ID


//用户声明引用

#endif /* ACZ7015_LIB_COMMON_H_ */
