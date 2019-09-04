#include <iostream>
using namespace std;

int main() {
  auto coinFlippedHeads = true;
  auto largeNumber = 250'000'000;
  auto hugeNumber = 250'000'000'000;

  cout << "coinFlippedHeads = " << coinFlippedHeads;
  cout << " , sizeof(coinFlippedHeads) = " << sizeof(coinFlippedHeads) << "\n";
  cout << "largeNumber = " << largeNumber;
  cout << " , sizeof(largeNumber) = " << sizeof(largeNumber) << "\n";
  cout << "hugeNumber = " << hugeNumber;
  cout << " , sizeof(hugeNumber) = " << sizeof(hugeNumber) << endl;

  return 0;
}
