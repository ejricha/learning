// fibonacci_iterative.cpp
#include <iostream>
#include <vector>
using namespace std;

// Calculate n fibonacci numbers
void calculate_fibonacci(vector<uint64_t> &fib, int n);

// Main function
int main() {
  // Ask for user input
  cout << "Enter number between 1 and 93 : ";
  int n;
  cin >> n;

  // Error checking
  if (n < 1 || n > 93) {
    cout << n << " is out of range [1, 93], exiting\n";
    return 1;
  }

  // Reserve some numbers
  vector<uint64_t> fib(n); // Like running fib.reserve(n) later
  calculate_fibonacci(fib, n);

  // Print the result
  for (int i = 0; i < n; ++i) {
    cout << i + 1 << " = " << fib[i] << "\n";
  }
}

// Function definition, uses tabulation
void calculate_fibonacci(vector<uint64_t> &fib, int n) {
  // Starting conditions
  fib[0] = 1;
  fib[1] = 1;

  // Loop until the last number is calculated
  for (int i = 2; i < n; ++i) {
    fib[i] = fib[i-1] + fib[i-2];
  }
}
