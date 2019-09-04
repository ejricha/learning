#include <iostream>
using namespace std;

int main() {
  cout << "Enter a number: ";
  int value;
  cin >> value;
  
  value += 8;
  cout << "After += 8, value = " << value << "\n";
  value -= 2;
  cout << "After -= 2, value = " << value << "\n";
  value /= 4;
  cout << "After /= 4, value = " << value << "\n";
  value *= 4;
  cout << "After *= 4, value = " << value << "\n";
  value %= 1000;
  cout << "After %= 1000, value = " << value << "\n";

  // Note: henceforth assignment happens within cout
  cout << "After <<= 1, value = " << (value <<= 1) << "\n";
  cout << "After >>= 2, value = " << (value >>= 2) << "\n";

  cout << "After |= 0x55, value = " << (value |= 0x55) << "\n";
  cout << "After ^= 0x55, value = " << (value ^= 0x55) << "\n";
  cout << "After &= 0x0F, value = " << (value &= 0x0F) << "\n";

  return 0;
}
