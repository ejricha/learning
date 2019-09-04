#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void display_nums(vector<int> &v) {
  // Use the for_each() algorithm, and a lambda for printing
  for_each(v.begin(), v.end(), [](int e) { cout << " " << e; } );
}

int main() {
  // Create the vector and display it
  vector<int> nums{501, -1, 25, -35};
  display_nums(nums);

  cout << "\n\nSorting them in descending order\n";
  sort(nums.begin(), nums.end(), [](int n1, int n2){ return (n2 < n1); });
  display_nums(nums);

  cout << "\n\nSorting them in ascending order\n";
  sort(nums.begin(), nums.end(), [](int n1, int n2){ return (n1 < n2); });
  display_nums(nums);

  // Default return value is 0 for success, unnecessary
  //return 0;
}
