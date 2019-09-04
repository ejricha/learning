// Simple test of a map
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
  cout << "\n";

  // At least two template arguments are required in a map
  // error: wrong number of template arguments (1, should be at least 2)
  /*
  map<int> m_single;
  m_single[2] = 22;
  m_single[4] = 44;
  cout << "map<int>:\n";
  display(m_single);
  cout << "\n";
  */
}
