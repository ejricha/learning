// ex02.cpp
//
// Determine the number of vowels in a sentence
// Ignore case, but don't allow spaces (because it is a single word)

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Main function
int main() {
  cout << "Input a sentence: ";
  string s;
  getline(cin, s);
  transform(s.begin(), s.end(), s.begin(), ::tolower);
  cout << "Word (lowercase) is (" << s << ")\n";
  const auto s_len = s.size();
  int num_vowels = 0;
  bool y_found = false;
  for (size_t i = 0; i < s_len; ++i) {
    switch (s[i]) {
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
        ++num_vowels;
        break;
      case 'y':
        y_found = true;
      default : break;
    }
  }
  cout << s << " contained " << num_vowels << " vowel"
    << (num_vowels == 1 ? "" : "s");
  if (y_found) {
    cout << " (excluding y)";
  }
  cout << "\n";
}
