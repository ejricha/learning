# Auto-build everything in the local directory
INC_DIR := .
SRC_DIR := .
OBJ_DIR := .
BIN_DIR := .
SRC_FILES := $(wildcard $(SRC_DIR)/*.cpp)
OBJ_FILES := $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SRC_FILES))
BIN_FILES := $(patsubst $(SRC_DIR)/%.cpp,$(BIN_DIR)/%.bin,$(SRC_FILES))

# Global variables
STD        := -std=c++17 -pthread
CC         := gcc $(STD)
CXX        := g++ $(STD)
WARN       := -Wall -Wextra -Wfatal-errors
CFLAGS     := -fPIC $(WARN) -O2 -g -I$(INC_DIR)
RM         := rm -f

.PHONY: all
all: $(BIN_FILES)

.PHONY: clean
clean:
	$(RM) $(BIN_FILES)

# Actually build the binary
%.bin: %.cpp
	$(CXX) $(CFLAGS) -o $@ $^
