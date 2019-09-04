#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
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
  vector<int> v { 2017, 0, -1, 42, 10101, 25, 9, 9, 9 };
  list<int> l { -1, 42, 10101 };

  cout << "The contents of the sample vector are:";
  Display(v);
  cout << "The contents of the sample list are:";
  Display(l);

  cout << "search() for the contents of the list in the vector\n";
  auto range = search(v.cbegin(), v.cend(), l.cbegin(), l.cend());

  // Check if search found a match
  if (range != v.end()) {
    cout << "Sequence in list found in vector at position ["
      << distance(v.cbegin(), range) << "]\n";
  }

  cout << "Searching (9, 9, 9) in vector using search_n()\n";
  auto partial_range = search_n(v.cbegin(), v.cend(), 3, 9);
  
  // Check if search_n found a match
  if (partial_range != v.cend()) {
    cout << "Sequence (9, 9, 9) found in vector at position: ["
      << distance(v.cbegin(), partial_range) << "]\n";
  }
}
