#include <iostream>
using namespace std;

enum Colors { Red = 1, Orange, Yellow, Green, Blue, Purple };

int main() {
  cout << "Enter a number 1 through 6: ";
  int c;
  cin >> c;
  switch (c) {
     case Red:
       cout << "Red (" << c << ") is a color in the rainbow\n";
       break;

     case Orange:
       cout << "Orange (" << c << ") is a color in the rainbow\n";
       break;

     case Yellow:
       cout << "Yellow (" << c << ") is a color in the rainbow\n";
       break;

     case Green:
       cout << "Green (" << c << ") is a color in the rainbow\n";
       break;

     case Blue:
       cout << "Blue (" << c << ") is a color in the rainbow\n";
       break;

     case Purple:
       cout << "Purple (" << c << ") is a color in the rainbow\n";
       break;
  
     default:
       cout << "Invalid rainbow color (" << c << ")\n";
       break;
  }

  return 0;
}
