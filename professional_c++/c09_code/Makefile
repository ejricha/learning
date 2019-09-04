# Global variables
STD        := -lstdc++ -std=c++17 -pthread
CC         := gcc $(STD)
CXX        := g++ $(STD)
WARN       := -Wall -Wextra -Wfatal-errors
CFLAGS     := -fPIC $(WARN) -O2 -g
RM         := rm -f

.PHONY: all
all: 01_Spreadsheet/01_Spreadsheet.bin 02_SpreadsheetNoCopyAssign/02_SpreadsheetNoCopyAssign.bin 03_RvalueReferences/03_RvalueReferences.bin 04_SpreadsheetMoveSemantics/04_SpreadsheetMoveSemantics.bin 05_SpreadsheetMoveSemanticsWithSwap/05_SpreadsheetMoveSemanticsWithSwap.bin 06_SpreadsheetCellMethods/06_SpreadsheetCellMethods.bin 07_SpreadsheetConstGetCellAt/07_SpreadsheetConstGetCellAt.bin 08_SpreadsheetDefaultArguments/08_SpreadsheetDefaultArguments.bin 09_SpreadsheetDataMembers/09_SpreadsheetDataMembers.bin 10_NestedClasses/10_NestedClasses.bin 11_SpreadsheetCellColors/11_SpreadsheetCellColors.bin 12_OperatorOverloading/12_OperatorOverloading.bin 13_SeparateImpl/13_SeparateImpl.bin

.PHONY: clean
clean:
	$(RM)  01_Spreadsheet/01_Spreadsheet.bin 02_SpreadsheetNoCopyAssign/02_SpreadsheetNoCopyAssign.bin 03_RvalueReferences/03_RvalueReferences.bin 04_SpreadsheetMoveSemantics/04_SpreadsheetMoveSemantics.bin 05_SpreadsheetMoveSemanticsWithSwap/05_SpreadsheetMoveSemanticsWithSwap.bin 06_SpreadsheetCellMethods/06_SpreadsheetCellMethods.bin 07_SpreadsheetConstGetCellAt/07_SpreadsheetConstGetCellAt.bin 08_SpreadsheetDefaultArguments/08_SpreadsheetDefaultArguments.bin 09_SpreadsheetDataMembers/09_SpreadsheetDataMembers.bin 10_NestedClasses/10_NestedClasses.bin 11_SpreadsheetCellColors/11_SpreadsheetCellColors.bin 12_OperatorOverloading/12_OperatorOverloading.bin 13_SeparateImpl/13_SeparateImpl.bin

# Actually build the binaries

01_Spreadsheet/01_Spreadsheet.bin : 01_Spreadsheet/SpreadsheetCell.cpp 01_Spreadsheet/Spreadsheet.cpp 01_Spreadsheet/SpreadsheetTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

02_SpreadsheetNoCopyAssign/02_SpreadsheetNoCopyAssign.bin : 02_SpreadsheetNoCopyAssign/SpreadsheetCell.cpp 02_SpreadsheetNoCopyAssign/Spreadsheet.cpp 02_SpreadsheetNoCopyAssign/SpreadsheetTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

03_RvalueReferences/03_RvalueReferences.bin : 03_RvalueReferences/RvalueReferences.cpp
	$(CXX) $(CFLAGS) -o $@ $^

04_SpreadsheetMoveSemantics/04_SpreadsheetMoveSemantics.bin : 04_SpreadsheetMoveSemantics/SpreadsheetCell.cpp 04_SpreadsheetMoveSemantics/Spreadsheet.cpp 04_SpreadsheetMoveSemantics/SpreadsheetTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

05_SpreadsheetMoveSemanticsWithSwap/05_SpreadsheetMoveSemanticsWithSwap.bin : 05_SpreadsheetMoveSemanticsWithSwap/SpreadsheetCell.cpp 05_SpreadsheetMoveSemanticsWithSwap/Spreadsheet.cpp 05_SpreadsheetMoveSemanticsWithSwap/SpreadsheetTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

06_SpreadsheetCellMethods/06_SpreadsheetCellMethods.bin : 06_SpreadsheetCellMethods/SpreadsheetCell.cpp 06_SpreadsheetCellMethods/SpreadsheetCellTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

07_SpreadsheetConstGetCellAt/07_SpreadsheetConstGetCellAt.bin : 07_SpreadsheetConstGetCellAt/SpreadsheetCell.cpp 07_SpreadsheetConstGetCellAt/Spreadsheet.cpp 07_SpreadsheetConstGetCellAt/SpreadsheetTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

08_SpreadsheetDefaultArguments/08_SpreadsheetDefaultArguments.bin : 08_SpreadsheetDefaultArguments/SpreadsheetCell.cpp 08_SpreadsheetDefaultArguments/Spreadsheet.cpp 08_SpreadsheetDefaultArguments/SpreadsheetTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

09_SpreadsheetDataMembers/09_SpreadsheetDataMembers.bin : 09_SpreadsheetDataMembers/SpreadsheetCell.cpp 09_SpreadsheetDataMembers/Spreadsheet.cpp 09_SpreadsheetDataMembers/SpreadsheetTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

10_NestedClasses/10_NestedClasses.bin : 10_NestedClasses/Spreadsheet.cpp 10_NestedClasses/SpreadsheetTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

11_SpreadsheetCellColors/11_SpreadsheetCellColors.bin : 11_SpreadsheetCellColors/SpreadsheetCell.cpp 11_SpreadsheetCellColors/SpreadsheetCellTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

12_OperatorOverloading/12_OperatorOverloading.bin : 
	$(CXX) $(CFLAGS) -o $@ $^

13_SeparateImpl/13_SeparateImpl.bin : 13_SeparateImpl/SpreadsheetCell.cpp 13_SeparateImpl/Spreadsheet.cpp 13_SeparateImpl/SpreadsheetImpl.cpp 13_SeparateImpl/SpreadsheetTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

