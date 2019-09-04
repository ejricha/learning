# Global variables
STD        := -lstdc++ -std=c++17 -pthread
CC         := gcc $(STD)
CXX        := g++ $(STD)
WARN       := -Wall -Wextra -Wfatal-errors
CFLAGS     := -fPIC $(WARN) -O2 -g
RM         := rm -f

.PHONY: all
all: ObjectPoolTest/ObjectPoolTest.bin

.PHONY: clean
clean:
	$(RM)  ObjectPoolTest/ObjectPoolTest.bin

# Actually build the binaries

ObjectPoolTest/ObjectPoolTest.bin : ObjectPoolTest/ObjectPoolTest.cpp ObjectPoolTest/Serial.cpp
	$(CXX) $(CFLAGS) -o $@ $^

