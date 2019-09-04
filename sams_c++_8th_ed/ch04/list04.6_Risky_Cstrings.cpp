#include <iostream>
#include <string.h>
using namespace std;

int main() {
  // This does NOT fill all 21 elements of the string to '\0',
  //  it simply sets the first value to '\0' and leaves the rest random
  //char userInput[21] = {'\0'};

  // This will instead do what we want
  char userInput[21];
  //fill_n(userInput, 4, 'n'); // Only the first 4 characters
  // All we care about is that there is a null-terminator at index 20
  userInput[20] = '\0';
  cout << "Writing over [" << userInput << "]\n";
  cout << "Enter a word NOT longer than 20 characters: \n";
  cin >> userInput;

  cout << "Length of your input was: " << strlen(userInput) << endl;

  return 0;
}
