################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../synergy/ssp/src/driver/r_sci_uart/r_sci_uart.c 

C_DEPS += \
./synergy/ssp/src/driver/r_sci_uart/r_sci_uart.d 

OBJS += \
./synergy/ssp/src/driver/r_sci_uart/r_sci_uart.o 

SREC += \
newt.srec 

MAP += \
newt.map 


# Each subdirectory must supply rules for building sources it contributes
synergy/ssp/src/driver/r_sci_uart/%.o: ../synergy/ssp/src/driver/r_sci_uart/%.c
	$(file > $@.in,-mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -O2 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-strict-aliasing -Wunused -Wuninitialized -Wall -Wextra -Wmissing-declarations -Wconversion -Wpointer-arith -Wshadow -Wlogical-op -Waggregate-return -Wfloat-equal -g -D_RENESAS_SYNERGY_ -I"C:/Users/mzkts/e2_studio/workspace/newt/synergy_cfg/ssp_cfg/bsp" -I"C:/Users/mzkts/e2_studio/workspace/newt/synergy_cfg/ssp_cfg/driver" -I"C:/Users/mzkts/e2_studio/workspace/newt/synergy/ssp/inc" -I"C:/Users/mzkts/e2_studio/workspace/newt/synergy/ssp/inc/bsp" -I"C:/Users/mzkts/e2_studio/workspace/newt/synergy/ssp/inc/bsp/cmsis/Include" -I"C:/Users/mzkts/e2_studio/workspace/newt/synergy/ssp/inc/driver/api" -I"C:/Users/mzkts/e2_studio/workspace/newt/synergy/ssp/inc/driver/instances" -I"C:/Users/mzkts/e2_studio/workspace/newt/src" -I"C:/Users/mzkts/e2_studio/workspace/newt/src/synergy_gen" -std=c99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" -x c "$<")
	@echo Building file: $< && arm-none-eabi-gcc @"$@.in"

