# Global variables
STD        := -lstdc++ -std=c++17 -pthread
CC         := gcc $(STD)
CXX        := g++ $(STD)
WARN       := -Wall -Wextra -Wfatal-errors
CFLAGS     := -fPIC $(WARN) -O2 -g
RM         := rm -f

.PHONY: all
all: 01_GameBoard/01_GameBoard.bin 02_Grid/02_Grid.bin 03_GridNonType/03_GridNonType.bin 04_GridNonTypeDefault/04_GridNonTypeDefault.bin 05_MethodTemplates/05_MethodTemplates.bin 06_MethodTemplatesNonType/06_MethodTemplatesNonType.bin 07_GridSpecialization/07_GridSpecialization.bin 08_GridInheritance/08_GridInheritance.bin 09_FunctionTemplate/09_FunctionTemplate.bin 10_FriendFunctionTemplates/10_FriendFunctionTemplates.bin 11_FunctionReturnType/11_FunctionReturnType.bin 12_decltype_auto/12_decltype_auto.bin

.PHONY: clean
clean:
	$(RM)  01_GameBoard/01_GameBoard.bin 02_Grid/02_Grid.bin 03_GridNonType/03_GridNonType.bin 04_GridNonTypeDefault/04_GridNonTypeDefault.bin 05_MethodTemplates/05_MethodTemplates.bin 06_MethodTemplatesNonType/06_MethodTemplatesNonType.bin 07_GridSpecialization/07_GridSpecialization.bin 08_GridInheritance/08_GridInheritance.bin 09_FunctionTemplate/09_FunctionTemplate.bin 10_FriendFunctionTemplates/10_FriendFunctionTemplates.bin 11_FunctionReturnType/11_FunctionReturnType.bin 12_decltype_auto/12_decltype_auto.bin

# Actually build the binaries

01_GameBoard/01_GameBoard.bin : 01_GameBoard/GameBoard.cpp 01_GameBoard/GameBoardTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

02_Grid/02_Grid.bin : 
	$(CXX) $(CFLAGS) -o $@ $^

03_GridNonType/03_GridNonType.bin : 03_GridNonType/GridTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

04_GridNonTypeDefault/04_GridNonTypeDefault.bin : 04_GridNonTypeDefault/GridTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

05_MethodTemplates/05_MethodTemplates.bin : 05_MethodTemplates/GridTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

06_MethodTemplatesNonType/06_MethodTemplatesNonType.bin : 06_MethodTemplatesNonType/GridTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

07_GridSpecialization/07_GridSpecialization.bin : 07_GridSpecialization/GridTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

08_GridInheritance/08_GridInheritance.bin : 08_GridInheritance/GameBoardTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

09_FunctionTemplate/09_FunctionTemplate.bin : 09_FunctionTemplate/01_FindTemplate.cpp 09_FunctionTemplate/02_FindTemplateSpecialization.cpp 09_FunctionTemplate/03_FindTemplateOverload.cpp 09_FunctionTemplate/04_FindTemplateSpecialOverload.cpp 09_FunctionTemplate/SpreadsheetCell.cpp
	$(CXX) $(CFLAGS) -o $@ $^

10_FriendFunctionTemplates/10_FriendFunctionTemplates.bin : 10_FriendFunctionTemplates/GridTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

11_FunctionReturnType/11_FunctionReturnType.bin : 11_FunctionReturnType/FunctionReturnType.cpp
	$(CXX) $(CFLAGS) -o $@ $^

12_decltype_auto/12_decltype_auto.bin : 12_decltype_auto/decltype_auto.cpp
	$(CXX) $(CFLAGS) -o $@ $^

