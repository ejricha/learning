# Global variables
STD        := -lstdc++ -std=c++17 -pthread
CC         := gcc $(STD)
CXX        := g++ $(STD)
WARN       := -Wall -Wextra -Wfatal-errors
CFLAGS     := -fPIC $(WARN) -O2 -g
RM         := rm -f

.PHONY: all
all: 01_AlgorithmOverview/01_AlgorithmOverview.bin 02_Function/02_Function.bin 03_Lambdas/03_Lambdas.bin 04_FunctionObjects/04_FunctionObjects.bin 05_NonModifyingAlgorithms/05_NonModifyingAlgorithms.bin 06_ModifyingAlgorithms/06_ModifyingAlgorithms.bin 07_OperationalAlgorithms/07_OperationalAlgorithms.bin 08_SwapAndExchangeAlgorithms/08_SwapAndExchangeAlgorithms.bin 09_PartitionAlgorithms/09_PartitionAlgorithms.bin 10_SortingAlgorithms/10_SortingAlgorithms.bin 11_BinarySearchAlgorithms/11_BinarySearchAlgorithms.bin 12_SetAlgorithms/12_SetAlgorithms.bin 13_MinMaxAlgorithms/13_MinMaxAlgorithms.bin 14_ParallelAlgorithms/14_ParallelAlgorithms.bin 15_NumericalAlgorithms/15_NumericalAlgorithms.bin 16_AuditVoterRolls/16_AuditVoterRolls.bin

.PHONY: clean
clean:
	$(RM)  01_AlgorithmOverview/01_AlgorithmOverview.bin 02_Function/02_Function.bin 03_Lambdas/03_Lambdas.bin 04_FunctionObjects/04_FunctionObjects.bin 05_NonModifyingAlgorithms/05_NonModifyingAlgorithms.bin 06_ModifyingAlgorithms/06_ModifyingAlgorithms.bin 07_OperationalAlgorithms/07_OperationalAlgorithms.bin 08_SwapAndExchangeAlgorithms/08_SwapAndExchangeAlgorithms.bin 09_PartitionAlgorithms/09_PartitionAlgorithms.bin 10_SortingAlgorithms/10_SortingAlgorithms.bin 11_BinarySearchAlgorithms/11_BinarySearchAlgorithms.bin 12_SetAlgorithms/12_SetAlgorithms.bin 13_MinMaxAlgorithms/13_MinMaxAlgorithms.bin 14_ParallelAlgorithms/14_ParallelAlgorithms.bin 15_NumericalAlgorithms/15_NumericalAlgorithms.bin 16_AuditVoterRolls/16_AuditVoterRolls.bin

# Actually build the binaries

01_AlgorithmOverview/01_AlgorithmOverview.bin : 01_AlgorithmOverview/01_Find.cpp 01_AlgorithmOverview/02_FindIf.cpp 01_AlgorithmOverview/03_FindIfLambda.cpp 01_AlgorithmOverview/04_Accumulate.cpp
	$(CXX) $(CFLAGS) -o $@ $^

02_Function/02_Function.bin : 02_Function/01_function.cpp 02_Function/02_function_find_if.cpp 02_Function/03_function_callback.cpp
	$(CXX) $(CFLAGS) -o $@ $^

03_Lambdas/03_Lambdas.bin : 03_Lambdas/01_LambdaBasic.cpp 03_Lambdas/02_FindIfGenericLambda.cpp 03_Lambdas/03_GenericCapture.cpp 03_Lambdas/04_multiplyBy2Lambda.cpp 03_Lambdas/05_count_if.cpp 03_Lambdas/06_count_if_ref.cpp 03_Lambdas/07_generate.cpp
	$(CXX) $(CFLAGS) -o $@ $^

04_FunctionObjects/04_FunctionObjects.bin : 04_FunctionObjects/01_Arithmetic.cpp 04_FunctionObjects/02_QueueLess.cpp 04_FunctionObjects/03_QueueGreater.cpp 04_FunctionObjects/04_LogicalFunctors.cpp 04_FunctionObjects/05_bind.cpp 04_FunctionObjects/06_Ref.cpp 04_FunctionObjects/07_BindWithOverloads.cpp 04_FunctionObjects/08_BindWithFindIf.cpp 04_FunctionObjects/09_Negators.cpp 04_FunctionObjects/10_EmptyString.cpp 04_FunctionObjects/11_EmptyStringPtr.cpp 04_FunctionObjects/12_Invokers.cpp 04_FunctionObjects/13_WritingFunctionObject.cpp 04_FunctionObjects/14_WritingFunctionObjectLocal.cpp
	$(CXX) $(CFLAGS) -o $@ $^

05_NonModifyingAlgorithms/05_NonModifyingAlgorithms.bin : 05_NonModifyingAlgorithms/01_SearchAlgorithms.cpp 05_NonModifyingAlgorithms/02_BoyerMoore.cpp 05_NonModifyingAlgorithms/03_ComparisonAlgorithms.cpp 05_NonModifyingAlgorithms/04_CountingAlgorithms.cpp
	$(CXX) $(CFLAGS) -o $@ $^

06_ModifyingAlgorithms/06_ModifyingAlgorithms.bin : 06_ModifyingAlgorithms/01_TransformLambda.cpp 06_ModifyingAlgorithms/02_TransformLambdaBinary.cpp 06_ModifyingAlgorithms/03_copy.cpp 06_ModifyingAlgorithms/04_copy_backward.cpp 06_ModifyingAlgorithms/05_copy_if.cpp 06_ModifyingAlgorithms/06_copy_n.cpp 06_ModifyingAlgorithms/07_move.cpp 06_ModifyingAlgorithms/08_replace.cpp 06_ModifyingAlgorithms/09_remove.cpp 06_ModifyingAlgorithms/10_sample.cpp
	$(CXX) $(CFLAGS) -o $@ $^

07_OperationalAlgorithms/07_OperationalAlgorithms.bin : 07_OperationalAlgorithms/01_ForEachBasicLambda.cpp 07_OperationalAlgorithms/02_SumAndProductLambda.cpp 07_OperationalAlgorithms/03_SumAndProduct.cpp 07_OperationalAlgorithms/04_ForEachN.cpp
	$(CXX) $(CFLAGS) -o $@ $^

08_SwapAndExchangeAlgorithms/08_SwapAndExchangeAlgorithms.bin : 08_SwapAndExchangeAlgorithms/01_swap.cpp 08_SwapAndExchangeAlgorithms/02_exchange.cpp
	$(CXX) $(CFLAGS) -o $@ $^

09_PartitionAlgorithms/09_PartitionAlgorithms.bin : 09_PartitionAlgorithms/01_partition_copy.cpp 09_PartitionAlgorithms/02_partition.cpp
	$(CXX) $(CFLAGS) -o $@ $^

10_SortingAlgorithms/10_SortingAlgorithms.bin : 10_SortingAlgorithms/Sorting.cpp
	$(CXX) $(CFLAGS) -o $@ $^

11_BinarySearchAlgorithms/11_BinarySearchAlgorithms.bin : 11_BinarySearchAlgorithms/01_lower_bound.cpp 11_BinarySearchAlgorithms/02_binary_search.cpp
	$(CXX) $(CFLAGS) -o $@ $^

12_SetAlgorithms/12_SetAlgorithms.bin : 12_SetAlgorithms/01_Sets.cpp 12_SetAlgorithms/02_merge.cpp
	$(CXX) $(CFLAGS) -o $@ $^

13_MinMaxAlgorithms/13_MinMaxAlgorithms.bin : 13_MinMaxAlgorithms/01_min_max.cpp 13_MinMaxAlgorithms/02_clamp.cpp
	$(CXX) $(CFLAGS) -o $@ $^

14_ParallelAlgorithms/14_ParallelAlgorithms.bin : 14_ParallelAlgorithms/ParallelSort.cpp
	$(CXX) $(CFLAGS) -o $@ $^

15_NumericalAlgorithms/15_NumericalAlgorithms.bin : 15_NumericalAlgorithms/01_inner_product.cpp 15_NumericalAlgorithms/02_iota.cpp 15_NumericalAlgorithms/03_reduce.cpp
	$(CXX) $(CFLAGS) -o $@ $^

16_AuditVoterRolls/16_AuditVoterRolls.bin : 16_AuditVoterRolls/AuditVoterRolls.cpp
	$(CXX) $(CFLAGS) -o $@ $^

