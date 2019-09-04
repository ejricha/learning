#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  vector<int> v { 2017, 0, -1, 42, 10101, 25 };

  cout << "Enter number to find in collection: ";
  int num = 0;
  cin >> num;

  auto e = find(v.cbegin(), v.cend(), num);
  if (e != v.cend()) {
    cout << "Value " << *e << " found!\n";
  }
  else {
    cout << "No element contains value " << num << "\n";
  }

  cout << "Finding the first even number using find_if:\n";
  auto even = find_if(v.cbegin(), v.cend(), [](auto n) { return ((n % 2) == 0); });
  if (even != v.cend()) {
    cout << "Number '" << *even << "' found at position ["
      << distance(v.cbegin(), even) << "]\n";
  }
}
