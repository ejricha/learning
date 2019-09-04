# Global variables
STD        := -lstdc++ -std=c++17 -pthread
CC         := gcc $(STD)
CXX        := g++ $(STD)
WARN       := -Wall -Wextra -Wfatal-errors
CFLAGS     := -fPIC $(WARN) -O2 -g
RM         := rm -f

.PHONY: all
all: 01_RelOps/01_RelOps.bin 02_ArithmeticOperators/02_ArithmeticOperators.bin 03_StreamOperators/03_StreamOperators.bin 04_SubscriptOperator/04_SubscriptOperator.bin 05_AssociativeArray/05_AssociativeArray.bin 06_Functors/06_Functors.bin 07_DereferenceOps/07_DereferenceOps.bin 08_ConversionsSpreadsheetCell/08_ConversionsSpreadsheetCell.bin 09_ExplicitConversionsSpreadsheetCell/09_ExplicitConversionsSpreadsheetCell.bin 10_ConversionsPointer/10_ConversionsPointer.bin 11_ConversionsPointerBool/11_ConversionsPointerBool.bin 12_Memory/12_Memory.bin 13_ExplicitDelete/13_ExplicitDelete.bin

.PHONY: clean
clean:
	$(RM)  01_RelOps/01_RelOps.bin 02_ArithmeticOperators/02_ArithmeticOperators.bin 03_StreamOperators/03_StreamOperators.bin 04_SubscriptOperator/04_SubscriptOperator.bin 05_AssociativeArray/05_AssociativeArray.bin 06_Functors/06_Functors.bin 07_DereferenceOps/07_DereferenceOps.bin 08_ConversionsSpreadsheetCell/08_ConversionsSpreadsheetCell.bin 09_ExplicitConversionsSpreadsheetCell/09_ExplicitConversionsSpreadsheetCell.bin 10_ConversionsPointer/10_ConversionsPointer.bin 11_ConversionsPointerBool/11_ConversionsPointerBool.bin 12_Memory/12_Memory.bin 13_ExplicitDelete/13_ExplicitDelete.bin

# Actually build the binaries

01_RelOps/01_RelOps.bin : 01_RelOps/SpreadsheetCell.cpp 01_RelOps/SpreadsheetCellTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

02_ArithmeticOperators/02_ArithmeticOperators.bin : 02_ArithmeticOperators/SpreadsheetCell.cpp 02_ArithmeticOperators/SpreadsheetCellTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

03_StreamOperators/03_StreamOperators.bin : 03_StreamOperators/SpreadsheetCell.cpp 03_StreamOperators/SpreadsheetCellTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

04_SubscriptOperator/04_SubscriptOperator.bin : 04_SubscriptOperator/ArrayTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

05_AssociativeArray/05_AssociativeArray.bin : 05_AssociativeArray/AssociativeArrayTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

06_Functors/06_Functors.bin : 06_Functors/Functors.cpp
	$(CXX) $(CFLAGS) -o $@ $^

07_DereferenceOps/07_DereferenceOps.bin : 07_DereferenceOps/PointerTest.cpp 07_DereferenceOps/SpreadsheetCell.cpp
	$(CXX) $(CFLAGS) -o $@ $^

08_ConversionsSpreadsheetCell/08_ConversionsSpreadsheetCell.bin : 08_ConversionsSpreadsheetCell/SpreadsheetCell.cpp 08_ConversionsSpreadsheetCell/SpreadsheetCellTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

09_ExplicitConversionsSpreadsheetCell/09_ExplicitConversionsSpreadsheetCell.bin : 09_ExplicitConversionsSpreadsheetCell/SpreadsheetCell.cpp 09_ExplicitConversionsSpreadsheetCell/SpreadsheetCellTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

10_ConversionsPointer/10_ConversionsPointer.bin : 10_ConversionsPointer/PointerTest.cpp 10_ConversionsPointer/SpreadsheetCell.cpp
	$(CXX) $(CFLAGS) -o $@ $^

11_ConversionsPointerBool/11_ConversionsPointerBool.bin : 11_ConversionsPointerBool/PointerBoolTest.cpp 11_ConversionsPointerBool/SpreadsheetCell.cpp
	$(CXX) $(CFLAGS) -o $@ $^

12_Memory/12_Memory.bin : 12_Memory/MemoryDemo.cpp 12_Memory/MemoryDemoTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

13_ExplicitDelete/13_ExplicitDelete.bin : 13_ExplicitDelete/ExplicitDelete.cpp
	$(CXX) $(CFLAGS) -o $@ $^

