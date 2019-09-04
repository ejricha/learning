#include <iostream>
using namespace std;

int main() {
  int myNumbers[5] = {34, 56, -21, 5002, 365};

  for (auto i = 0; i < 5; ++i) {
    cout << "myNumbers[" << i << "] = " << myNumbers[i] << "\n";
  }

  return 0;
}
