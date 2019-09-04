# Global variables
STD        := -lstdc++ -std=c++17 -pthread
CC         := gcc $(STD)
CXX        := g++ $(STD)
WARN       := -Wall -Wextra -Wfatal-errors
CFLAGS     := -fPIC $(WARN) -O2 -g
RM         := rm -f

.PHONY: all
all: FirstAttempt/FirstAttempt.bin SecondAttempt/SecondAttempt.bin ThirdAttempt/ThirdAttempt.bin

.PHONY: clean
clean:
	$(RM)  FirstAttempt/FirstAttempt.bin SecondAttempt/SecondAttempt.bin ThirdAttempt/ThirdAttempt.bin

# Actually build the binaries

FirstAttempt/FirstAttempt.bin : FirstAttempt/NameDB.cpp FirstAttempt/NameDBTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

SecondAttempt/SecondAttempt.bin : SecondAttempt/NameDB.cpp SecondAttempt/NameDBTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

ThirdAttempt/ThirdAttempt.bin : ThirdAttempt/NameDB.cpp ThirdAttempt/NameDBTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

