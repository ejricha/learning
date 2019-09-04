// ex02.cpp
//
// Use a deque

#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

void displayDeque(const deque<string>& d) {
  // Print using iterators
  const auto d_begin = d.begin();
  const auto d_end = d.end();
  for (auto it = d_begin; it != d_end; ++it) {
    cout << "d[" << distance(d_begin, it) << "] = " << *it << "\n";
  }
}

// Main function
int main() {
  deque<string> d{"Hello"s, "Containers are cool!", "C++ is evolving!"};
  displayDeque(d);
}
