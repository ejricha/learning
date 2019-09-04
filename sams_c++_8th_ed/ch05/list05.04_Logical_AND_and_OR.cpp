#include <iostream>
using namespace std;

int main() {
  cout << "Enter true (1) or false (0) for two operands:\n";
  bool op1 = false, op2 = false;
  cin >> op1;
  cin >> op2;
  // Output "false/true" instead of "0/1"
  cout << boolalpha << "[" << op1 << ", " << op2 << "]\n";

  cout << "NOT: !" << op1 << " = " << !op1 << "\n";
  cout << "AND: " << op1 << " && " << op2 << " = " << (op1 && op2) << "\n";
  cout << "OR:  " << op1 << " || " << op2 << " = " << (op1 || op2) << "\n";
  cout << "XOR: " << op1 << " ^  " << op2 << " = " << (op1 || op2) << "\n";

  return 0;
}
