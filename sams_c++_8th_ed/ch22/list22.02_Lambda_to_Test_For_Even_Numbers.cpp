#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Overloaded display function
template <typename T>
void display(const T& c) {
  for (auto e = c.cbegin(); e != c.cend(); ++e) {
    cout << ' ' << *e;
  }
  cout << '\n';
}

// Main function
int main() {
  // Vector of numbers
  vector<int> v{ 1, 2, 3, 4, 7, 22, 234, 53241, 321, 23, 35, 99, 21, 34 };
  cout << "v:";
  display(v);  

  // Print only the even numbers, in a loop
  cout << "v (even elements only):";
  auto it = v.cbegin();
  do {
    it = find_if(it, v.cend(), [](const auto& n) { return ((n % 2) == 0); });
    if (it != v.cend()) {
      cout << ' ' << *it;
      ++it;
    }
  } while (it != v.cend());
  cout << '\n';
  
  // Print only the odd numbers, in a loop
  cout << "v (odd elements only):";
  it = v.cbegin();
  do {
    it = find_if(it, v.cend(), [](const auto& n) {
      return ((n % 2) != 0);
    });
    if (it != v.cend()) {
      cout << ' ' << *it;
      ++it;
    }
  } while (it != v.cend());

  // Print all the elements of the vector
  cout << "v (all elements):\n";
  size_t count = 0;
  for_each(v.cbegin(), v.cend(), [& count](const auto& n) {
    cout << "[" << count << "] = " << n << "\n";
    ++count;
  });
}
