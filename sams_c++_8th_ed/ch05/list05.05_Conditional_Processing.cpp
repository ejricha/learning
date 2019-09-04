#include <iostream>
using namespace std;

int main() {
  cout << "Use boolean values (0/1) to answer the questions\n";
  cout << "Is it raining? ";
  bool isRaining = false;
  cin >> isRaining;

  cout << "Do you have buses on the streets? ";
  bool busesPly = false;
  cin >> busesPly;

  // Conditional statement uses logical AND and NOT
  if (isRaining && !busesPly) {
    cout << "You cannot go to work\n";
  }
  else {
    cout << "You can go to work\n";
  }
  
  if (busesPly) {
    if (isRaining) {
      cout << "Take an umbrella\n";
    }
    else {
      cout << "Enjoy the sun and have a nice day\n";
    }
  }

  return 0;
}
