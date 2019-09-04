# Global variables
STD        := -lstdc++ -std=c++17 -pthread
CC         := gcc $(STD)
CXX        := g++ $(STD)
WARN       := -Wall -Wextra -Wfatal-errors
CFLAGS     := -fPIC $(WARN) -O2 -g
RM         := rm -f

.PHONY: all
all: 01_TestScores/01_TestScores.bin 02_VectorCtors/02_VectorCtors.bin 03_VectorCopyAssign/03_VectorCopyAssign.bin 04_VectorCompare/04_VectorCompare.bin 05_VectorIterators/05_VectorIterators.bin 06_VectorOfReferences/06_VectorOfReferences.bin 07_VectorAddRemove/07_VectorAddRemove.bin 08_CreateVectorOfSize/08_CreateVectorOfSize.bin 09_MovePushBack/09_MovePushBack.bin 10_Emplace/10_Emplace.bin 11_RoundRobin/11_RoundRobin.bin 12_ListSplice/12_ListSplice.bin 13_StudentEnrollment/13_StudentEnrollment.bin 14_ForwardList/14_ForwardList.bin 15_std_array/15_std_array.bin 16_PacketBuffer/16_PacketBuffer.bin 17_ErrorCorrelatorPqueue/17_ErrorCorrelatorPqueue.bin 18_ErrorCorrelatorStack/18_ErrorCorrelatorStack.bin 19_Pair/19_Pair.bin 20_MapBasics/20_MapBasics.bin 21_Nodes/21_Nodes.bin 22_BankAccount/22_BankAccount.bin 23_BuddyList/23_BuddyList.bin 24_AccessControlList/24_AccessControlList.bin 25_CustomHash/25_CustomHash.bin 26_unordered_map/26_unordered_map.bin 27_PhoneBook/27_PhoneBook.bin 28_ArrayIterators/28_ArrayIterators.bin 29_StringContainers/29_StringContainers.bin 30_BitsetBasics/30_BitsetBasics.bin 31_CableCompany/31_CableCompany.bin

.PHONY: clean
clean:
	$(RM)  01_TestScores/01_TestScores.bin 02_VectorCtors/02_VectorCtors.bin 03_VectorCopyAssign/03_VectorCopyAssign.bin 04_VectorCompare/04_VectorCompare.bin 05_VectorIterators/05_VectorIterators.bin 06_VectorOfReferences/06_VectorOfReferences.bin 07_VectorAddRemove/07_VectorAddRemove.bin 08_CreateVectorOfSize/08_CreateVectorOfSize.bin 09_MovePushBack/09_MovePushBack.bin 10_Emplace/10_Emplace.bin 11_RoundRobin/11_RoundRobin.bin 12_ListSplice/12_ListSplice.bin 13_StudentEnrollment/13_StudentEnrollment.bin 14_ForwardList/14_ForwardList.bin 15_std_array/15_std_array.bin 16_PacketBuffer/16_PacketBuffer.bin 17_ErrorCorrelatorPqueue/17_ErrorCorrelatorPqueue.bin 18_ErrorCorrelatorStack/18_ErrorCorrelatorStack.bin 19_Pair/19_Pair.bin 20_MapBasics/20_MapBasics.bin 21_Nodes/21_Nodes.bin 22_BankAccount/22_BankAccount.bin 23_BuddyList/23_BuddyList.bin 24_AccessControlList/24_AccessControlList.bin 25_CustomHash/25_CustomHash.bin 26_unordered_map/26_unordered_map.bin 27_PhoneBook/27_PhoneBook.bin 28_ArrayIterators/28_ArrayIterators.bin 29_StringContainers/29_StringContainers.bin 30_BitsetBasics/30_BitsetBasics.bin 31_CableCompany/31_CableCompany.bin

# Actually build the binaries

01_TestScores/01_TestScores.bin : 01_TestScores/01_TestScores.cpp 01_TestScores/02_TestScoresDynamic.cpp
	$(CXX) $(CFLAGS) -o $@ $^

02_VectorCtors/02_VectorCtors.bin : 02_VectorCtors/01_DefaultCtor.cpp 02_VectorCtors/02_InitialElements.cpp 02_VectorCtors/03_BuiltInClasses.cpp 02_VectorCtors/04_UserDefinedClasses.cpp 02_VectorCtors/05_InitializerList.cpp 02_VectorCtors/06_UniformInitialization.cpp 02_VectorCtors/07_HeapVectorsSmartPointer.cpp
	$(CXX) $(CFLAGS) -o $@ $^

03_VectorCopyAssign/03_VectorCopyAssign.bin : 03_VectorCopyAssign/demo.cpp
	$(CXX) $(CFLAGS) -o $@ $^

04_VectorCompare/04_VectorCompare.bin : 04_VectorCompare/compare.cpp
	$(CXX) $(CFLAGS) -o $@ $^

05_VectorIterators/05_VectorIterators.bin : 05_VectorIterators/01_TestScoresIterator.cpp 05_VectorIterators/02_AccessingFields.cpp 05_VectorIterators/03_ConstIterator.cpp 05_VectorIterators/04_IteratorSafety.cpp 05_VectorIterators/05_IteratorOps.cpp
	$(CXX) $(CFLAGS) -o $@ $^

06_VectorOfReferences/06_VectorOfReferences.bin : 06_VectorOfReferences/VectorOfReferences.cpp
	$(CXX) $(CFLAGS) -o $@ $^

07_VectorAddRemove/07_VectorAddRemove.bin : 07_VectorAddRemove/AddRemove.cpp
	$(CXX) $(CFLAGS) -o $@ $^

08_CreateVectorOfSize/08_CreateVectorOfSize.bin : 08_CreateVectorOfSize/CreateVectorOfSize.cpp
	$(CXX) $(CFLAGS) -o $@ $^

09_MovePushBack/09_MovePushBack.bin : 09_MovePushBack/MovePushBack.cpp
	$(CXX) $(CFLAGS) -o $@ $^

10_Emplace/10_Emplace.bin : 10_Emplace/Emplace.cpp
	$(CXX) $(CFLAGS) -o $@ $^

11_RoundRobin/11_RoundRobin.bin : 11_RoundRobin/RoundRobinTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

12_ListSplice/12_ListSplice.bin : 12_ListSplice/ListSplice.cpp
	$(CXX) $(CFLAGS) -o $@ $^

13_StudentEnrollment/13_StudentEnrollment.bin : 13_StudentEnrollment/Enrollment.cpp
	$(CXX) $(CFLAGS) -o $@ $^

14_ForwardList/14_ForwardList.bin : 14_ForwardList/forward_list.cpp
	$(CXX) $(CFLAGS) -o $@ $^

15_std_array/15_std_array.bin : 15_std_array/01_std_array.cpp 15_std_array/02_get.cpp
	$(CXX) $(CFLAGS) -o $@ $^

16_PacketBuffer/16_PacketBuffer.bin : 16_PacketBuffer/PacketBufferTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

17_ErrorCorrelatorPqueue/17_ErrorCorrelatorPqueue.bin : 17_ErrorCorrelatorPqueue/ErrorCorrelator.cpp 17_ErrorCorrelatorPqueue/ErrorCorrelatorTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

18_ErrorCorrelatorStack/18_ErrorCorrelatorStack.bin : 18_ErrorCorrelatorStack/ErrorCorrelator.cpp 18_ErrorCorrelatorStack/ErrorCorrelatorTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

19_Pair/19_Pair.bin : 19_Pair/PairTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

20_MapBasics/20_MapBasics.bin : 20_MapBasics/01_Map.cpp 20_MapBasics/02_MapUniformInit.cpp 20_MapBasics/03_MapInsert.cpp 20_MapBasics/04_MapIndexOperator.cpp 20_MapBasics/05_MapAsParameter.cpp 20_MapBasics/06_MapIterators.cpp 20_MapBasics/07_MapLookup.cpp 20_MapBasics/08_MapFind.cpp 20_MapBasics/09_MapErase.cpp
	$(CXX) $(CFLAGS) -o $@ $^

21_Nodes/21_Nodes.bin : 21_Nodes/01_ExtractAndInsert.cpp 21_Nodes/02_merge.cpp
	$(CXX) $(CFLAGS) -o $@ $^

22_BankAccount/22_BankAccount.bin : 22_BankAccount/BankDB.cpp 22_BankAccount/BankDBTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

23_BuddyList/23_BuddyList.bin : 23_BuddyList/BuddyList.cpp 23_BuddyList/BuddyListTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

24_AccessControlList/24_AccessControlList.bin : 24_AccessControlList/AccessList.cpp 24_AccessControlList/AccessListTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

25_CustomHash/25_CustomHash.bin : 25_CustomHash/CustomHash.cpp
	$(CXX) $(CFLAGS) -o $@ $^

26_unordered_map/26_unordered_map.bin : 26_unordered_map/unordered_map.cpp
	$(CXX) $(CFLAGS) -o $@ $^

27_PhoneBook/27_PhoneBook.bin : 27_PhoneBook/PhoneBook.cpp
	$(CXX) $(CFLAGS) -o $@ $^

28_ArrayIterators/28_ArrayIterators.bin : 28_ArrayIterators/ArrayIterators.cpp
	$(CXX) $(CFLAGS) -o $@ $^

29_StringContainers/29_StringContainers.bin : 29_StringContainers/StringExample.cpp
	$(CXX) $(CFLAGS) -o $@ $^

30_BitsetBasics/30_BitsetBasics.bin : 30_BitsetBasics/01_BitsetBasics.cpp 30_BitsetBasics/02_BitwiseOperators.cpp
	$(CXX) $(CFLAGS) -o $@ $^

31_CableCompany/31_CableCompany.bin : 31_CableCompany/CableCompany.cpp 31_CableCompany/CableCompanyTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

