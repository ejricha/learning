#include <iostream>
using namespace std;
constexpr int Square(int number) { return number * number; }

int main() {
  const int ARRAY_LENGTH = 4;

  // Array of 5 integers, initialized using a const
  int myNumbers[] = {5, 10, 0, -101, 20, 5, 6};

  // Using a constexpr for an array of 25 integers
  int moreNumbers[Square(ARRAY_LENGTH)] = {2};

  cout << "Enter index of the element to be changed: ";
  int elementIndex = 0;
  cin >> elementIndex;

  cout << "Enter new value: ";
  int newValue = 0;
  cin >> newValue;
  myNumbers[elementIndex] = newValue;
  moreNumbers[elementIndex] = newValue;

  cout << "Element " << elementIndex << " in array myNumbers is: ";
  cout << myNumbers[elementIndex] << "\n";

  cout << "Element " << elementIndex << " in array moreNumbers is: ";
  cout << moreNumbers[elementIndex] << "\n";

  return 0;
}
