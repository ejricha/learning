// ex03.cpp
//
// Convert every other character in a string to uppercase

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Main function
int main() {
  cout << "Input a sentence: ";
  string s;
  getline(cin, s);
  cout << "Sentence was (" << s << ")\n";
  const auto s_len = s.size();
  auto it = s.begin();
  for (size_t i = 0; i < s_len; i += 2) {
    //transform(s.begin() + i, s.beginit, it, ::toupper);
    transform(it, it+1, it, ::toupper);
    it += 2;
  }
  cout << "Sentence is now (" << s << ")\n";
}
