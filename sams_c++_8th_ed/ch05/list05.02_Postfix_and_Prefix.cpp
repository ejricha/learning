#include <iostream>
using namespace std;

int main() {
  int startValue = 101;
  cout << "Start value of integer being operated on: " << startValue << "\n";

  int postfixIncrement = startValue++;
  cout << "Result of Postfix increment = " << postfixIncrement << "\n";
  cout << "After Postfix Increment, startValue = " << startValue << "\n";

  startValue = 101; // Reset
  int prefixIncrement = ++startValue;
  cout << "Result of Prefix increment = " << prefixIncrement << "\n";
  cout << "After Prefix Increment, startValue = " << startValue << "\n";

  startValue = 101; // Reset
  int postfixDecrement = startValue--;
  cout << "Result of Postfix Decrement = " << postfixDecrement << "\n";
  cout << "After Postfix Decrement, startValue = " << startValue << "\n";

  startValue = 101; // Reset
  int prefixDecrement = --startValue;
  cout << "Result of Prefix Decrement = " << prefixDecrement << "\n";
  cout << "After Prefix Decrement, startValue = " << startValue << "\n";

  return 0;
}
