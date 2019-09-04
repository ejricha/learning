#include <iostream>
using namespace std;

int main() {
  char sayHello[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0'};
  cout << sayHello << "\n";
  cout << "Size of array: " << sizeof(sayHello) << "\n";

  cout << "Replacing space with null\n";
  sayHello[5] = '\0';
  cout << sayHello << "\n";
  cout << "Size of array: " << sizeof(sayHello) << "\n";

  return 0;
}
