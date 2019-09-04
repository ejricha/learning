# Global variables
STD        := -lstdc++ -std=c++17 -pthread
CC         := gcc $(STD)
CXX        := g++ $(STD)
WARN       := -Wall -Wextra -Wfatal-errors
CFLAGS     := -fPIC $(WARN) -O2 -g
RM         := rm -f

.PHONY: all
all: 01_References/01_References.bin 02_Const/02_Const.bin 03_Constexpr/03_Constexpr.bin 04_Static/04_Static.bin 05_AnonymousNamespaces/05_AnonymousNamespaces.bin 06_Extern/06_Extern.bin 07_StaticsInFunctions/07_StaticsInFunctions.bin 08_Order/08_Order.bin 09_TypeAliases/09_TypeAliases.bin 10_FunctionPointers/10_FunctionPointers.bin 11_PtrsToMethodsAndMembers/11_PtrsToMethodsAndMembers.bin 12_Casts/12_Casts.bin 13_Scope/13_Scope.bin 14_noreturn/14_noreturn.bin 15_UserDefinedLiterals/15_UserDefinedLiterals.bin 16_VarArgs/16_VarArgs.bin 17_Macros/17_Macros.bin

.PHONY: clean
clean:
	$(RM)  01_References/01_References.bin 02_Const/02_Const.bin 03_Constexpr/03_Constexpr.bin 04_Static/04_Static.bin 05_AnonymousNamespaces/05_AnonymousNamespaces.bin 06_Extern/06_Extern.bin 07_StaticsInFunctions/07_StaticsInFunctions.bin 08_Order/08_Order.bin 09_TypeAliases/09_TypeAliases.bin 10_FunctionPointers/10_FunctionPointers.bin 11_PtrsToMethodsAndMembers/11_PtrsToMethodsAndMembers.bin 12_Casts/12_Casts.bin 13_Scope/13_Scope.bin 14_noreturn/14_noreturn.bin 15_UserDefinedLiterals/15_UserDefinedLiterals.bin 16_VarArgs/16_VarArgs.bin 17_Macros/17_Macros.bin

# Actually build the binaries

01_References/01_References.bin : 01_References/01_ReferenceVariables.cpp 01_References/02_ReferenceDataMembers.cpp 01_References/03_ReferenceParameters.cpp 01_References/04_OddsEvensPtrs.cpp 01_References/05_OddsEvensRefs.cpp 01_References/06_OddsEvensVector.cpp 01_References/07_OddsEvensPairOfVector.cpp
	$(CXX) $(CFLAGS) -o $@ $^

02_Const/02_Const.bin : 02_Const/Const.cpp
	$(CXX) $(CFLAGS) -o $@ $^

03_Constexpr/03_Constexpr.bin : 03_Constexpr/01_constexpr.cpp 03_Constexpr/02_constexprClasses.cpp
	$(CXX) $(CFLAGS) -o $@ $^

04_Static/04_Static.bin : 04_Static/AnotherFile.cpp 04_Static/FirstFile.cpp
	$(CXX) $(CFLAGS) -o $@ $^

05_AnonymousNamespaces/05_AnonymousNamespaces.bin : 05_AnonymousNamespaces/AnotherFile.cpp 05_AnonymousNamespaces/FirstFile.cpp
	$(CXX) $(CFLAGS) -o $@ $^

06_Extern/06_Extern.bin : 06_Extern/AnotherFile.cpp 06_Extern/FirstFile.cpp
	$(CXX) $(CFLAGS) -o $@ $^

07_StaticsInFunctions/07_StaticsInFunctions.bin : 07_StaticsInFunctions/StaticsInFunctions.cpp
	$(CXX) $(CFLAGS) -o $@ $^

08_Order/08_Order.bin : 08_Order/order.cpp
	$(CXX) $(CFLAGS) -o $@ $^

09_TypeAliases/09_TypeAliases.bin : 09_TypeAliases/TypeAliases.cpp
	$(CXX) $(CFLAGS) -o $@ $^

10_FunctionPointers/10_FunctionPointers.bin : 10_FunctionPointers/FunctionPointers.cpp
	$(CXX) $(CFLAGS) -o $@ $^

11_PtrsToMethodsAndMembers/11_PtrsToMethodsAndMembers.bin : 11_PtrsToMethodsAndMembers/Employee.cpp 11_PtrsToMethodsAndMembers/PtrsToMethodsAndMembers.cpp
	$(CXX) $(CFLAGS) -o $@ $^

12_Casts/12_Casts.bin : 12_Casts/01_ConstCast.cpp 12_Casts/02_StaticCast.cpp 12_Casts/03_ReinterpretCast.cpp 12_Casts/04_DynamicCast.cpp
	$(CXX) $(CFLAGS) -o $@ $^

13_Scope/13_Scope.bin : 13_Scope/Scope.cpp
	$(CXX) $(CFLAGS) -o $@ $^

14_noreturn/14_noreturn.bin : 14_noreturn/noreturn.cpp
	$(CXX) $(CFLAGS) -o $@ $^

15_UserDefinedLiterals/15_UserDefinedLiterals.bin : 15_UserDefinedLiterals/UserDefinedLiterals.cpp
	$(CXX) $(CFLAGS) -o $@ $^

16_VarArgs/16_VarArgs.bin : 16_VarArgs/01_PrintfDemo.cpp 16_VarArgs/02_VarArgs.cpp
	$(CXX) $(CFLAGS) -o $@ $^

17_Macros/17_Macros.bin : 17_Macros/Square.cpp
	$(CXX) $(CFLAGS) -o $@ $^

