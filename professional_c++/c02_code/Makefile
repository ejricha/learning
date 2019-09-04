# Global variables
STD        := -lstdc++ -std=c++17 -pthread
CC         := gcc $(STD)
CXX        := g++ $(STD)
WARN       := -Wall -Wextra -Wfatal-errors
CFLAGS     := -fPIC $(WARN) -O2 -g
RM         := rm -f

.PHONY: all
all: 01_CStrings/01_CStrings.bin 02_RawStringLiteral/02_RawStringLiteral.bin 03_CppStrings/03_CppStrings.bin 04_stoi/04_stoi.bin 05_StringViews/05_StringViews.bin

.PHONY: clean
clean:
	$(RM)  01_CStrings/01_CStrings.bin 02_RawStringLiteral/02_RawStringLiteral.bin 03_CppStrings/03_CppStrings.bin 04_stoi/04_stoi.bin 05_StringViews/05_StringViews.bin

# Actually build the binaries

01_CStrings/01_CStrings.bin : 01_CStrings/01_strcpy.cpp 01_CStrings/02_strlen.cpp
	$(CXX) $(CFLAGS) -o $@ $^

02_RawStringLiteral/02_RawStringLiteral.bin : 02_RawStringLiteral/RawStringLiteral.cpp
	$(CXX) $(CFLAGS) -o $@ $^

03_CppStrings/03_CppStrings.bin : 03_CppStrings/CppStrings.cpp
	$(CXX) $(CFLAGS) -o $@ $^

04_stoi/04_stoi.bin : 04_stoi/stoi.cpp
	$(CXX) $(CFLAGS) -o $@ $^

05_StringViews/05_StringViews.bin : 05_StringViews/StringViews.cpp
	$(CXX) $(CFLAGS) -o $@ $^

