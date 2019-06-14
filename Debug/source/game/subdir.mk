################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../source/game/game_fsm.c \
../source/game/map.c \
../source/game/utilities.c 

OBJS += \
./source/game/game_fsm.o \
./source/game/map.o \
./source/game/utilities.o 

C_DEPS += \
./source/game/game_fsm.d \
./source/game/map.d \
./source/game/utilities.d 


# Each subdirectory must supply rules for building sources it contributes
source/game/%.o: ../source/game/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -DFSL_RTOS_BM -DSDK_OS_BAREMETAL -DSDK_DEBUGCONSOLE=0 -DCR_INTEGER_PRINTF -DPRINTF_FLOAT_ENABLE=0 -DCPU_MK64FX512VDC12 -DCPU_MK64FX512VDC12_cm4 -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -D__REDLIB__ -I../board -I../source -I../ -I../drivers -I../device -I../CMSIS -O0 -fno-common -g3 -Wall -c -ffunction-sections -fdata-sections -ffreestanding -fno-builtin -mcpu=cortex-m4 -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -D__REDLIB__ -specs=redlib.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


