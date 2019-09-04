#include <iostream>
#include <math.h> // For M_PI
using namespace std;

// Functions to get Area and Circumference given a Radius
double getArea(const double radius) {
  return M_PI * radius * radius;
}
double getCircumference(const double radius) {
  return 2 * M_PI * radius;
}

int main() {
  cout << "Input a radius as a double: ";
  double radius;
  cin >> radius;
  cout << "Area is " << getArea(radius) << "\n";
  cout << "Circumference is " << getCircumference(radius) << endl;
  
  return 0;
}
