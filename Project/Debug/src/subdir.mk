################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Calculator.cpp \
../src/Exponential.cpp \
../src/Fraction.cpp \
../src/Integer.cpp \
../src/Log.cpp \
../src/Log_2.cpp \
../src/Project.cpp \
../src/driver_2.cpp \
../src/main.cpp 

OBJS += \
./src/Calculator.o \
./src/Exponential.o \
./src/Fraction.o \
./src/Integer.o \
./src/Log.o \
./src/Log_2.o \
./src/Project.o \
./src/driver_2.o \
./src/main.o 

CPP_DEPS += \
./src/Calculator.d \
./src/Exponential.d \
./src/Fraction.d \
./src/Integer.d \
./src/Log.d \
./src/Log_2.d \
./src/Project.d \
./src/driver_2.d \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


