#include <iostream>
using namespace std;

enum CardinalDirections {
  North = 25,
  South,
  East,
  West
};

// Can't have this because West conflicts,
//  must use scoped enum (enum class) instead
/*
enum FamousAdams {
  Family = 61,
  Savage,
  West
};
*/

enum class ScopedNumbers {
  Zero = 0,
  One,
  Two,
  Three
};

int main() {
  cout << "Displaying directions and their symbolic values\n";
  cout << "North: " << North << "\n";
  cout << "South: " << South << "\n";
  cout << "East: " << East << "\n";
  cout << "West: " << West << "\n";

  CardinalDirections windDirection = South;
  cout << "Variable windDirection = " << windDirection << endl;

  // Cannot output value of scoped enums
  /*
  cout << "Displaying numbers and their values\n";
  cout << "One: " << ScopedNumbers::One << "\n";
  cout << "Two: " << ScopedNumbers::Two << "\n";
  cout << "Three: " << ScopedNumbers::Three << "\n";
  cout << "Four: " << ScopedNumbers::Four << "\n";
  */

  ScopedNumbers n = ScopedNumbers::Two;
  //cout << "Variable n = " << n << "\n";
  cout << "Variable n is @ " << &n << "\n";

  return 0;
}
