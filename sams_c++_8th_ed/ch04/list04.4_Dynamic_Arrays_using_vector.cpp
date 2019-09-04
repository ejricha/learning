#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> dynArray(3); // dynamic array of int

  dynArray[0] = 365;
  dynArray[1] = -421;
  dynArray[2] = 789;

  cout << "Number of integers in array: " << dynArray.size()
   << " of " << dynArray.capacity() << "\n";
  cout << "Last element in array: "
    << dynArray[dynArray.size() - 1] << "\n";

  cout << "Enter another element to insert\n";
  int newValue = 0;
  cin >> newValue;
  dynArray.push_back(newValue);

  cout << "Number of integers in array: " << dynArray.size()
   << " of " << dynArray.capacity() << "\n";
  cout << "Last element in array: "
    << dynArray[dynArray.size() - 1] << "\n";

  return 0;

  return 0;
}
