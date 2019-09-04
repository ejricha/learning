# Global variables
STD        := -lstdc++ -std=c++17 -pthread
CC         := gcc $(STD)
CXX        := g++ $(STD)
WARN       := -Wall -Wextra -Wfatal-errors
CFLAGS     := -fPIC $(WARN) -O2 -g
RM         := rm -f

.PHONY: all
all: 01_thread/01_thread.bin 02_ExceptionsWithThreads/02_ExceptionsWithThreads.bin 03_atomic/03_atomic.bin 04_mutex/04_mutex.bin 05_future/05_future.bin 06_logger/06_logger.bin

.PHONY: clean
clean:
	$(RM)  01_thread/01_thread.bin 02_ExceptionsWithThreads/02_ExceptionsWithThreads.bin 03_atomic/03_atomic.bin 04_mutex/04_mutex.bin 05_future/05_future.bin 06_logger/06_logger.bin

# Actually build the binaries

01_thread/01_thread.bin : 01_thread/01_ThreadFunction.cpp 01_thread/02_ThreadFunctionObject.cpp 01_thread/03_ThreadLambda.cpp 01_thread/04_ThreadMemFunc.cpp
	$(CXX) $(CFLAGS) -o $@ $^

02_ExceptionsWithThreads/02_ExceptionsWithThreads.bin : 02_ExceptionsWithThreads/ExceptionsWithThreads.cpp
	$(CXX) $(CFLAGS) -o $@ $^

03_atomic/03_atomic.bin : 03_atomic/01_is_lock_free.cpp 03_atomic/02_inc_func_non_atomic.cpp 03_atomic/03_inc_func_atomic.cpp 03_atomic/04_inc_func_atomic_optimal.cpp 03_atomic/05_fetch_add.cpp
	$(CXX) $(CFLAGS) -o $@ $^

04_mutex/04_mutex.bin : 04_mutex/01_multiple_locks.cpp 04_mutex/02_scoped_lock.cpp 04_mutex/03_call_once.cpp 04_mutex/04_ThreadFunctionObjectWithMutex.cpp 04_mutex/05_ThreadFunctionObjectWithTimedMutex.cpp 04_mutex/06_double_checked_locking.cpp
	$(CXX) $(CFLAGS) -o $@ $^

05_future/05_future.bin : 05_future/01_promise_future.cpp 05_future/02_packaged_task.cpp 05_future/03_async.cpp 05_future/04_async_error_handling.cpp 05_future/05_shared_future.cpp
	$(CXX) $(CFLAGS) -o $@ $^

06_logger/06_logger.bin : 
	$(CXX) $(CFLAGS) -o $@ $^

