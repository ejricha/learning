# Global variables
STD        := -lstdc++ -std=c++17 -pthread
CC         := gcc $(STD)
CXX        := g++ $(STD)
WARN       := -Wall -Wextra -Wfatal-errors
CFLAGS     := -fPIC $(WARN) -O2 -g
RM         := rm -f

.PHONY: all
all: 01_StartTimeDebugMode/01_StartTimeDebugMode.bin 02_CompileTimeDebugMode/02_CompileTimeDebugMode.bin 03_RingBuffer/03_RingBuffer.bin 04_StaticAssert/04_StaticAssert.bin 05_MemoryErrors/05_MemoryErrors.bin 06_ArticleCitations/06_ArticleCitations.bin

.PHONY: clean
clean:
	$(RM)  01_StartTimeDebugMode/01_StartTimeDebugMode.bin 02_CompileTimeDebugMode/02_CompileTimeDebugMode.bin 03_RingBuffer/03_RingBuffer.bin 04_StaticAssert/04_StaticAssert.bin 05_MemoryErrors/05_MemoryErrors.bin 06_ArticleCitations/06_ArticleCitations.bin

# Actually build the binaries

01_StartTimeDebugMode/01_StartTimeDebugMode.bin : 01_StartTimeDebugMode/STDebug.cpp
	$(CXX) $(CFLAGS) -o $@ $^

02_CompileTimeDebugMode/02_CompileTimeDebugMode.bin : 02_CompileTimeDebugMode/CTDebug.cpp
	$(CXX) $(CFLAGS) -o $@ $^

03_RingBuffer/03_RingBuffer.bin : 03_RingBuffer/RingBuffer.cpp 03_RingBuffer/RingBufferTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

04_StaticAssert/04_StaticAssert.bin : 04_StaticAssert/StaticAssert.cpp
	$(CXX) $(CFLAGS) -o $@ $^

05_MemoryErrors/05_MemoryErrors.bin : 05_MemoryErrors/MemoryErrors.cpp
	$(CXX) $(CFLAGS) -o $@ $^

06_ArticleCitations/06_ArticleCitations.bin : 06_ArticleCitations/ArticleCitationsTest.cpp
	$(CXX) $(CFLAGS) -o $@ $^

