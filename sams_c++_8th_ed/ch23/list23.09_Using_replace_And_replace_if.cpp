#include <iostream>
#include <algorithm>
#include <vector>
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
  vector<int> v(6);

  // Fill first 3 elements with 8, last 3 with 5
  fill(v.begin(), v.begin() + 3, 8);
  fill_n(v.begin() + 3, 3, 5);
  cout << "The initial contents of vector:\n";
  display(v);

  // Shuffle the container
  random_shuffle(v.begin(), v.end());
  cout << "The shuffled vector:\n";
  display(v);

  cout << "Use replace() to change 5s to 7s\n";
  replace(v.begin(), v.end(), 5, 7);
  cout << "The vector now contains:\n";
  display(v);

  cout << "Use replace() to replace even values with -1\n";
  replace_if(v.begin(), v.end(), [](int e) { return ((e % 2) == 0); }, -1);
  cout << "The final contents of vector:\n";
  display(v);
}
