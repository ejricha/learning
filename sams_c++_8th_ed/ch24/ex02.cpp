// ex02.cpp
//
// Reverse a string using a stack

#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
using namespace std;

// Main function
int main() {
  cout << "Enter a string:\n";
  string str;
  getline(cin, str);

  stack<char> stk;
  for_each(str.cbegin(), str.cend(), [&stk](char c) { stk.push(c); });
  
  // Clear the string
  str.clear();
  while (!stk.empty()) {
    str.push_back(stk.top());
    stk.pop();
  }
  
  cout << "Reversed string is: " << str << "\n";
}
