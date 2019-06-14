################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../drivers/fsl_adc16.c \
../drivers/fsl_clock.c \
../drivers/fsl_common.c \
../drivers/fsl_ftm.c \
../drivers/fsl_gpio.c \
../drivers/fsl_lptmr.c \
../drivers/fsl_pit.c \
../drivers/fsl_pmc.c \
../drivers/fsl_rnga.c \
../drivers/fsl_rtc.c \
../drivers/fsl_sim.c \
../drivers/fsl_uart.c \
../drivers/fsl_wdog.c 

OBJS += \
./drivers/fsl_adc16.o \
./drivers/fsl_clock.o \
./drivers/fsl_common.o \
./drivers/fsl_ftm.o \
./drivers/fsl_gpio.o \
./drivers/fsl_lptmr.o \
./drivers/fsl_pit.o \
./drivers/fsl_pmc.o \
./drivers/fsl_rnga.o \
./drivers/fsl_rtc.o \
./drivers/fsl_sim.o \
./drivers/fsl_uart.o \
./drivers/fsl_wdog.o 

C_DEPS += \
./drivers/fsl_adc16.d \
./drivers/fsl_clock.d \
./drivers/fsl_common.d \
./drivers/fsl_ftm.d \
./drivers/fsl_gpio.d \
./drivers/fsl_lptmr.d \
./drivers/fsl_pit.d \
./drivers/fsl_pmc.d \
./drivers/fsl_rnga.d \
./drivers/fsl_rtc.d \
./drivers/fsl_sim.d \
./drivers/fsl_uart.d \
./drivers/fsl_wdog.d 


# Each subdirectory must supply rules for building sources it contributes
drivers/%.o: ../drivers/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -DFSL_RTOS_BM -DSDK_OS_BAREMETAL -DSDK_DEBUGCONSOLE=0 -DCR_INTEGER_PRINTF -DPRINTF_FLOAT_ENABLE=0 -DCPU_MK64FX512VDC12 -DCPU_MK64FX512VDC12_cm4 -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -D__REDLIB__ -I../board -I../source -I../ -I../drivers -I../device -I../CMSIS -O0 -fno-common -g3 -Wall -c -ffunction-sections -fdata-sections -ffreestanding -fno-builtin -mcpu=cortex-m4 -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -D__REDLIB__ -specs=redlib.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


