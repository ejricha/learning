# Global variables
STD        := -lstdc++ -std=c++17 -pthread
CC         := gcc $(STD)
CXX        := g++ $(STD)
WARN       := -Wall -Wextra -Wfatal-errors
CFLAGS     := -fPIC $(WARN) -O2 -g
RM         := rm -f

.PHONY: all
all: 01_numeric_limits/01_numeric_limits.bin

.PHONY: clean
clean:
	$(RM)  01_numeric_limits/01_numeric_limits.bin

# Actually build the binaries

01_numeric_limits/01_numeric_limits.bin : 01_numeric_limits/numeric_limits.cpp
	$(CXX) $(CFLAGS) -o $@ $^

