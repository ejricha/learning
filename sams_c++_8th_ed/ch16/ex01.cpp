// ex01.cpp
//
// Determine if a word is a palindrome
// Ignore case, but don't allow spaces (because it is a single word)

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Main function
int main() {
  cout << "Input a word: ";
  string s;
  cin >> s;
  transform(s.begin(), s.end(), s.begin(), ::tolower);
  cout << "Word (lowercase) is (" << s << ")\n";

  // Don't iterate through, just copy the string and reverse it
  /* 
  int i = 0;
  int j = s.size() - 1;
  while (i < j) {
    if (s[i] != s[j]) {
      cout << s << " is NOT a palindrome\n";
      return 1;
    }
    ++i;
    --j;
  }
  cout << s << " is a palindrome\n";
  */

  string s_rev(s);
  reverse(s_rev.begin(), s_rev.end());
  if (s_rev == s) {
    cout << s << " is a palindrome\n";
  }
  else {
    cout << s << " is not a palindrome\n";
  }
}
