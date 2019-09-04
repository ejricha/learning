// list19.02_Inserting_Elements_into_set_and_multiset.cpp
//
// Insert elements into a set and a multiset
// Also test parts of Listing 19.1, by overriding the sort order

#include <iostream>
#include <set>
using namespace std;

// Override the sort order
template <typename T>
class SortDescending {
  public: bool operator()(const T& lhs, const T& rhs) const {
    return (lhs > rhs); // Ascending would be (lhs < rhs)
  }
};

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
  // Normal set
  set<int> set_ints{202, 151, -999, -1};
  cout << "set_ints:"; display(set_ints); cout << "\n";
  cout << "Inserting -1 into set_ints\n";
  set_ints.insert(-1); // duplicate
  cout << "set_ints:"; display(set_ints); cout << "\n";

  // Multiset
  multiset<int> multiset_ints;
  multiset_ints.insert(set_ints.begin(), set_ints.end());
  cout << "\nmultiset_ints:"; display(multiset_ints); cout << "\n";
  cout << "Inserting -1 into multiset_ints\n";
  multiset_ints.insert(-1);
  cout << "multiset_ints:"; display(multiset_ints); cout << "\n";

  // Multiset in descending order
  multiset<int, SortDescending<int> > multiset_descending;
  // Cannot directly copy-construct from set<int>, but can copy via iterators
  multiset_descending.insert(multiset_ints.begin(), multiset_ints.end());
  cout << "\nmultiset_descending:"; display(multiset_descending); cout << "\n";
  cout << "Inserting -1 into multiset_descending\n";
  multiset_descending.insert(-1);
  cout << "multiset_descending:"; display(multiset_descending); cout << "\n";

  // Count the number of -1s inserted into each 
  cout << "\nNumber of instances of -1 in each set:\n";
  cout << "set_ints: " << set_ints.count(-1) << "\n";
  cout << "multiset_ints: " << multiset_ints.count(-1) << "\n";
  cout << "multiset_descending: " << multiset_descending.count(-1) << "\n";
}
