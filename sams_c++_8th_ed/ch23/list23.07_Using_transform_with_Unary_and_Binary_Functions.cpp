#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <deque>
#include <functional>
using namespace std;

// Display function for a container
template <typename T>
void Display(const T& c) {
  for_each(c.begin(), c.end(), [](auto n) { cout << ' ' << n; });
  cout << '\n';
}

// Main function
int main() {
  // Convert a string to lowercase
  string str { "THIS is a TEst StrIng!" };
  cout << "The sample string is: [" << str << "]\n";
  string str_lowercase;
  str_lowercase.resize(str.size());
  transform(str.cbegin(), str.cend(), str_lowercase.begin(), ::tolower);
  cout << "The lowercase string is: [" << str_lowercase << "]\n";

  // Sum two vectors
  vector<int> v1 { 2017, 0, -1, 42, 10101, 25 };
  vector<int> v2(v1.size(), -1); // Initialized to -1
  deque<int> sum(v1.size()); // Defaults to 0
  cout << "v1:"; Display(v1);
  cout << "v2:"; Display(v2);

  transform(v1.cbegin(), v1.cend(), v2.cbegin(), sum.begin(), plus<int>());
  cout << "sum:"; Display(sum);
}
