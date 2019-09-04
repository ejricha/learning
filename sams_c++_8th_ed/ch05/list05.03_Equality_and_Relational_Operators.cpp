#include <iostream>
using namespace std;

int main() {
  cout << "Enter two integers:\n";
  int num1 = 0, num2 = 0;
  cin >> num1;
  cin >> num2;

  cout << boolalpha; // Output "false/true" instead of "0/1"

  const bool isEqual = (num1 == num2);
  cout << "Result of equality test: " << isEqual << "\n";
  
  const bool isUnequal = (num1 != num2);
  cout << "Result of inequality test: " << isUnequal << "\n";

  const bool isGreaterThan = (num1 > num2);
  cout << "Result of " << num1 << " > " << num2 << " test: " << isGreaterThan << "\n";

  const bool isLessThan = (num1 < num2);
  cout << "Result of " << num1 << " < " << num2 << " test: " << isLessThan << "\n";

  const bool isGreaterThanOrEqualTo = (num1 >= num2);
  cout << "Result of " << num1 << " >= " << num2 << " test: " << isGreaterThanOrEqualTo << "\n";

  const bool isLessThanOrEqualTo = (num1 <= num2);
  cout << "Result of " << num1 << " <= " << num2 << " test: " << isLessThanOrEqualTo << "\n";

  return 0;
}
