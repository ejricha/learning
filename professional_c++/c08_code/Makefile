# Global variables
STD        := -lstdc++ -std=c++17 -pthread
CC         := gcc $(STD)
CXX        := g++ $(STD)
WARN       := -Wall -Wextra -Wfatal-errors
CFLAGS     := -fPIC $(WARN) -O2 -g
RM         := rm -f

.PHONY: all
all: 01_SpreadsheetCellNumOnly/01_SpreadsheetCellNumOnly.bin 02_SpreadsheetCellNumText/02_SpreadsheetCellNumText.bin 03_SpreadsheetCellThisAmbiguous/03_SpreadsheetCellThisAmbiguous.bin 04_SpreadsheetCellThisUnambiguous/04_SpreadsheetCellThisUnambiguous.bin 05_SpreadsheetCellNumTextHeap/05_SpreadsheetCellNumTextHeap.bin 06_SpreadsheetCellNumTextHeapAlternate/06_SpreadsheetCellNumTextHeapAlternate.bin 07_SpreadsheetCellNumTextSmartPointer/07_SpreadsheetCellNumTextSmartPointer.bin 08_SpreadsheetCellCtors/08_SpreadsheetCellCtors.bin 09_SpreadsheetCellArrayNoDefaultCtor/09_SpreadsheetCellArrayNoDefaultCtor.bin 10_SpreadsheetCellDefaultCtor/10_SpreadsheetCellDefaultCtor.bin 11_SpreadsheetCellExplicitlyDefaulted/11_SpreadsheetCellExplicitlyDefaulted.bin 12_SpreadsheetCellCtorInitializer/12_SpreadsheetCellCtorInitializer.bin 13_CtorInitializerOrder/13_CtorInitializerOrder.bin 14_SpreadsheetCellCopyCtor/14_SpreadsheetCellCopyCtor.bin 15_InitializerListCtor/15_InitializerListCtor.bin 16_Destructors/16_Destructors.bin 17_SpreadsheetCellAssign/17_SpreadsheetCellAssign.bin

.PHONY: clean
clean:
	$(RM)  01_SpreadsheetCellNumOnly/01_SpreadsheetCellNumOnly.bin 02_SpreadsheetCellNumText/02_SpreadsheetCellNumText.bin 03_SpreadsheetCellThisAmbiguous/03_SpreadsheetCellThisAmbiguous.bin 04_SpreadsheetCellThisUnambiguous/04_SpreadsheetCellThisUnambiguous.bin 05_SpreadsheetCellNumTextHeap/05_SpreadsheetCellNumTextHeap.bin 06_SpreadsheetCellNumTextHeapAlternate/06_SpreadsheetCellNumTextHeapAlternate.bin 07_SpreadsheetCellNumTextSmartPointer/07_SpreadsheetCellNumTextSmartPointer.bin 08_SpreadsheetCellCtors/08_SpreadsheetCellCtors.bin 09_SpreadsheetCellArrayNoDefaultCtor/09_SpreadsheetCellArrayNoDefaultCtor.bin 10_SpreadsheetCellDefaultCtor/10_SpreadsheetCellDefaultCtor.bin 11_SpreadsheetCellExplicitlyDefaulted/11_SpreadsheetCellExplicitlyDefaulted.bin 12_SpreadsheetCellCtorInitializer/12_SpreadsheetCellCtorInitializer.bin 13_CtorInitializerOrder/13_CtorInitializerOrder.bin 14_SpreadsheetCellCopyCtor/14_SpreadsheetCellCopyCtor.bin 15_InitializerListCtor/15_InitializerListCtor.bin 16_Destructors/16_Destructors.bin 17_SpreadsheetCellAssign/17_SpreadsheetCellAssign.bin

# Actually build the binaries

01_SpreadsheetCellNumOnly/01_SpreadsheetCellNumOnly.bin : 01_SpreadsheetCellNumOnly/SpreadsheetCell.cpp 01_SpreadsheetCellNumOnly/SpreadsheetCellTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

02_SpreadsheetCellNumText/02_SpreadsheetCellNumText.bin : 02_SpreadsheetCellNumText/SpreadsheetCell.cpp 02_SpreadsheetCellNumText/SpreadsheetCellTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

03_SpreadsheetCellThisAmbiguous/03_SpreadsheetCellThisAmbiguous.bin : 03_SpreadsheetCellThisAmbiguous/SpreadsheetCell.cpp 03_SpreadsheetCellThisAmbiguous/SpreadsheetCellTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

04_SpreadsheetCellThisUnambiguous/04_SpreadsheetCellThisUnambiguous.bin : 04_SpreadsheetCellThisUnambiguous/SpreadsheetCell.cpp 04_SpreadsheetCellThisUnambiguous/SpreadsheetCellTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

05_SpreadsheetCellNumTextHeap/05_SpreadsheetCellNumTextHeap.bin : 05_SpreadsheetCellNumTextHeap/SpreadsheetCell.cpp 05_SpreadsheetCellNumTextHeap/SpreadsheetCellHeap.cpp
	$(CXX) $(CFLAGS) -o $@ $^

06_SpreadsheetCellNumTextHeapAlternate/06_SpreadsheetCellNumTextHeapAlternate.bin : 06_SpreadsheetCellNumTextHeapAlternate/SpreadsheetCell.cpp 06_SpreadsheetCellNumTextHeapAlternate/SpreadsheetCellHeapAlternate.cpp
	$(CXX) $(CFLAGS) -o $@ $^

07_SpreadsheetCellNumTextSmartPointer/07_SpreadsheetCellNumTextSmartPointer.bin : 07_SpreadsheetCellNumTextSmartPointer/SpreadsheetCell.cpp 07_SpreadsheetCellNumTextSmartPointer/SpreadsheetCellHeapSmartPointer.cpp
	$(CXX) $(CFLAGS) -o $@ $^

08_SpreadsheetCellCtors/08_SpreadsheetCellCtors.bin : 08_SpreadsheetCellCtors/SpreadsheetCell.cpp 08_SpreadsheetCellCtors/SpreadsheetCellTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

09_SpreadsheetCellArrayNoDefaultCtor/09_SpreadsheetCellArrayNoDefaultCtor.bin : 09_SpreadsheetCellArrayNoDefaultCtor/SpreadsheetCellArrayNoDefault.cpp 09_SpreadsheetCellArrayNoDefaultCtor/SpreadsheetCell.cpp
	$(CXX) $(CFLAGS) -o $@ $^

10_SpreadsheetCellDefaultCtor/10_SpreadsheetCellDefaultCtor.bin : 10_SpreadsheetCellDefaultCtor/SpreadsheetCell.cpp 10_SpreadsheetCellDefaultCtor/SpreadsheetCellTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

11_SpreadsheetCellExplicitlyDefaulted/11_SpreadsheetCellExplicitlyDefaulted.bin : 11_SpreadsheetCellExplicitlyDefaulted/SpreadsheetCell.cpp 11_SpreadsheetCellExplicitlyDefaulted/SpreadsheetCellTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

12_SpreadsheetCellCtorInitializer/12_SpreadsheetCellCtorInitializer.bin : 12_SpreadsheetCellCtorInitializer/SpreadsheetCell.cpp 12_SpreadsheetCellCtorInitializer/SpreadsheetCellTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

13_CtorInitializerOrder/13_CtorInitializerOrder.bin : 13_CtorInitializerOrder/CtorInitializerOrder.cpp
	$(CXX) $(CFLAGS) -o $@ $^

14_SpreadsheetCellCopyCtor/14_SpreadsheetCellCopyCtor.bin : 14_SpreadsheetCellCopyCtor/SpreadsheetCell.cpp 14_SpreadsheetCellCopyCtor/SpreadsheetCellTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

15_InitializerListCtor/15_InitializerListCtor.bin : 15_InitializerListCtor/InitializerListCtor.cpp
	$(CXX) $(CFLAGS) -o $@ $^

16_Destructors/16_Destructors.bin : 16_Destructors/DestructorExamples.cpp 16_Destructors/DestructorHeapExamples.cpp 16_Destructors/SpreadsheetCell.cpp
	$(CXX) $(CFLAGS) -o $@ $^

17_SpreadsheetCellAssign/17_SpreadsheetCellAssign.bin : 17_SpreadsheetCellAssign/SpreadsheetCellAssignCopy.cpp 17_SpreadsheetCellAssign/SpreadsheetCell.cpp 17_SpreadsheetCellAssign/SpreadsheetCellTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

