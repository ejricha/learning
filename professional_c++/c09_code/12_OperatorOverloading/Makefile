# Global variables
STD        := -lstdc++ -std=c++17 -pthread
CC         := gcc $(STD)
CXX        := g++ $(STD)
WARN       := -Wall -Wextra -Wfatal-errors
CFLAGS     := -fPIC $(WARN) -O2 -g
RM         := rm -f

.PHONY: all
all: AddFirstAttempt/AddFirstAttempt.bin AddSecondAttempt/AddSecondAttempt.bin GlobalOperators/GlobalOperators.bin

.PHONY: clean
clean:
	$(RM)  AddFirstAttempt/AddFirstAttempt.bin AddSecondAttempt/AddSecondAttempt.bin GlobalOperators/GlobalOperators.bin

# Actually build the binaries

AddFirstAttempt/AddFirstAttempt.bin : AddFirstAttempt/SpreadsheetCell.cpp AddFirstAttempt/SpreadsheetCellTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

AddSecondAttempt/AddSecondAttempt.bin : AddSecondAttempt/SpreadsheetCell.cpp AddSecondAttempt/SpreadsheetCellTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

GlobalOperators/GlobalOperators.bin : GlobalOperators/SpreadsheetCell.cpp GlobalOperators/SpreadsheetCellTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

