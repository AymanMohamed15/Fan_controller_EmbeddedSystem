################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../ADC_prg.c \
../DIO_prg.c \
../DS18B20.c \
../INTERRUPT_prg.c \
../LCD2.c \
../TIMER_PRG.c \
../fan.c \
../main.c 

OBJS += \
./ADC_prg.o \
./DIO_prg.o \
./DS18B20.o \
./INTERRUPT_prg.o \
./LCD2.o \
./TIMER_PRG.o \
./fan.o \
./main.o 

C_DEPS += \
./ADC_prg.d \
./DIO_prg.d \
./DS18B20.d \
./INTERRUPT_prg.d \
./LCD2.d \
./TIMER_PRG.d \
./fan.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


