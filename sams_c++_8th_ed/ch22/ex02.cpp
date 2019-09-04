// ex02.cpp
//
// Lambda function that will add a user-specified value to a container
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Main function
int main() {
  vector<int> v{ 1, 5, 2, 5, 6, 4, 2, 8, 2, 1, 0, 4, 0, 9, 9, 3, 5 };
  cout << "v:";
  for_each(v.cbegin(), v.cend(), [](const auto& e){ cout << ' ' << e; });
  cout << '\n';
  
  int add;
  cout << "Enter value to add to the vector: ";
  cin >> add;

  cout << "Adding " << add << " to every element in the vector\n";
  for_each(v.begin(), v.end(), [add](auto& n) { n += add; } );

  cout << "v:";
  for_each(v.cbegin(), v.cend(), [](const auto& e){ cout << ' ' << e; });
  cout << '\n';

  cout << "Enter value to add to the vector: ";
  cin >> add;

  cout << "Adding " << add << " to every element in the vector\n";
  for_each(v.begin(), v.end(), [add](auto& n) { n += add; } );

  cout << "v:";
  for_each(v.cbegin(), v.cend(), [](const auto& e){ cout << ' ' << e; });
  cout << '\n';
}
