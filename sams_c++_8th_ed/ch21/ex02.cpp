// ex02.cpp
//
// A unary function that can be used with std::for_each() to display the double of the input parameter,
//  AND display the number of times it has been used
#include <iostream>
#include <string>
using namespace std;

// Unary function
template <typename T>
struct DoubleThis {
  int count;
  DoubleThis() : count(0) { }
  void operator()(const T& t) {
    ++count;
    cout << t * 2 << endl;
  }
};

// Main function
int main() {
  // Instance of the struct
  DoubleThis<int> dub;

  cout << "Double of literal 3 is ";
  dub(3);

  cout << "Double of literal 3.33 is ";
  dub(3.33);

  int i = 7;
  cout << "Double of int " << i << " is ";
  dub(i);

  double d = 2134.3256;
  cout << "Double of double " << d << " is ";
  dub(d);

  char c = 'c';
  cout << "Double of char " << c << " is ";
  dub(c);

  string s = "potato";
  cout << "Double of " << s << " is ";
  //dub(s);
  cout << "illegal\n";

  cout << "DoubleThis dub was used " << dub.count << " times\n";
}
