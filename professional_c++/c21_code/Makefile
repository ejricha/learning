# Global variables
STD        := -lstdc++ -std=c++17 -pthread
CC         := gcc $(STD)
CXX        := g++ $(STD)
WARN       := -Wall -Wextra -Wfatal-errors
CFLAGS     := -fPIC $(WARN) -O2 -g
RM         := rm -f

.PHONY: all
all: 01_StreamIterators/01_StreamIterators.bin 02_IteratorAdaptors/02_IteratorAdaptors.bin 03_WritingAlgorithms/03_WritingAlgorithms.bin 04_BasicHashmap/04_BasicHashmap.bin 05_FinalHashmap/05_FinalHashmap.bin

.PHONY: clean
clean:
	$(RM)  01_StreamIterators/01_StreamIterators.bin 02_IteratorAdaptors/02_IteratorAdaptors.bin 03_WritingAlgorithms/03_WritingAlgorithms.bin 04_BasicHashmap/04_BasicHashmap.bin 05_FinalHashmap/05_FinalHashmap.bin

# Actually build the binaries

01_StreamIterators/01_StreamIterators.bin : 01_StreamIterators/01_OutputStreamIterators.cpp 01_StreamIterators/02_InputStreamIterators.cpp
	$(CXX) $(CFLAGS) -o $@ $^

02_IteratorAdaptors/02_IteratorAdaptors.bin : 02_IteratorAdaptors/01_ReverseIterators.cpp 02_IteratorAdaptors/02_BackInsertIterator.cpp 02_IteratorAdaptors/03_InsertIterator.cpp 02_IteratorAdaptors/04_MoveIterators.cpp
	$(CXX) $(CFLAGS) -o $@ $^

03_WritingAlgorithms/03_WritingAlgorithms.bin : 03_WritingAlgorithms/01_FindAll.cpp 03_WritingAlgorithms/02_IteratorTraitsTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

04_BasicHashmap/04_BasicHashmap.bin : 04_BasicHashmap/test_hash_map.cpp
	$(CXX) $(CFLAGS) -o $@ $^

05_FinalHashmap/05_FinalHashmap.bin : 05_FinalHashmap/test_hash_map.cpp
	$(CXX) $(CFLAGS) -o $@ $^

