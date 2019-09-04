#include <iostream>
#include <algorithm>
#include <string>
#include <list>
using namespace std;

// Templated display function
template <typename T>
void display(const T& c) {
  cout << ' ' << c.size() << " elements :";
  for_each(c.cbegin(), c.cend(), [](auto e) { cout << ' ' << e; });
  cout << '\n';
}

int main() {
  list<string> l { "John", "Brad", "jack", "sean", "Anna" };
  
  cout << "Sorted contents of the list are: ";
  l.sort();
  display(l);

  cout << "Lowest index where \"Brad\" can be inserted is: ";
  auto min_pos = lower_bound(l.cbegin(), l.cend(), "Brad");
  cout << distance(l.cbegin(), min_pos) << "\n";

  cout << "Highest index where \"Brad\" can be inserted is: ";
  auto max_pos = upper_bound(l.cbegin(), l.cend(), "Brad");
  cout << distance(l.cbegin(), max_pos) << "\n";

  cout << "\n";

  cout << "List after inserting \"Brad\" in sorted order:\n";
  l.insert(min_pos, "Brad");
  display(l);

  cout << "\n";

  cout << "Lowest index where \"Bill\" can be inserted is: ";
  min_pos = lower_bound(l.cbegin(), l.cend(), "Bill");
  cout << distance(l.cbegin(), min_pos) << "\n";
  cout << "Highest index where \"Bill\" can be inserted is: ";
  max_pos = upper_bound(l.cbegin(), l.cend(), "Bill");
  cout << distance(l.cbegin(), max_pos) << "\n";

  cout << "Lowest index where \"Bread\" can be inserted is: ";
  min_pos = lower_bound(l.cbegin(), l.cend(), "Bread");
  cout << distance(l.cbegin(), min_pos) << "\n";
  cout << "Highest index where \"Bread\" can be inserted is: ";
  max_pos = upper_bound(l.cbegin(), l.cend(), "Bread");
  cout << distance(l.cbegin(), max_pos) << "\n";

  cout << "Lowest index where \"seal\" can be inserted is: ";
  min_pos = lower_bound(l.cbegin(), l.cend(), "seal");
  cout << distance(l.cbegin(), min_pos) << "\n";
  cout << "Highest index where \"seal\" can be inserted is: ";
  max_pos = upper_bound(l.cbegin(), l.cend(), "seal");
  cout << distance(l.cbegin(), max_pos) << "\n";

  cout << "Lowest index where \"seat\" can be inserted is: ";
  min_pos = lower_bound(l.cbegin(), l.cend(), "seat");
  cout << distance(l.cbegin(), min_pos) << "\n";
  cout << "Highest index where \"seat\" can be inserted is: ";
  max_pos = upper_bound(l.cbegin(), l.cend(), "seat");
  cout << distance(l.cbegin(), max_pos) << "\n";

  cout << "\n";

  cout << "Lowest index where \"Eric\" can be inserted is: ";
  min_pos = lower_bound(l.cbegin(), l.cend(), "Eric");
  cout << distance(l.cbegin(), min_pos) << "\n";
  cout << "Highest index where \"Eric\" can be inserted is: ";
  max_pos = upper_bound(l.cbegin(), l.cend(), "Eric");
  cout << distance(l.cbegin(), max_pos) << "\n";

  cout << "List after inserting \"Eric\" in sorted order:\n";
  l.insert(min_pos, "Eric");
  display(l);

  cout << "Lowest index where \"Eric\" can be inserted is: ";
  min_pos = lower_bound(l.cbegin(), l.cend(), "Eric");
  cout << distance(l.cbegin(), min_pos) << "\n";
  cout << "Highest index where \"Eric\" can be inserted is: ";
  max_pos = upper_bound(l.cbegin(), l.cend(), "Eric");
  cout << distance(l.cbegin(), max_pos) << "\n";
}
