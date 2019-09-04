#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Check if a number is divisible by Divisor
template <typename T>
struct IsMultiple {
  T Divisor;  // Member variable
  IsMultiple(const T& divisor) : Divisor(divisor) { }  // Constructor
  bool operator()(const T& e) const { return (e % Divisor == 0); }  // Operator
};

// Function template
template <typename T>
void display(const T& c) {
  for (auto it = c.cbegin(); it != c.cend(); ++it) {
    cout << ' ' << *it;
  }
  cout << '\n';
}

// Main function
int main() {
  vector<int> v{ 25, 26, 27, 28, 29, 30, 31, 32, 33 };
  const int divisor = 3;
  cout << "Checking for numbers divisible by " << divisor << " in v:";
  display(v);
  auto e = find_if(v.cbegin(), v.cend(), IsMultiple<int>(divisor));
  if (e != v.cend()) {
    cout << "First element divisible by " << divisor << " = " << *e << "\n";
    // Loop until we're done
    do {
      ++e;
      e = find_if(e, v.cend(), IsMultiple<int>(divisor));
      if (e != v.cend()) {
        cout << "Next element divisible by " << divisor << " = " << *e << "\n";
      }
    } while (e != v.cend());
    cout << "No more elements divisible by " << divisor << "\n";
  }
  else {
    cout << "No elements divisible by " << divisor << "\n";
  }

}
