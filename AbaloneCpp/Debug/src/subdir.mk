################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/AbaloneCpp.cpp \
../src/BoardCoordinates.cpp \
../src/BoardDirection.cpp \
../src/BoardManager.cpp \
../src/BoardManager_test.cpp \
../src/GameBoard.cpp \
../src/GameEngine.cpp \
../src/GameEngine_test.cpp \
../src/GameMatch.cpp \
../src/GameRule.cpp \
../src/GameRule_test.cpp \
../src/GameVariant.cpp \
../src/MatchManager.cpp \
../src/MatchManager_test.cpp \
../src/MatchPlayer.cpp \
../src/PlayerMove.cpp \
../src/PlayerPiece.cpp 

OBJS += \
./src/AbaloneCpp.o \
./src/BoardCoordinates.o \
./src/BoardDirection.o \
./src/BoardManager.o \
./src/BoardManager_test.o \
./src/GameBoard.o \
./src/GameEngine.o \
./src/GameEngine_test.o \
./src/GameMatch.o \
./src/GameRule.o \
./src/GameRule_test.o \
./src/GameVariant.o \
./src/MatchManager.o \
./src/MatchManager_test.o \
./src/MatchPlayer.o \
./src/PlayerMove.o \
./src/PlayerPiece.o 

CPP_DEPS += \
./src/AbaloneCpp.d \
./src/BoardCoordinates.d \
./src/BoardDirection.d \
./src/BoardManager.d \
./src/BoardManager_test.d \
./src/GameBoard.d \
./src/GameEngine.d \
./src/GameEngine_test.d \
./src/GameMatch.d \
./src/GameRule.d \
./src/GameRule_test.d \
./src/GameVariant.d \
./src/MatchManager.d \
./src/MatchManager_test.d \
./src/MatchPlayer.d \
./src/PlayerMove.d \
./src/PlayerPiece.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


