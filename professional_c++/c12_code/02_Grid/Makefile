# Global variables
STD        := -lstdc++ -std=c++17 -pthread
CC         := gcc $(STD)
CXX        := g++ $(STD)
WARN       := -Wall -Wextra -Wfatal-errors
CFLAGS     := -fPIC $(WARN) -O2 -g
RM         := rm -f

.PHONY: all
all: 01_MethodsInHeader/01_MethodsInHeader.bin 02_MethodsInSeparateHeader/02_MethodsInSeparateHeader.bin 03_MethodsInSource/03_MethodsInSource.bin 04_ExplicitInstantiations/04_ExplicitInstantiations.bin

.PHONY: clean
clean:
	$(RM)  01_MethodsInHeader/01_MethodsInHeader.bin 02_MethodsInSeparateHeader/02_MethodsInSeparateHeader.bin 03_MethodsInSource/03_MethodsInSource.bin 04_ExplicitInstantiations/04_ExplicitInstantiations.bin

# Actually build the binaries

01_MethodsInHeader/01_MethodsInHeader.bin : 01_MethodsInHeader/GridTest.cpp 01_MethodsInHeader/SpreadsheetCell.cpp
	$(CXX) $(CFLAGS) -o $@ $^

02_MethodsInSeparateHeader/02_MethodsInSeparateHeader.bin : 02_MethodsInSeparateHeader/GridTest.cpp 02_MethodsInSeparateHeader/SpreadsheetCell.cpp
	$(CXX) $(CFLAGS) -o $@ $^

03_MethodsInSource/03_MethodsInSource.bin : 03_MethodsInSource/Grid.cpp 03_MethodsInSource/GridTest.cpp 03_MethodsInSource/SpreadsheetCell.cpp
	$(CXX) $(CFLAGS) -o $@ $^

04_ExplicitInstantiations/04_ExplicitInstantiations.bin : 04_ExplicitInstantiations/Grid.cpp 04_ExplicitInstantiations/GridTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

