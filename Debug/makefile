################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include startup/subdir.mk
-include source/game/subdir.mk
-include source/subdir.mk
-include drivers/custom/TFT/images/subdir.mk
-include drivers/custom/TFT/subdir.mk
-include drivers/custom/JOYSTICK/subdir.mk
-include drivers/custom/HAPTIC/subdir.mk
-include drivers/custom/subdir.mk
-include drivers/subdir.mk
-include device/subdir.mk
-include board/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: GAME_BOARD.axf

# Tool invocations
GAME_BOARD.axf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: MCU Linker'
	arm-none-eabi-gcc -nostdlib -Xlinker -Map="GAME_BOARD.map" -Xlinker --gc-sections -Xlinker -print-memory-usage -Xlinker --sort-section=alignment -mcpu=cortex-m4 -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -T GAME_BOARD_Debug.ld -o "GAME_BOARD.axf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '
	$(MAKE) --no-print-directory post-build

# Other Targets
clean:
	-$(RM) $(EXECUTABLES)$(OBJS)$(C_DEPS) GAME_BOARD.axf
	-@echo ' '

post-build:
	-@echo 'Performing post-build steps'
	-arm-none-eabi-size "GAME_BOARD.axf"; # arm-none-eabi-objcopy -v -O binary "GAME_BOARD.axf" "GAME_BOARD.bin" ; # checksum -p MK64FX512xxx12 -d "GAME_BOARD.bin";
	-@echo ' '

.PHONY: all clean dependents post-build

-include ../makefile.targets
