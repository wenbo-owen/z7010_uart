################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../ACZ7015_Lib/PS_UART/PS_UART.c 

OBJS += \
./ACZ7015_Lib/PS_UART/PS_UART.o 

C_DEPS += \
./ACZ7015_Lib/PS_UART/PS_UART.d 


# Each subdirectory must supply rules for building sources it contributes
ACZ7015_Lib/PS_UART/%.o: ../ACZ7015_Lib/PS_UART/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: ARM v7 gcc compiler'
	arm-none-eabi-gcc -Wall -O0 -g3 -I../../z7010_uart_irq_bsp/ps7_cortexa9_0/include -I"D:\FPGA\Z7010_MINI\z7010_uart\z7010_uart.sdk\z7010_uart_irq\ACZ7015_Lib\PS_UART" -I"D:\FPGA\Z7010_MINI\z7010_uart\z7010_uart.sdk\z7010_uart_irq\ACZ7015_Lib\SCU" -I"D:\FPGA\Z7010_MINI\z7010_uart\z7010_uart.sdk\z7010_uart_irq\src" -c -fmessage-length=0 -MT"$@" -mcpu=cortex-a9 -mfpu=vfpv3 -mfloat-abi=hard -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


