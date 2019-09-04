#include <iostream>
using namespace std;

// Class that calculates the circumference of a circle
class Circle {
 public:
  Circle() = delete; // No default constructor
  Circle(int r) : radius(r) {}
  double getCircumference() const {
    return 2 * pi * radius;
  }
  void print() const {
    cout << "Circle with radius " << radius << " has circumference " << getCircumference() << "\n";
  }

 private:
  int radius;
  static constexpr double pi = 3.14159265359;
};

// Main
int main() {
  //Circle c1;
  Circle c2(10); c2.print();
  Circle c3(20); c3.print();
}
