# Global variables
STD        := -lstdc++ -std=c++17 -pthread
CC         := gcc $(STD)
CXX        := g++ $(STD)
WARN       := -Wall -Wextra -Wfatal-errors
CFLAGS     := -fPIC $(WARN) -O2 -g
RM         := rm -f

.PHONY: all
all: 01_OutputBasics/01_OutputBasics.bin 02_Write/02_Write.bin 03_Put/03_Put.bin 04_Flush/04_Flush.bin 05_Exceptions/05_Exceptions.bin 06_Manipulator/06_Manipulator.bin 07_Input/07_Input.bin 08_ErrorCheck/08_ErrorCheck.bin 09_Get/09_Get.bin 10_Unget/10_Unget.bin 11_Peek/11_Peek.bin 12_Getline/12_Getline.bin 13_Muffin/13_Muffin.bin 14_StringStream/14_StringStream.bin 15_FileStream/15_FileStream.bin 16_Seeking/16_Seeking.bin 17_tie/17_tie.bin 18_Bidirectional/18_Bidirectional.bin

.PHONY: clean
clean:
	$(RM)  01_OutputBasics/01_OutputBasics.bin 02_Write/02_Write.bin 03_Put/03_Put.bin 04_Flush/04_Flush.bin 05_Exceptions/05_Exceptions.bin 06_Manipulator/06_Manipulator.bin 07_Input/07_Input.bin 08_ErrorCheck/08_ErrorCheck.bin 09_Get/09_Get.bin 10_Unget/10_Unget.bin 11_Peek/11_Peek.bin 12_Getline/12_Getline.bin 13_Muffin/13_Muffin.bin 14_StringStream/14_StringStream.bin 15_FileStream/15_FileStream.bin 16_Seeking/16_Seeking.bin 17_tie/17_tie.bin 18_Bidirectional/18_Bidirectional.bin

# Actually build the binaries

01_OutputBasics/01_OutputBasics.bin : 01_OutputBasics/OutputBasics.cpp
	$(CXX) $(CFLAGS) -o $@ $^

02_Write/02_Write.bin : 02_Write/Write.cpp
	$(CXX) $(CFLAGS) -o $@ $^

03_Put/03_Put.bin : 03_Put/Put.cpp
	$(CXX) $(CFLAGS) -o $@ $^

04_Flush/04_Flush.bin : 04_Flush/flush.cpp
	$(CXX) $(CFLAGS) -o $@ $^

05_Exceptions/05_Exceptions.bin : 05_Exceptions/Exceptions.cpp
	$(CXX) $(CFLAGS) -o $@ $^

06_Manipulator/06_Manipulator.bin : 06_Manipulator/Manipulator.cpp
	$(CXX) $(CFLAGS) -o $@ $^

07_Input/07_Input.bin : 07_Input/01_string.cpp 07_Input/02_int.cpp 07_Input/03_getReservationData.cpp
	$(CXX) $(CFLAGS) -o $@ $^

08_ErrorCheck/08_ErrorCheck.bin : 08_ErrorCheck/ErrorCheck.cpp
	$(CXX) $(CFLAGS) -o $@ $^

09_Get/09_Get.bin : 09_Get/Get.cpp
	$(CXX) $(CFLAGS) -o $@ $^

10_Unget/10_Unget.bin : 10_Unget/Unget.cpp
	$(CXX) $(CFLAGS) -o $@ $^

11_Peek/11_Peek.bin : 11_Peek/Peek.cpp
	$(CXX) $(CFLAGS) -o $@ $^

12_Getline/12_Getline.bin : 12_Getline/Getline.cpp
	$(CXX) $(CFLAGS) -o $@ $^

13_Muffin/13_Muffin.bin : 13_Muffin/Muffin.cpp
	$(CXX) $(CFLAGS) -o $@ $^

14_StringStream/14_StringStream.bin : 14_StringStream/StringStream.cpp
	$(CXX) $(CFLAGS) -o $@ $^

15_FileStream/15_FileStream.bin : 15_FileStream/FileStream.cpp
	$(CXX) $(CFLAGS) -o $@ $^

16_Seeking/16_Seeking.bin : 16_Seeking/seeking.cpp
	$(CXX) $(CFLAGS) -o $@ $^

17_tie/17_tie.bin : 17_tie/tie.cpp
	$(CXX) $(CFLAGS) -o $@ $^

18_Bidirectional/18_Bidirectional.bin : 18_Bidirectional/Bidirectional.cpp
	$(CXX) $(CFLAGS) -o $@ $^

