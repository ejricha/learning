#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

template <typename T>
void display(const T& c) {
  cout << ' ' << c.size() << " elements :";
  for (auto e = c.cbegin(); e != c.cend(); ++e) {
    cout << ' ' << *e;
  }
  cout << '\n';
}

int main() {
  vector<string> v { "Eric", "John", "jack", "ana", "ErIN", "sean", "Shawn", "Anna" };

  // Insert a few duplicates
  v.push_back("jack");
  v.push_back("Eric");
  cout << "The initial contents of vector:\n";
  display(v);
  
  // Make a copy
  vector<string> c(v);

  cout << "The sorted vector contains names in the order:\n";
  sort(v.begin(), v.end());
  display(v);

  cout << "Searching for \"John\" using binary_search():\n";
  bool found = binary_search(v.cbegin(), v.cend(), "John");
  if (found) {
    cout << "Result: \"John\" was found in the vector!\n";
  }
  else {
    cout << "Element not found\n";
  }

  // Erase adjacent duplicates
  auto new_end = unique(v.begin(), v.end());
  v.erase(new_end, v.end());
  cout << "The contents of the vector after unique():\n";
  display(v);

  cout << "The contents of the copy vector:\n";
  display(c);
  new_end = unique(c.begin(), c.end());
  c.erase(new_end, c.end());
  cout << "The contents of the copy vector after unique():\n";
  display(c);
}
