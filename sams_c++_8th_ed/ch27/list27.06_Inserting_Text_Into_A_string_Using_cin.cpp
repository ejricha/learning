#include <iostream>
#include <string>
using namespace std;

int main() {
  cout << "Enter a string: ";
  string s1;
  getline(cin, s1);
  cout << "String was (" << s1 << ")\n";

  cout << "Enter another string: ";
  char s2[10];
  cin.getline(s2, 10);
  cout << "String was (" << s2 << ")\n";
}
