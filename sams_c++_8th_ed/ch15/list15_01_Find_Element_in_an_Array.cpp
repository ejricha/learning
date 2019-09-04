#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Main
int main() {
  // A dynamic array of integers
  vector<int> intArray {50, 2991, 23, 9999};
  cout << "The contents of the vector are:\n";

  // Walk the vector and read values using an iterator
  // arrIterator here is really vector<int>::iterator
  //
  const auto arrayBegin = intArray.begin();
  const auto arrayEnd = intArray.end();
  auto arrIterator = arrayBegin;
  while (arrIterator != arrayEnd) {
    cout << " " << *arrIterator;
    ++arrIterator; // Go to the next element
  }
  cout << "\n";

  // Find an element e.g. 9999 using the 'find' algorithm
  // Also print if it was found, and its location
  auto elFound = find(arrayBegin, arrayEnd, 9999);
  int elPos;
  if (elFound != arrayEnd) {
    // Determine the position of element using distance
    elPos = distance(arrayBegin, elFound);
    cout << "Value " << *elFound << " found at position " << elPos << " in the vector\n";
  }
  else {
    cout << "Value 9999 not found in the vector\n";
  }
  elFound = find(arrayBegin, arrayEnd, 2992);
  if (elFound != arrayEnd) {
    // Determine the position of element using distance
    elPos = distance(arrayBegin, elFound);
    cout << "Value " << *elFound << " found at position " << elPos << " in the vector\n";
  }
  else {
    cout << "Value 2992 not found in the vector\n";
  }
} 
