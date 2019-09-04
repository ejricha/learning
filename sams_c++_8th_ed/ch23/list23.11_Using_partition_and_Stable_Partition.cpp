#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Unary predicate
bool isEven(const int& n) {
  return ((n % 2) == 0);
}

// Templated display function
template <typename T>
void display(const T& c) {
  cout << ' ' << c.size() << " elements :";
  for_each(c.cbegin(), c.cend(), [](auto e) { cout << ' ' << e; });
  cout << '\n';
}

int main() {
  vector<int> v { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };
  cout << "The initial contents:\n";
  display(v);

  // Make a copy
  vector<int> c(v);

  cout << "The effect of using partition():\n";
  partition(v.begin(), v.end(), isEven);
  display(v);

  cout << "The effect of using stable_partition() for divisible by 3:\n";
  stable_partition(c.begin(), c.end(), [](auto e) { return (e % 3 == 0); });
  display(c);
}
