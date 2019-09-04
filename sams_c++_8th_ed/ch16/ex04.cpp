// ex04.cpp
//
// Append four strings with a space between them

#include <iostream>
#include <string>
using namespace std;

// Main function
int main() {
  string s1("I"s);
  string s2("Love"s);
  string s3("STL"s);
  string s4("String"s);
  string s5 = s1 + " " + s2 + " " + s3 + " " + s4;
  cout << s5 << "\n";
}
