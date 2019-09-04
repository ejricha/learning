// ex03.cpp
//
// Test inserting duplicates into a map and multimap
#include <iostream>
#include <map>
using namespace std;

// Overloaded display function
template <typename T>
void display(const T& container) {
  const auto begin = container.cbegin();
  const auto end = container.cend();
  for (auto it = begin; it != end; ++it) {
    cout << " " << it->first << " -> " << it->second << "\n";
  }
}

// Main function
int main() {
  map<int, int> m;
  m[2] = 22;
  m[4] = 44;
  cout << "map<int, int>:\n";
  display(m);
  m[4] = 55; // No duplicate
  m.insert(make_pair(4,  66)); // No duplicate
  cout << "map<int, int>:\n";
  display(m);
  cout << "\n";

  multimap<int, int> mm(m.begin(), m.end());
  cout << "multimap<int, int>:\n";
  display(mm);
  //mm[4] = 55; // Won't compile
  mm.insert(make_pair(4,  88)); // Produces a duplicate
  cout << "multimap<int, int>:\n";
  display(mm);
  cout << "\n";
}
