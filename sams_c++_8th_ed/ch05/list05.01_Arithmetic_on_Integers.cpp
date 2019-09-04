#include <iostream>
using namespace std;

int main() {
  cout << "Enter two integers:\n";
  int num1 = 0, num2 = 0;
  cin >> num1;
  cin >> num2;

  cout << num1 << " + " << num2 << " = " << num1 + num2 << "\n";
  cout << num1 << " - " << num2 << " = " << num1 - num2 << "\n";
  cout << num1 << " * " << num2 << " = " << num1 * num2 << "\n";
  cout << num1 << " / " << num2 << " = " << num1 / num2 << "\n";
  cout << num1 << " % " << num2 << " = " << num1 % num2 << "\n";

  return 0;
}
