# Global variables
STD        := -lstdc++ -std=c++17 -pthread
CC         := gcc $(STD)
CXX        := g++ $(STD)
WARN       := -Wall -Wextra -Wfatal-errors
CFLAGS     := -fPIC $(WARN) -O2 -g
RM         := rm -f

.PHONY: all
all: 01_SingletonLogger/01_SingletonLogger.bin 02_CarFactory/02_CarFactory.bin 03_LoggerAdaptor/03_LoggerAdaptor.bin 04_Decorator/04_Decorator.bin 05_ChainOfResponsibility/05_ChainOfResponsibility.bin 06_Observer/06_Observer.bin

.PHONY: clean
clean:
	$(RM)  01_SingletonLogger/01_SingletonLogger.bin 02_CarFactory/02_CarFactory.bin 03_LoggerAdaptor/03_LoggerAdaptor.bin 04_Decorator/04_Decorator.bin 05_ChainOfResponsibility/05_ChainOfResponsibility.bin 06_Observer/06_Observer.bin

# Actually build the binaries

01_SingletonLogger/01_SingletonLogger.bin : 01_SingletonLogger/Logger.cpp 01_SingletonLogger/TestSingletonLogger.cpp
	$(CXX) $(CFLAGS) -o $@ $^

02_CarFactory/02_CarFactory.bin : 02_CarFactory/CarFactory.cpp 02_CarFactory/CarTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

03_LoggerAdaptor/03_LoggerAdaptor.bin : 03_LoggerAdaptor/LoggerAdaptor.cpp 03_LoggerAdaptor/TestLoggerAdaptor.cpp
	$(CXX) $(CFLAGS) -o $@ $^

04_Decorator/04_Decorator.bin : 04_Decorator/Decorator.cpp
	$(CXX) $(CFLAGS) -o $@ $^

05_ChainOfResponsibility/05_ChainOfResponsibility.bin : 05_ChainOfResponsibility/ChainOfResponsibility.cpp
	$(CXX) $(CFLAGS) -o $@ $^

06_Observer/06_Observer.bin : 06_Observer/Observer.cpp
	$(CXX) $(CFLAGS) -o $@ $^

