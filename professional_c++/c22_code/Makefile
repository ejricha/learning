# Global variables
STD        := -lstdc++ -std=c++17 -pthread
CC         := gcc $(STD)
CXX        := g++ $(STD)
WARN       := -Wall -Wextra -Wfatal-errors
CFLAGS     := -fPIC $(WARN) -O2 -g
RM         := rm -f

.PHONY: all
all: 01_GridTemplateContainer/01_GridTemplateContainer.bin 02_GridTemplateContainerDefault/02_GridTemplateContainerDefault.bin 03_GridTemplateContainerTemplateTemplate/03_GridTemplateContainerTemplateTemplate.bin 04_GridDefaultElementValue/04_GridDefaultElementValue.bin 05_GridDefaultElementValueRef/05_GridDefaultElementValueRef.bin 06_GridPartialString/06_GridPartialString.bin 07_GridPartialPtr/07_GridPartialPtr.bin 08_FunctionTemplatePtr/08_FunctionTemplatePtr.bin 09_OneDGrid/09_OneDGrid.bin 10_NDGrid/10_NDGrid.bin 11_VarArgs/11_VarArgs.bin 12_VariadicMixins/12_VariadicMixins.bin 13_Folding/13_Folding.bin 14_Factorial/14_Factorial.bin 15_LoopUnrolling/15_LoopUnrolling.bin 16_PrintTuple/16_PrintTuple.bin 17_TypeTraits/17_TypeTraits.bin

.PHONY: clean
clean:
	$(RM)  01_GridTemplateContainer/01_GridTemplateContainer.bin 02_GridTemplateContainerDefault/02_GridTemplateContainerDefault.bin 03_GridTemplateContainerTemplateTemplate/03_GridTemplateContainerTemplateTemplate.bin 04_GridDefaultElementValue/04_GridDefaultElementValue.bin 05_GridDefaultElementValueRef/05_GridDefaultElementValueRef.bin 06_GridPartialString/06_GridPartialString.bin 07_GridPartialPtr/07_GridPartialPtr.bin 08_FunctionTemplatePtr/08_FunctionTemplatePtr.bin 09_OneDGrid/09_OneDGrid.bin 10_NDGrid/10_NDGrid.bin 11_VarArgs/11_VarArgs.bin 12_VariadicMixins/12_VariadicMixins.bin 13_Folding/13_Folding.bin 14_Factorial/14_Factorial.bin 15_LoopUnrolling/15_LoopUnrolling.bin 16_PrintTuple/16_PrintTuple.bin 17_TypeTraits/17_TypeTraits.bin

# Actually build the binaries

01_GridTemplateContainer/01_GridTemplateContainer.bin : 01_GridTemplateContainer/GridTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

02_GridTemplateContainerDefault/02_GridTemplateContainerDefault.bin : 02_GridTemplateContainerDefault/GridDefaultTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

03_GridTemplateContainerTemplateTemplate/03_GridTemplateContainerTemplateTemplate.bin : 03_GridTemplateContainerTemplateTemplate/GridTemplateTemplateTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

04_GridDefaultElementValue/04_GridDefaultElementValue.bin : 04_GridDefaultElementValue/GridTest.cpp 04_GridDefaultElementValue/SpreadsheetCell.cpp
	$(CXX) $(CFLAGS) -o $@ $^

05_GridDefaultElementValueRef/05_GridDefaultElementValueRef.bin : 05_GridDefaultElementValueRef/GridTestRefNonType.cpp 05_GridDefaultElementValueRef/SpreadsheetCell.cpp
	$(CXX) $(CFLAGS) -o $@ $^

06_GridPartialString/06_GridPartialString.bin : 06_GridPartialString/GridTest.cpp 06_GridPartialString/GridTestString.cpp
	$(CXX) $(CFLAGS) -o $@ $^

07_GridPartialPtr/07_GridPartialPtr.bin : 07_GridPartialPtr/GridPtrTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

08_FunctionTemplatePtr/08_FunctionTemplatePtr.bin : 08_FunctionTemplatePtr/FindTemplatePtr.cpp 08_FunctionTemplatePtr/SpreadsheetCell.cpp
	$(CXX) $(CFLAGS) -o $@ $^

09_OneDGrid/09_OneDGrid.bin : 09_OneDGrid/OneDGridTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

10_NDGrid/10_NDGrid.bin : 10_NDGrid/NDGridTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

11_VarArgs/11_VarArgs.bin : 11_VarArgs/VarArgsWithVariadicTemplates.cpp
	$(CXX) $(CFLAGS) -o $@ $^

12_VariadicMixins/12_VariadicMixins.bin : 12_VariadicMixins/VariadicMixins.cpp
	$(CXX) $(CFLAGS) -o $@ $^

13_Folding/13_Folding.bin : 13_Folding/01_processValues.cpp 13_Folding/02_printValues.cpp 13_Folding/03_sumValues.cpp
	$(CXX) $(CFLAGS) -o $@ $^

14_Factorial/14_Factorial.bin : 14_Factorial/01_Factorial.cpp 14_Factorial/02_constexpr.cpp
	$(CXX) $(CFLAGS) -o $@ $^

15_LoopUnrolling/15_LoopUnrolling.bin : 15_LoopUnrolling/LoopUnrolling.cpp
	$(CXX) $(CFLAGS) -o $@ $^

16_PrintTuple/16_PrintTuple.bin : 16_PrintTuple/01_PrintTuple.cpp 16_PrintTuple/02_PrintTupleSimplified.cpp 16_PrintTuple/03_constexpr_if.cpp 16_PrintTuple/04_constexpr_if_function.cpp 16_PrintTuple/05_constexpr_if_simplified.cpp 16_PrintTuple/06_index_sequence.cpp
	$(CXX) $(CFLAGS) -o $@ $^

17_TypeTraits/17_TypeTraits.bin : 17_TypeTraits/01_basic.cpp 17_TypeTraits/02_is_integral.cpp 17_TypeTraits/03_is_integral_constexpr_if.cpp 17_TypeTraits/04_is_same.cpp 17_TypeTraits/05_enable_if.cpp 17_TypeTraits/06_doit_enable_if.cpp 17_TypeTraits/07_doit_constexpr_if.cpp 17_TypeTraits/08_doit_constexpr_if_is_invocable.cpp 17_TypeTraits/09_logical_operator_traits.cpp
	$(CXX) $(CFLAGS) -o $@ $^

