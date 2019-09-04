#include <iostream>
using namespace std;

int main() {
  unsigned int unsigned_int;
  int normal_int;
  signed signed_int;
  long long_int;
  long long long_long_int;

  cout << "Size of unsigned int: " << sizeof(unsigned int) << " = " << sizeof(unsigned_int) << "\n";
  cout << "Size of normal int: " << sizeof(int) << " = " << sizeof(normal_int) << "\n";
  cout << "Size of signed int: " << sizeof(signed) << " = " << sizeof(signed_int) << "\n";
  cout << "Size of long int: " << sizeof(long int) << " = " << sizeof(long_int) << endl;
  cout << "Size of long long int: " << sizeof(long long int) << " = " << sizeof(long_long_int) << endl;
  
  return 0;
}
