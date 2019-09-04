// ex01.cpp
//
// Accept numbers from a user, and insert them at the top (front) of a list

#include <iostream>
#include <list>
#include <forward_list>
using namespace std;

// Overloaded display function
template <typename T>
void display(const T& container) {
  const auto begin = container.cbegin();
  const auto end = container.cend();
  for (auto it = begin; it != end; ++it) {
    cout << " " << *it;
  }
}

// Main function
int main() {
  const size_t num_elements = 5;
  cout << "Input " << num_elements << " integers: ";
  list<int> integers;
  forward_list<int> integers_forward;
  int j;
  for (size_t i = 0; i < num_elements; ++i) {
    cin >> j;
    integers.push_front(j);
    integers_forward.push_front(j);
  }

  // Display the list and the forward list
  cout << "Elements in list:";
  display(integers);
  cout << "\n";
  cout << "Elements in forward_list:";
  display(integers_forward);
  cout << "\n";
}
