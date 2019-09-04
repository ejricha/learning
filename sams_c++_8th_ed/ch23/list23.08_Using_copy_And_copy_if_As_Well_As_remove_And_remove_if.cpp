#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
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
  list<int> l { 0, 8, -2, 6, 2017, 0, 0, -1, -4, 0, 42, 10101, 25 };
  cout << "Source (list) contains:\n";
  display(l);

  // Initialize vector to hold twice as many elements as the list
  vector<int> v(l.size() * 2);

  auto last = copy(l.cbegin(), l.cend(), v.begin());

  // Copy odd numbers from list into the end of the vector
  copy_if (l.cbegin(), l.cend(), last,
    [](int e) { return ((e % 2) != 0); } );
  cout << "Destination (vector) after copy() and copy_if():\n";
  display(v);

  // Remove all instances of '0' using remove() and erase()
  auto new_end = remove(v.begin(), v.end(), 0);
  cout << "Destination (vector) after removing all occurrences of '0':\n";
  display(v);
  v.erase(new_end, v.end()); // Option 1
  cout << "Destination (vector) after erase():\n";
  display(v);

  // Remove all odd numbers from the vector using remove_if() and resize()
  new_end = remove_if(v.begin(), v.end(),
    [](int e) { return ((e % 2) != 0); } );
  cout << "Destination (vector) after removing all odd numbers:\n";
  display(v);
  v.resize(distance(v.begin(), new_end)); // Option 2
  cout << "Destination (vector) after resize():\n";
  display(v);

  // Remove all negative numbers from the vector using remove_if() and erase()
  new_end = remove_if(v.begin(), v.end(),
    [](int e) { return (e < 0); } );
  cout << "Destination (vector) after removing all negative numbers:\n";
  display(v);
  v.erase(new_end, v.end()); // Option 1
  cout << "Destination (vector) after erase():\n";
  display(v);
}
