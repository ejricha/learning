#include <iostream>
using namespace std;

int main() {
  cout << "Enter a number: ";
  unsigned short inputNum;
  cin >> inputNum;
  
  const int halfNum = inputNum >> 1;
  const int quarterNum = inputNum >> 2;
  const int doubleNum = inputNum << 1;
  const int quadrupleNum = inputNum << 2;

  cout << "Quarter: " << quarterNum << "\n";
  cout << "Half: " << halfNum << "\n";
  cout << "Double: " << doubleNum << "\n";
  cout << "Quadruple: " << quadrupleNum << "\n";

  return 0;
}
