// ex02.cpp
//
// Show that iterators remain valid after insertion

#include <iostream>
#include <list>
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
  list<int> integers{1, 2, 3, 4, 5};
  cout << "integers:\n";
  display(integers);

  //const list<int>::const_iterator number_3 = find(integers.begin(), integers.end(), 3);
  auto number_3 = find(integers.begin(), integers.end(), 3);
  cout << "integers[" << distance(integers.begin(), number_3) << "] = " << *number_3 << "\n\n";

  cout << "Inserting a 6 before the 3:\n";
  integers.insert(number_3, 6);

  cout << "integers:\n";
  display(integers);
  cout << "integers[" << distance(integers.begin(), number_3) << "] = " << *number_3 << "\n\n";

  cout << "Inserting 7 at front and 10 at back:\n";
  integers.push_front(7);
  integers.push_back(10);

  display(integers);
  cout << "integers[" << distance(integers.begin(), number_3) << "] = " << *number_3 << "\n\n";
}
