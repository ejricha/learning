// From https://stackoverflow.com/questions/1924530/mixing-cout-and-printf-for-faster-output?rq=1
#include <iostream>
#include <string>
#include <sstream>
#include <time.h>
#include <iomanip>
#include <algorithm>
#include <iterator>
#include <stdio.h>

char fmt[] = "%s\n";
static const int count = 3000000;
static char const *const string = "This is a string.";
static std::string s = std::string(string) + "\n";

void show_time(void (*f)(), char const *caption) { 
  clock_t start = clock();
  f();
  clock_t ticks = clock() - start;
  std::cerr << std::setw(30) << caption
    << ": " << (double)ticks/CLOCKS_PER_SEC << "\n";
}

void use_printf() {
  for (int i = 0; i < count; ++i) {
    printf(fmt, string);
  }
}

void use_puts() {
  for (int i = 0; i < count; ++i) {
    puts(string);
  }
}

void use_cout() {
  for (int i = 0; i < count; ++i) {
    std::cout << string << "\n";
  }
}

void use_cout_unsync() {
  std::cout.sync_with_stdio(false);
  for (int i = 0; i < count; ++i) {
    std::cout << string << "\n";
  }
  std::cout.sync_with_stdio(true);
}

void use_stringstream() {
  std::stringstream temp;
  for (int i = 0; i < count; ++i) {
    temp << string << "\n";
  }
  std::cout << temp.str();
}

void use_endl() {
  for (int i = 0; i < count; ++i)
    std::cout << string << std::endl;
}

void use_fill_n() {
  std::fill_n(std::ostream_iterator<char const *>(std::cout, "\n"), count, string);
}

void use_write() {
  for (int i = 0; i < count; ++i) {
    std::cout.write(s.data(), s.size());
  }
}

int main() {
  show_time(use_printf, "Time using printf");
  show_time(use_puts, "Time using puts");
  show_time(use_cout, "Time using cout (synced)");
  show_time(use_cout_unsync, "Time using cout (un-synced)");
  show_time(use_stringstream, "Time using stringstream");
  show_time(use_endl, "Time using endl");
  show_time(use_fill_n, "Time using fill_n");
  show_time(use_write, "Time using write");
  return 0;
}

// Results:
/*
$ ./cout_flush_test.bin > cout_flush_test1.log
             Time using printf: 0.683248
               Time using puts: 0.360537
      Time using cout (synced): 0.723105
   Time using cout (un-synced): 0.581197
       Time using stringstream: 0.679125
               Time using endl: 14.179
             Time using fill_n: 0.577922
              Time using write: 0.320614
$ ./cout_flush_test.bin > cout_flush_test2.log
             Time using printf: 0.68412
               Time using puts: 0.358986
      Time using cout (synced): 0.807854
   Time using cout (un-synced): 0.582847
       Time using stringstream: 0.669314
               Time using endl: 14.1662
             Time using fill_n: 0.582288
              Time using write: 0.31835
Clearly, most methods are good, but endl slows things down by a factor of 50x.
Looks like puts() and write() are the best, and synced cout is the worst.
*/
