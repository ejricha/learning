#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// A structure used as a functor
template <typename T>
struct StructDisplayElementKeepCount {
  // Member variable
  int count;

  // Constructor
  StructDisplayElementKeepCount() : count(0) {}

  // Overloaded operator()
  void operator()(const T& e) {
    ++count;
    cout << ' ' << e;
  }
};

// Main function
int main() {
  // Vector of integers
  vector<int> v{ 0, 1, 2, 3, -1, -9, 0, -999 };

  // Unary function
  cout << "auto result = for_each(v.cbegin(), v.cend(), StructDisplayElementKeepCount<int>());\n";
  auto result = for_each(v.cbegin(), v.cend(), StructDisplayElementKeepCount<int>());
  cout << "\n";
  cout << "Functor invoked " << result.count << " (result.count) times\n";
  // Again!
  cout << "result = for_each(v.cbegin(), v.cend(), StructDisplayElementKeepCount<int>());\n";
  result = for_each(v.cbegin(), v.cend(), StructDisplayElementKeepCount<int>());
  cout << "\n";
  cout << "Functor invoked " << result.count << " (result.count) times\n";
}
