# Global variables
STD        := -lstdc++ -std=c++17 -pthread
CC         := gcc $(STD)
CXX        := g++ $(STD)
WARN       := -Wall -Wextra -Wfatal-errors
CFLAGS     := -fPIC $(WARN) -O2 -g
RM         := rm -f

.PHONY: all
all: 01_Simple/01_Simple.bin 02_CopyAndSwap/02_CopyAndSwap.bin 03_Exceptions/03_Exceptions.bin 04_FileRead/04_FileRead.bin 05_FileWrite/05_FileWrite.bin 06_Template/06_Template.bin 07_RAII/07_RAII.bin 08_DoubleDispatch/08_DoubleDispatch.bin

.PHONY: clean
clean:
	$(RM)  01_Simple/01_Simple.bin 02_CopyAndSwap/02_CopyAndSwap.bin 03_Exceptions/03_Exceptions.bin 04_FileRead/04_FileRead.bin 05_FileWrite/05_FileWrite.bin 06_Template/06_Template.bin 07_RAII/07_RAII.bin 08_DoubleDispatch/08_DoubleDispatch.bin

# Actually build the binaries

01_Simple/01_Simple.bin : 01_Simple/DerivedSimple.cpp 01_Simple/Simple.cpp
	$(CXX) $(CFLAGS) -o $@ $^

02_CopyAndSwap/02_CopyAndSwap.bin : 02_CopyAndSwap/CopyAndSwap.cpp
	$(CXX) $(CFLAGS) -o $@ $^

03_Exceptions/03_Exceptions.bin : 03_Exceptions/Exceptions.cpp
	$(CXX) $(CFLAGS) -o $@ $^

04_FileRead/04_FileRead.bin : 04_FileRead/FileRead.cpp
	$(CXX) $(CFLAGS) -o $@ $^

05_FileWrite/05_FileWrite.bin : 05_FileWrite/FileWrite.cpp
	$(CXX) $(CFLAGS) -o $@ $^

06_Template/06_Template.bin : 06_Template/TemplateTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

07_RAII/07_RAII.bin : 07_RAII/RAII.cpp
	$(CXX) $(CFLAGS) -o $@ $^

08_DoubleDispatch/08_DoubleDispatch.bin : 08_DoubleDispatch/01_DoubleDispatchBruteForce.cpp 08_DoubleDispatch/02_DoubleDispatch.cpp
	$(CXX) $(CFLAGS) -o $@ $^

