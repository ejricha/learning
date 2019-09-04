#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Display function
template <typename T>
void Display(const T& c) {
  const auto end = c.cend();
  for (auto it = c.cbegin(); it != end; ++it) {
    cout << ' ' << *it;
  }
  cout << '\n';
}

// Main function
int main() {
  // Initialize a sample vector with 3 elements
  vector<int> v(3);
  cout << "v:"; Display(v);

  // Fill all elements in the container with 9
  fill(v.begin(), v.end(), 9);
  cout << "v:"; Display(v);

  // Increase the size of the vector to hold 9 elements
  v.resize(9);
  cout << "v:"; Display(v);

  // Fill the 3 middle elements with value 7
  fill_n(v.begin() + 3, 3, 7);
  cout << "v:"; Display(v);
}
