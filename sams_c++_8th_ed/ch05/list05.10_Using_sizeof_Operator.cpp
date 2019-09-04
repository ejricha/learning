#include <iostream>
using namespace std;

int main() {
  cout << "Use sizeof to determine memory used by arrays\n";
  int myNumbers[100] = {};

  cout << "Bytes used by an int: " << sizeof(int) << "\n";
  cout << "Bytes used by myNumbers: " << sizeof(myNumbers) << "\n";
  cout << "Bytes used by an element: " << sizeof(myNumbers[0]) << "\n";

  return 0;
}
