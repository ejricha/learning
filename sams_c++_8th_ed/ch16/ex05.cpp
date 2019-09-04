// ex05.cpp
//
// Display the position of every occurrence of character 'a' in a string

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Main function
int main() {
  string s("Good day String! Today is beautiful!"s);
  const auto s_len = s.size();
  const char c('a');
  cout << "Sentence was \"" << s << "\", searching for '" << c << "'\n";
  size_t n = 0;
  int found = 0;
  do {
    // Attempt to find the character
    n = s.find(c, n);

    // If the find failed, quit this loop
    if (n == string::npos || n >= s_len) {
      break;
    }

    // Otherwise, output the index
    cout << n << " : " << s[n] << "\n";
    ++found;
    ++n; // So we skip this character next time through
  } while (true);

  // Output something if the char was not found
  if (found == 0) {
    cout << "Could not find character '" << c << "' in sentence\n";
  }
}
