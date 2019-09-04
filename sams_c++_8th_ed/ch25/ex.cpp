// ex.cpp
//
// Add two bitset objects, and toggle the bits in one of them
#include <iostream>
#include <algorithm>
#include <bitset>
using namespace std;

// Main function
int main() {
  // Create the two bitsets
  bitset<8> b1(0b0110'0100);
  bitset<8> b2(0b1101'0111);
  cout << "b1 = " << b1 << " (" << b1.to_ulong() << ")\n";
  cout << "b2 = " << b2 << " (" << b2.to_ulong() << ")\n";
  
  cout << "Add two bitsets together (b1 + b2):\n";
  // Add an extra bit to account for overflow
  bitset<9> b3(b1.to_ulong() + b2.to_ulong());
  cout << "b3 = " << b3 << " (" << b3.to_ulong() << ")\n";

  cout << "Toggle the bits in b3:\n";
  cout << "~b3 = " << ~b3 << " (" << (~b3).to_ulong() << ")\n";
  b3.flip();
  cout << "b3.flip() = " << b3 << " (" << b3.to_ulong() << ")\n";
}
