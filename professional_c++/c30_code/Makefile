# Global variables
STD        := -lstdc++ -std=c++17 -pthread
CC         := gcc $(STD)
CXX        := g++ $(STD)
WARN       := -Wall -Wextra -Wfatal-errors
CFLAGS     := -fPIC $(WARN) -O2 -g
RM         := rm -f

.PHONY: all
all: 01_PtrSize/01_PtrSize.bin 02_VariableArray/02_VariableArray.bin 03_MixingC/03_MixingC.bin 04_CSharp/04_CSharp.bin 05_JNI/05_JNI.bin 06_Perl/06_Perl.bin

.PHONY: clean
clean:
	$(RM)  01_PtrSize/01_PtrSize.bin 02_VariableArray/02_VariableArray.bin 03_MixingC/03_MixingC.bin 04_CSharp/04_CSharp.bin 05_JNI/05_JNI.bin 06_Perl/06_Perl.bin

# Actually build the binaries

01_PtrSize/01_PtrSize.bin : 01_PtrSize/PtrSize.cpp
	$(CXX) $(CFLAGS) -o $@ $^

02_VariableArray/02_VariableArray.bin : 02_VariableArray/VariableArray.cpp
	$(CXX) $(CFLAGS) -o $@ $^

03_MixingC/03_MixingC.bin : 03_MixingC/MixingC.cpp
	$(CXX) $(CFLAGS) -o $@ $^

04_CSharp/04_CSharp.bin : 04_CSharp/HelloCpp.cpp
	$(CXX) $(CFLAGS) -o $@ $^

05_JNI/05_JNI.bin : 05_JNI/HelloCpp.cpp
	$(CXX) $(CFLAGS) -o $@ $^

06_Perl/06_Perl.bin : 06_Perl/encryptString.cpp
	$(CXX) $(CFLAGS) -o $@ $^

