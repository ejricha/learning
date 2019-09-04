# Global variables
STD        := -lstdc++ -std=c++17 -pthread
CC         := gcc $(STD)
CXX        := g++ $(STD)
WARN       := -Wall -Wextra -Wfatal-errors
CFLAGS     := -fPIC $(WARN) -O2 -g
RM         := rm -f

.PHONY: all
all: FinalVersion/FinalVersion.bin Version1/Version1.bin

.PHONY: clean
clean:
	$(RM)  FinalVersion/FinalVersion.bin Version1/Version1.bin

# Actually build the binaries

FinalVersion/FinalVersion.bin : FinalVersion/Logger.cpp FinalVersion/main.cpp
	$(CXX) $(CFLAGS) -o $@ $^

Version1/Version1.bin : Version1/Logger.cpp Version1/main.cpp
	$(CXX) $(CFLAGS) -o $@ $^

