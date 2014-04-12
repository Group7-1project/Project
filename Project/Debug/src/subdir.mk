################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Exponential.cpp \
../src/Fraction.cpp \
../src/Log.cpp \
../src/Project.cpp 

OBJS += \
./src/Exponential.o \
./src/Fraction.o \
./src/Log.o \
./src/Project.o 

CPP_DEPS += \
./src/Exponential.d \
./src/Fraction.d \
./src/Log.d \
./src/Project.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


