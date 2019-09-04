#include <iostream>
#include <bitset> // No longer needed since we're printing in binary
using namespace std;

int main() {
  cout << "Enter two boolean values (0 or 1):\n";
  bool op1 = false, op2 = false;
  cin >> op1;
  cin >> op2;
  
  // Output "false/true" instead of "0/1"
  cout << boolalpha << "[" << op1 << ", " << op2 << "]\n";

  // These produce warnings, and the result is -1 or -2
  //cout << "Bitwise NOT : ~" << op1 << " = " << ~op1 << "\n";
  //cout << "Bitwise NOT : ~" << op2 << " = " << ~op2 << "\n";

  // These work fine
  cout << "Bitwise AND : " << op1 << " & " << op2 << " = " << (op1 & op2) << "\n";
  cout << "Bitwise OR  : " << op1 << " | " << op2 << " = " << (op1 | op2) << "\n";
  cout << "Bitwise XOR : " << op1 << " ^ " << op2 << " = " << (op1 ^ op2) << "\n";

  return 0;
}
