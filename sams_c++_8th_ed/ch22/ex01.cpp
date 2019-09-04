// ex01.cpp
//
// Lambda binary predicate that helps sort elements in a container in descending order
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Main function
int main() {
  // Vector of integers
  vector<int> v{ 1, 5, 2, 5, 6, 4, 2, 8, 2, 1, 0, 4, 0, 9, 9, 3, 5 };
  
  cout << "v:";
  for_each(v.cbegin(), v.cend(), [](const auto& e){ cout << ' ' << e; });
  cout << '\n';

  cout << "Sorting v normally\n";
  sort(v.begin(), v.end()); // Default to ::less

  cout << "v:";
  for_each(v.cbegin(), v.cend(), [](const auto& e){ cout << ' ' << e; });
  cout << '\n';

  cout << "Sorting v in descending order\n";
  sort(v.begin(), v.end(), [](const auto& e1, const auto& e2) -> bool {
      return (e1 > e2); } );

  cout << "v:";
  for_each(v.cbegin(), v.cend(), [](const auto& e){ cout << ' ' << e; });
  cout << '\n';
}
