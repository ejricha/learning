#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// unary predicate for *_if functions
template <typename T>
bool IsEven(const T& n) {
  return (n % 2 == 0);
}

// Main function
int main() {
  vector<int> v { 2017, 0, -1, 42, 10101, 25 };

  size_t num_zeroes = count(v.cbegin(), v.cend(), 0);
  cout << "Number of instances of '0': " << num_zeroes << "\n";

  size_t num_even_nums = count_if(v.cbegin(), v.cend(), IsEven<int>);
  cout << "Number of even elements: " << num_even_nums << "\n";
  cout << "Number of odd elements: " << v.size() - num_even_nums << "\n";
}
