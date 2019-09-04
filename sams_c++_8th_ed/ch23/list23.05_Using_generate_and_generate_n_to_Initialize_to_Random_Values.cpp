#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <ctime>
using namespace std;

// Display function
template <typename T>
void Display(const T& c) {
  for_each(c.begin(), c.end(), [](auto n) { cout << ' ' << n; });
  cout << '\n';
}

// Main function
int main() {
  // Seed the random number generator from the current time
  srand(time(nullptr));

  vector<int> v(5);
  generate(v.begin(), v.end(), rand);
  cout << "v:"; Display(v);

  list<int> l(7);
  //generate_n(l.begin() + 2, 4, rand); // ERROR, lists are not random access
  generate_n(l.begin(), 4, rand);
  cout << "l:"; Display(l);

  vector<int> v2(7);
  generate_n(v2.begin() + 2, 4, rand);
  cout << "v2:"; Display(v2);
}
