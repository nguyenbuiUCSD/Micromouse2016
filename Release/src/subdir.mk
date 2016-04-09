################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Led.c \
../src/Timer.c \
../src/_initialize_hardware.c \
../src/_write.c \
../src/main.c 

OBJS += \
./src/Led.o \
./src/Timer.o \
./src/_initialize_hardware.o \
./src/_write.o \
./src/main.o 

C_DEPS += \
./src/Led.d \
./src/Timer.d \
./src/_initialize_hardware.d \
./src/_write.d \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=soft -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -Wall -Wextra  -g -DOS_USE_TRACE_SEMIHOSTING_DEBUG -DSTM32F405xx -DUSE_HAL_DRIVER -DHSE_VALUE=0 -I"../include" -I"../system/include" -I"../system/include/cmsis" -I"../system/include/stm32f4-hal" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


