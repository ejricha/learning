// ex04.cpp
//
// Sort and reverse a list of strings

#include <iostream>
#include <list>
#include <string>
using namespace std;

// Overloaded display function
template <typename T>
void display(const T& container) {
  const auto begin = container.cbegin();
  const auto end = container.cend();
  for (auto it = begin; it != end; ++it) {
    cout << " " << *it;
  }
}

// Main function
int main() {
  list<string> l{"the", "man", "on", "the", "moon", "is", "watching", "me"};
  list<string> copy(l);
  
  cout << "List (normal):";
  display(l);

  cout << "\nList (sorted):";
  l.sort();
  display(l);

  cout << "\nList (reversed):";
  l = copy;
  l.reverse();
  display(l);

  cout << "\n";
}
