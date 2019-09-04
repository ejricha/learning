#include <iostream>
using namespace std;

// Declare a function
int DemoConsoleOutput();

int main() {
  // Call i.e. invoke the function
  DemoConsoleOutput();

  return 0;
}

// Define i.e. implement the previously declared function
int DemoConsoleOutput() {
  cout << "This is a simple string literal" << endl;
  cout << "Writing number five: " << 5 << endl;
  cout << "Performing division 10 / 5 = " << 10 / 5 << endl;
  cout << "Performing subtraction 10 - 5 = " << 10 - 5 << endl;
  cout << "Performing multiplication 10 * 5 = " << 10 * 5 << endl;
  cout << "Pi when approximated is 22 / 7 = " << 22 / 7 << endl;
  cout << "Pi is 22 / 7 = " << 22.0 / 7 << endl;
  cout << "Pis is also " << 22 / 7.0 << " = " << static_cast<double>(22) / 7 << endl;

  return 0;
}
