#include <iostream>
#include <vector>
using namespace std;

int main() {
  // Instantiate a vector with 5 elements
  vector<int> integers(5);

  cout << "Vector of integers was instantiated with\n";
  cout << "size: " << integers.size() << ", capacity: " << integers.capacity() << "\n";

  // Insert a 6th element into the vector
  integers.push_back(666);
  cout << "After inserting an additional element...\n";
  cout << "size: " << integers.size() << ", capacity: " << integers.capacity() << "\n";

  // Insert a 7th element into the vector
  integers.push_back(777);
  cout << "After inserting yet another element...\n";
  cout << "size: " << integers.size() << ", capacity: " << integers.capacity() << "\n";

  // Reserve space for only 4 elements
  integers.reserve(4);
  cout << "After reserving space for only 4 elements:\n";
  cout << "size: " << integers.size() << ", capacity: " << integers.capacity() << "\n";

  // Reserve space for 8 elements
  integers.reserve(8);
  cout << "After reserving space for 8 elements:\n";
  cout << "size: " << integers.size() << ", capacity: " << integers.capacity() << "\n";

  // Reserve space for 18 elements
  integers.reserve(18);
  cout << "After reserving space for 18 elements:\n";
  cout << "size: " << integers.size() << ", capacity: " << integers.capacity() << "\n";
}
