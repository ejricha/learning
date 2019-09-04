# Global variables
STD        := -lstdc++ -std=c++17 -pthread
CC         := gcc $(STD)
CXX        := g++ $(STD)
WARN       := -Wall -Wextra -Wfatal-errors
CFLAGS     := -fPIC $(WARN) -O2 -g
RM         := rm -f

.PHONY: all
all: 01_HelloWorld/01_HelloWorld.bin 02_Namespaces/02_Namespaces.bin 03_HelloVariables/03_HelloVariables.bin 04_TypeTest/04_TypeTest.bin 05_StronglyTypedEnums/05_StronglyTypedEnums.bin 06_StructTest/06_StructTest.bin 07_std_array/07_std_array.bin 08_std_vector/08_std_vector.bin 09_InitializerLists/09_InitializerLists.bin 10_StringTest/10_StringTest.bin 11_NullPointerConstant/11_NullPointerConstant.bin 12_SmartPointers/12_SmartPointers.bin 13_ConstPointerArg/13_ConstPointerArg.bin 14_ConstReferenceArg/14_ConstReferenceArg.bin 15_Exceptions/15_Exceptions.bin 16_AirlineTicket/16_AirlineTicket.bin 17_UniformInitialization/17_UniformInitialization.bin 18_EmployeeDB/18_EmployeeDB.bin

.PHONY: clean
clean:
	$(RM)  01_HelloWorld/01_HelloWorld.bin 02_Namespaces/02_Namespaces.bin 03_HelloVariables/03_HelloVariables.bin 04_TypeTest/04_TypeTest.bin 05_StronglyTypedEnums/05_StronglyTypedEnums.bin 06_StructTest/06_StructTest.bin 07_std_array/07_std_array.bin 08_std_vector/08_std_vector.bin 09_InitializerLists/09_InitializerLists.bin 10_StringTest/10_StringTest.bin 11_NullPointerConstant/11_NullPointerConstant.bin 12_SmartPointers/12_SmartPointers.bin 13_ConstPointerArg/13_ConstPointerArg.bin 14_ConstReferenceArg/14_ConstReferenceArg.bin 15_Exceptions/15_Exceptions.bin 16_AirlineTicket/16_AirlineTicket.bin 17_UniformInitialization/17_UniformInitialization.bin 18_EmployeeDB/18_EmployeeDB.bin

# Actually build the binaries

01_HelloWorld/01_HelloWorld.bin : 01_HelloWorld/helloworld.cpp
	$(CXX) $(CFLAGS) -o $@ $^

02_Namespaces/02_Namespaces.bin : 02_Namespaces/namespaces.cpp 02_Namespaces/usingnamespaces.cpp
	$(CXX) $(CFLAGS) -o $@ $^

03_HelloVariables/03_HelloVariables.bin : 03_HelloVariables/hellovariables.cpp
	$(CXX) $(CFLAGS) -o $@ $^

04_TypeTest/04_TypeTest.bin : 04_TypeTest/typetest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

05_StronglyTypedEnums/05_StronglyTypedEnums.bin : 05_StronglyTypedEnums/StronglyTypedEnums.cpp
	$(CXX) $(CFLAGS) -o $@ $^

06_StructTest/06_StructTest.bin : 06_StructTest/structtest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

07_std_array/07_std_array.bin : 07_std_array/std_array.cpp
	$(CXX) $(CFLAGS) -o $@ $^

08_std_vector/08_std_vector.bin : 08_std_vector/vectortest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

09_InitializerLists/09_InitializerLists.bin : 09_InitializerLists/InitializerLists.cpp
	$(CXX) $(CFLAGS) -o $@ $^

10_StringTest/10_StringTest.bin : 10_StringTest/stringtest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

11_NullPointerConstant/11_NullPointerConstant.bin : 11_NullPointerConstant/NullPointerConstant.cpp
	$(CXX) $(CFLAGS) -o $@ $^

12_SmartPointers/12_SmartPointers.bin : 12_SmartPointers/SmartPointers.cpp
	$(CXX) $(CFLAGS) -o $@ $^

13_ConstPointerArg/13_ConstPointerArg.bin : 13_ConstPointerArg/ConstPointerArg.cpp
	$(CXX) $(CFLAGS) -o $@ $^

14_ConstReferenceArg/14_ConstReferenceArg.bin : 14_ConstReferenceArg/ConstReferenceArg.cpp
	$(CXX) $(CFLAGS) -o $@ $^

15_Exceptions/15_Exceptions.bin : 15_Exceptions/Exceptions.cpp
	$(CXX) $(CFLAGS) -o $@ $^

16_AirlineTicket/16_AirlineTicket.bin : 16_AirlineTicket/AirlineTicket.cpp 16_AirlineTicket/AirlineTicketTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

17_UniformInitialization/17_UniformInitialization.bin : 17_UniformInitialization/UniformInitialization.cpp
	$(CXX) $(CFLAGS) -o $@ $^

18_EmployeeDB/18_EmployeeDB.bin : 18_EmployeeDB/Database.cpp 18_EmployeeDB/DatabaseTest.cpp 18_EmployeeDB/Employee.cpp 18_EmployeeDB/EmployeeTest.cpp 18_EmployeeDB/UserInterface.cpp
	$(CXX) $(CFLAGS) -o $@ $^

