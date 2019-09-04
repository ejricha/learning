#include <iostream>
using namespace std;

int main() {
  cout << "How many Fibonacci Numbers would you like to calculate? ";
  int numsToCalculate;
  cin >> numsToCalculate;

  int num1 = 0, num2 = 1, numTemp;
  if (numsToCalculate >= 1) {
    cout << num1 << " ";
    if (numsToCalculate >= 2) {
      cout << num2 << " ";
    }
  }

  for (int counter = 2; counter < numsToCalculate; ++counter) {
    numTemp = num1 + num2;
    cout << numTemp << " ";

    num1 = num2;
    num2 = numTemp;
  }

  cout << "\nGoodbye!\n";

  return 0;
}
