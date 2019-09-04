#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

// A unary function
template <typename T>
void FuncDisplayElement(const T& e) {
  cout << ' ' << e;
}

// A structure used as a functor
template <typename T>
struct StructDisplayElement {
  void operator()(const T& e) {
    cout << ' ' << e;
  }
};

// Main function
int main() {
  // Vector of integers
  vector<int> v{ 0, 1, 2, 3, -1, -9, 0, -999 };

  // Unary function
  cout << "for_each(v.cbegin(), v.cend(), FuncDisplayElement<int>);\n";
  for_each(v.cbegin(), v.cend(), FuncDisplayElement<int>);
  cout << "\n";

  // Unary function
  cout << "for_each(v.cbegin(), v.cend(), StructDisplayElement<int>());\n";
  for_each(v.cbegin(), v.cend(), StructDisplayElement<int>());
  cout << "\n";

  // List of characters
  list<char> l{ 'a', 'z', 'k', 'd' };

  // Unary function
  cout << "for_each(l.cbegin(), l.cend(), FuncDisplayElement<char>);\n";
  for_each(l.cbegin(), l.cend(), FuncDisplayElement<char>);
  cout << "\n";

  // Unary function
  cout << "for_each(l.cbegin(), l.cend(), StructDisplayElement<char>());\n";
  for_each(l.cbegin(), l.cend(), StructDisplayElement<char>());
  cout << "\n";
}
