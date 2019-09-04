#include <iostream>
#include <bitset> // No longer needed since we're printing in binary
using namespace std;

int main() {
  cout << "Enter a number (0 - 255): ";
  unsigned short inputNum;
  cin >> inputNum;
  
  const bitset<8> inputBits(inputNum);
  cout << inputNum << " in binary is " << inputBits << "\n";

  cout << "Bitwise NOT ~\n";
  const bitset<8> bitwiseNOT = (~inputNum);
  cout << "~" << inputBits << " = " << bitwiseNOT << "\n";

  cout << "Bitwise AND, & with 00001111\n";
  const bitset<8> bitwiseAND = (0x0F & inputNum);
  cout << "00001111 & " << inputBits << " = " << bitwiseAND << "\n";

  cout << "Bitwise OR, & with 00001111\n";
  const bitset<8> bitwiseOR = (0x0F | inputNum);
  cout << "00001111 | " << inputBits << " = " << bitwiseOR << "\n";

  cout << "Bitwise XOR, & with 00001111\n";
  const bitset<8> bitwiseXOR = (0x0F ^ inputNum);
  cout << "00001111 ^ " << inputBits << " = " << bitwiseXOR << "\n";


  return 0;
}
