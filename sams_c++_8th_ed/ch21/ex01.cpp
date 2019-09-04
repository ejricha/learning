// ex01.cpp
//
// A unary function that can be used with std::for_each() to display the double of the input parameter
#include <iostream>
#include <string>
using namespace std;

// Unary function
template <typename T>
void doubleThis(const T& t) {
  cout << t * 2 << endl;
}

// Main function
int main() {
  cout << "Double of literal 3 is ";
  doubleThis(3);

  cout << "Double of literal 3.33 is ";
  doubleThis(3.33);

  int i = 7;
  cout << "Double of int " << i << " is ";
  doubleThis(i);

  double d = 2134.3256;
  cout << "Double of double " << d << " is ";
  doubleThis(d);

  char c = 'c';
  cout << "Double of char " << c << " is ";
  doubleThis(c);

  string s = "potato";
  cout << "Double of " << s << " is ";
  //doubleThis(s);
  cout << "illegal\n";
}
