#include <iostream>
#include <cstdint>

int main() {
  using namespace std;
  cout << "Computing the size of some C++ inbuilt variable types\n";

  cout << "Size of bool: " << sizeof(bool) << "\n";
  cout << "Size of char: " << sizeof(char) << "\n";
  cout << "Size of unsigned short int: " << sizeof(unsigned short int) << "\n";
  cout << "Size of short int: " << sizeof(short int) << "\n";
  cout << "Size of unsigned long int: " << sizeof(unsigned long int) << "\n";
  cout << "Size of long: " << sizeof(long) << "\n";
  cout << "Size of int: " << sizeof(int) << "\n";
  cout << "Size of unsigned long long: " << sizeof(unsigned long long) << "\n";
  cout << "Size of long long: " << sizeof(long long) << "\n";
  cout << "Size of unsigned int: " << sizeof(unsigned int) << "\n";
  cout << "Size of float: " << sizeof(float) << "\n";
  cout << "Size of double: " << sizeof(double) << "\n";
  cout << "Size of int8_t: " << sizeof(int8_t) << "\n";
  cout << "Size of uint8_t: " << sizeof(uint8_t) << "\n";
  cout << "Size of int16_t: " << sizeof(int16_t) << "\n";
  cout << "Size of uint16_t: " << sizeof(uint16_t) << "\n";
  cout << "Size of int32_t: " << sizeof(int32_t) << "\n";
  cout << "Size of uint32_t: " << sizeof(uint32_t) << "\n";
  cout << "Size of int64_t: " << sizeof(int64_t) << "\n";
  cout << "Size of uint64_t: " << sizeof(uint64_t) << "\n";

  cout << "The output changes with compiler, hardware, and OS" << endl;

  return 0;
}
