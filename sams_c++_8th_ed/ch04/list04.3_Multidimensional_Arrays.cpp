#include <iostream>
using namespace std;

int main() {
  int threeRowsThreeColumns[3][3] = \
    {{-501, 205, 2016}, {989, 101, 206}, {303, 456, 596}};

  cout << "Row 0: " << threeRowsThreeColumns[0][0] << " " \
    << threeRowsThreeColumns[0][1] << " " \
    << threeRowsThreeColumns[0][2] << "\n";
  cout << "Row 1: " << threeRowsThreeColumns[1][0] << " " \
    << threeRowsThreeColumns[1][1] << " " \
    << threeRowsThreeColumns[1][2] << "\n";
  cout << "Row 2: " << threeRowsThreeColumns[2][0] << " " \
    << threeRowsThreeColumns[2][1] << " " \
    << threeRowsThreeColumns[2][2] << "\n";

  return 0;
}
