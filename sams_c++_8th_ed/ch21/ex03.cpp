// ex03.cpp
//
// A binary predicate that sorts in Descending order
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Binary predicate
template <typename T>
struct DescendingOrder {
  bool operator()(const T& t1, const T& t2) {
    return (t1 > t2);
  }
};

// Overloaded display function
template <typename T>
void display(const T& container) {
  const auto begin = container.cbegin();
  const auto end = container.cend();
  for (auto e = begin; e != end; ++e) {
    cout << ' ' << *e;
  }
  cout << '\n';
}

// Main function
int main() {
  // Vector of integers to be sorted
  vector<int> v{ 3, 18, -1, 354, 23, 109, 12, 0, -2, 0, 23, 77, 17 };
  cout << "Unsorted vector is : ";
  display(v);

  // Sort the vector in normal order
  cout << "Ascending sort vector is : ";
  sort(v.begin(), v.end());
  display(v);

  // Sort the vector in descending order
  cout << "Descending sort vector is : ";
  sort(v.begin(), v.end(), DescendingOrder<int>());
  display(v);
}
