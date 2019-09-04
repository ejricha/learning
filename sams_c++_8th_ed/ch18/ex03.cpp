// ex03.cpp
//
// Insert a vector into a list

#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
using namespace std;

// Overloaded display function
template <typename T>
void display(const T& container) {
  const auto begin = container.cbegin();
  const auto end = container.cend();
  for (auto it = begin; it != end; ++it) {
    cout << " [" << distance(begin, it) << "] = " << *it << "\n";
  }
}

// Main function
int main() {
  vector<int> v(3, 99);
  list<int> integers{1, 2, 3, 4, 5};
  cout << "integers:\n";
  display(integers);
  auto number_3 = find(integers.begin(), integers.end(), 3);

  cout << "Inserting a vector of 3 99s before the 3:\n";
  integers.insert(number_3, v.begin(), v.end());
  cout << "integers:\n";
  display(integers);
}
