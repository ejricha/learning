// test.cpp
//
// Test of various features expected in C++17, which I am running
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Main function
int main() {
  vector<int> v { 1, 2, 3, 5, 6, 7 };
  const auto v_begin = v.cbegin();
  const auto v_end = v.cend();
  for (int i = 1; i < 7; ++i) {
    // Initialization within if statement works fine
    if (auto e = find(v_begin, v_end, i); e != v_end) {
      cout << "Found " << i << " at index " << distance(v_begin, e) << "\n";
    }
    else {
      cout << "Could not find " << i << " in vector\n";
    }
  }

  // Show that it is available in both if and else blocks, but not outside
  for (int i = 0; i <= 2; ++i) {
    if (int x = i + 29; x < 30) {
      cout << "Yes, " << x << " < 30\n";
    }
    else if (x == 30) {
      cout << "Well, " << x << " == 30\n";
    }
    else {
      cout << "No, " << x << " > 30\n";
    }
  }
}
