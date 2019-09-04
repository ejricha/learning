# Global variables
STD        := -lstdc++ -std=c++17 -pthread
CC         := gcc $(STD)
CXX        := g++ $(STD)
WARN       := -Wall -Wextra -Wfatal-errors
CFLAGS     := -fPIC $(WARN) -O2 -g
RM         := rm -f

.PHONY: all
all: 01_Person/01_Person.bin 02_ObjectPool/02_ObjectPool.bin 03_NameDB/03_NameDB.bin

.PHONY: clean
clean:
	$(RM)  01_Person/01_Person.bin 02_ObjectPool/02_ObjectPool.bin 03_NameDB/03_NameDB.bin

# Actually build the binaries

01_Person/01_Person.bin : 01_Person/Person.cpp
	$(CXX) $(CFLAGS) -o $@ $^

02_ObjectPool/02_ObjectPool.bin : 02_ObjectPool/ObjectPoolTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

03_NameDB/03_NameDB.bin : 
	$(CXX) $(CFLAGS) -o $@ $^

