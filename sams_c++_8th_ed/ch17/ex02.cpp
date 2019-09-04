// ex02.cpp
//
// Find a value in the vector

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Main function
int main() {
  const size_t num_elements = 5;
  cout << "Input " << num_elements << " integers: ";
  vector<int> v(num_elements);
  for (size_t i = 0; i < num_elements; ++i) {
    cin >> v[i];
  }
  cout << "Input an index to display: ";
  size_t i;
  cin >> i;
  if (i < num_elements) {
    cout << "v[" << i << "] = " << v[i] << "\n";
    cout << "v.at(" << i << ") = " << v.at(i) << "\n";
    cout << "*(v.begin() + " << i << ") = " << *(v.begin() + i) << "\n";
  }
  else {
    cout << "Invalid index " << i << ", range is [0, " << num_elements << ")\n";
  }

  cout << "Search for a value: ";
  int search_num;
  cin >> search_num;
  auto it = find(v.begin(), v.end(), search_num);
  if (it != v.end()) {
    cout << "Found " << search_num << " at index " << distance(v.begin(), it)
      << ": " << *it << "\n";
  }
  else {
    cout << "Could not find " << search_num << " in vector\n";
  }
}
