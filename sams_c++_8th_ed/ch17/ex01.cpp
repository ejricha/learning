// ex01.cpp
//
// Query a vector by index

#include <iostream>
#include <vector>
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
}
