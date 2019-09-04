# Global variables
STD        := -lstdc++ -std=c++17 -pthread
CC         := gcc $(STD)
CXX        := g++ $(STD)
WARN       := -Wall -Wextra -Wfatal-errors
CFLAGS     := -fPIC $(WARN) -O2 -g
RM         := rm -f

.PHONY: all
all: 01_ArrayDelete/01_ArrayDelete.bin 02_tictactoe/02_tictactoe.bin 03_CharacterBoard/03_CharacterBoard.bin 04_ArraysAndPointers/04_ArraysAndPointers.bin 05_unique_ptr/05_01_unique_ptr_move.bin 05_unique_ptr/05_02_unique_ptr_malloc_int.bin 06_shared_ptr/06_01_shared_ptr_malloc_int.bin 06_shared_ptr/06_02_shared_ptr_file.bin 06_shared_ptr/06_03_shared_ptr_double_delete.bin 06_shared_ptr/06_04_shared_ptr_aliasing.bin 07_weak_ptr/07_weak_ptr.bin 08_SmartPointersAndMoveSemantics/08_SmartPointersAndMoveSemantics.bin 09_enable_shared_from_this/09_enable_shared_from_this.bin 10_Leaky/10_Leaky.bin

.PHONY: clean
clean:
	$(RM)  01_ArrayDelete/01_ArrayDelete.bin 02_tictactoe/02_tictactoe.bin 03_CharacterBoard/03_CharacterBoard.bin 04_ArraysAndPointers/04_ArraysAndPointers.bin 05_unique_ptr/05_01_unique_ptr_move.bin 05_unique_ptr/05_02_unique_ptr_malloc_int.bin 06_shared_ptr/06_01_shared_ptr_malloc_int.bin 06_shared_ptr/06_02_shared_ptr_file.bin 06_shared_ptr/06_03_shared_ptr_double_delete.bin 06_shared_ptr/06_04_shared_ptr_aliasing.bin 07_weak_ptr/07_weak_ptr.bin 08_SmartPointersAndMoveSemantics/08_SmartPointersAndMoveSemantics.bin 09_enable_shared_from_this/09_enable_shared_from_this.bin 10_Leaky/10_Leaky.bin

# Actually build the binaries

01_ArrayDelete/01_ArrayDelete.bin : 01_ArrayDelete/ArrayDelete.cpp
	$(CXX) $(CFLAGS) -o $@ $^

02_tictactoe/02_tictactoe.bin : 02_tictactoe/tictactoe.cpp
	$(CXX) $(CFLAGS) -o $@ $^

03_CharacterBoard/03_CharacterBoard.bin : 03_CharacterBoard/CharacterBoard.cpp
	$(CXX) $(CFLAGS) -o $@ $^

04_ArraysAndPointers/04_ArraysAndPointers.bin : 04_ArraysAndPointers/ArraysAndPointers.cpp
	$(CXX) $(CFLAGS) -o $@ $^

05_unique_ptr/05_01_unique_ptr_move.bin : 05_unique_ptr/01_unique_ptr_move.cpp
	$(CXX) $(CFLAGS) -o $@ $^

05_unique_ptr/05_02_unique_ptr_malloc_int.bin : 05_unique_ptr/02_unique_ptr_malloc_int.cpp
	$(CXX) $(CFLAGS) -o $@ $^

06_shared_ptr/06_01_shared_ptr_malloc_int.bin : 06_shared_ptr/01_shared_ptr_malloc_int.cpp
	$(CXX) $(CFLAGS) -o $@ $^

06_shared_ptr/06_02_shared_ptr_file.bin : 06_shared_ptr/02_shared_ptr_file.cpp
	$(CXX) $(CFLAGS) -o $@ $^

06_shared_ptr/06_03_shared_ptr_double_delete.bin : 06_shared_ptr/03_shared_ptr_double_delete.cpp
	$(CXX) $(CFLAGS) -o $@ $^

06_shared_ptr/06_04_shared_ptr_aliasing.bin : 06_shared_ptr/04_shared_ptr_aliasing.cpp
	$(CXX) $(CFLAGS) -o $@ $^

07_weak_ptr/07_weak_ptr.bin : 07_weak_ptr/weak_ptr.cpp
	$(CXX) $(CFLAGS) -o $@ $^

08_SmartPointersAndMoveSemantics/08_SmartPointersAndMoveSemantics.bin : 08_SmartPointersAndMoveSemantics/unique_ptr_return_from_function.cpp
	$(CXX) $(CFLAGS) -o $@ $^

09_enable_shared_from_this/09_enable_shared_from_this.bin : 09_enable_shared_from_this/enable_shared_from_this.cpp
	$(CXX) $(CFLAGS) -o $@ $^

10_Leaky/10_Leaky.bin : 10_Leaky/Leaky.cpp
	$(CXX) $(CFLAGS) -o $@ $^

