#include <iostream>
using namespace std;

int main() {
  cout << "Answer questions with 0 or 1\n";
  cout << "Is there a discount on your favorite car? ";
  bool onDiscount;
  cin >> onDiscount;

  cout << "Did you get a fantastic bonus? ";
  bool fantasticBonus;
  cin >> fantasticBonus;

  if (onDiscount || fantasticBonus) {
    cout << "Congratulations, you can buy that car!\n";
  }
  else {
    cout << "Sorry, waiting a while is a good idea\n";
  }

  if (!onDiscount) {
    cout << "Car not on discount\n";
  }

  return 0;
}
