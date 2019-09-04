# Global variables
STD        := -lstdc++ -std=c++17 -pthread
CC         := gcc $(STD)
CXX        := g++ $(STD)
WARN       := -Wall -Wextra -Wfatal-errors
CFLAGS     := -fPIC $(WARN) -O2 -g
RM         := rm -f

.PHONY: all
all: 01_ReadIntegerFile/01_ReadIntegerFile.bin 02_ExceptionsAndPolymorphism/02_ExceptionsAndPolymorphism.bin 03_NestedException/03_NestedException.bin 04_Rethrow/04_Rethrow.bin 05_StackUnwinding/05_StackUnwinding.bin 06_NewFailures/06_NewFailures.bin 07_ConstructorError/07_ConstructorError.bin 08_FunctionTryBlock/08_FunctionTryBlock.bin 09_GameBoard/09_GameBoard.bin

.PHONY: clean
clean:
	$(RM)  01_ReadIntegerFile/01_ReadIntegerFile.bin 02_ExceptionsAndPolymorphism/02_ExceptionsAndPolymorphism.bin 03_NestedException/03_NestedException.bin 04_Rethrow/04_Rethrow.bin 05_StackUnwinding/05_StackUnwinding.bin 06_NewFailures/06_NewFailures.bin 07_ConstructorError/07_ConstructorError.bin 08_FunctionTryBlock/08_FunctionTryBlock.bin 09_GameBoard/09_GameBoard.bin

# Actually build the binaries

01_ReadIntegerFile/01_ReadIntegerFile.bin : 01_ReadIntegerFile/01_NoExceptionHandling.cpp 01_ReadIntegerFile/02_SafeDivide.cpp 01_ReadIntegerFile/03_BasicExceptions.cpp 01_ReadIntegerFile/04_ThrowInt.cpp 01_ReadIntegerFile/05_ThrowCharStar.cpp 01_ReadIntegerFile/06_CatchByValue.cpp 01_ReadIntegerFile/07_CatchByNonConstReference.cpp 01_ReadIntegerFile/08_ThrowingMultipleBasic.cpp 01_ReadIntegerFile/09_ThrowingTwoTypes.cpp 01_ReadIntegerFile/10_MatchingAnyException.cpp 01_ReadIntegerFile/11_TerminateHandler.cpp 01_ReadIntegerFile/12_noexcept.cpp
	$(CXX) $(CFLAGS) -o $@ $^

02_ExceptionsAndPolymorphism/02_ExceptionsAndPolymorphism.bin : 02_ExceptionsAndPolymorphism/01_UsingWhat.cpp 02_ExceptionsAndPolymorphism/02_CatchingPolymorphicallyCorrectOne.cpp 02_ExceptionsAndPolymorphism/03_CatchingPolymorphicallyCorrectTwo.cpp 02_ExceptionsAndPolymorphism/04_CatchingPolymorphicallyIncorrect.cpp 02_ExceptionsAndPolymorphism/05_WritingExceptions.cpp
	$(CXX) $(CFLAGS) -o $@ $^

03_NestedException/03_NestedException.bin : 03_NestedException/NestedException.cpp
	$(CXX) $(CFLAGS) -o $@ $^

04_Rethrow/04_Rethrow.bin : 04_Rethrow/01_rethrow.cpp 04_Rethrow/02_rethrow.cpp
	$(CXX) $(CFLAGS) -o $@ $^

05_StackUnwinding/05_StackUnwinding.bin : 05_StackUnwinding/01_BadCode.cpp 05_StackUnwinding/02_SmartPointer.cpp 05_StackUnwinding/03_CatchAndRethrow.cpp
	$(CXX) $(CFLAGS) -o $@ $^

06_NewFailures/06_NewFailures.bin : 06_NewFailures/01_Exceptions.cpp 06_NewFailures/02_Nothrow.cpp 06_NewFailures/03_NewHandler.cpp
	$(CXX) $(CFLAGS) -o $@ $^

07_ConstructorError/07_ConstructorError.bin : 07_ConstructorError/ConstructorErrorTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

08_FunctionTryBlock/08_FunctionTryBlock.bin : 08_FunctionTryBlock/FunctionTryBlocks.cpp
	$(CXX) $(CFLAGS) -o $@ $^

09_GameBoard/09_GameBoard.bin : 09_GameBoard/GameBoard.cpp 09_GameBoard/GameBoardTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

