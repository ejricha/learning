#include <iostream>
using namespace std;

template<typename T>
class Static {
 public:
  static int staticVal;
};

// What if we forget this?
// Static member initialization
template<typename T> int Static<T>::staticVal;

// Main function
int main() {
  // Test with a few int instances
  Static<int> int1;
  Static<int> int2;
  cout << "Static value for int is " << int1.staticVal << " = " << int2.staticVal << "\n";
  cout << " int1.staticVal = 110\n";
  int1.staticVal = 110;
  cout << "Static value for int is " << int1.staticVal << " = " << int2.staticVal << "\n";
  cout << " int2.staticVal = 120\n";
  int2.staticVal = 120;
  cout << "Static value for int is " << int1.staticVal << " = " << int2.staticVal << "\n";

  Static<double> double1;
  Static<double> double2;
  cout << "Static value for double is " << double1.staticVal << " = " << double2.staticVal << "\n";
  cout << " double1.staticVal = 210\n";
  double1.staticVal = 210;
  cout << "Static value for double is " << double1.staticVal << " = " << double2.staticVal << "\n";
  cout << " double2.staticVal = 220\n";
  double2.staticVal = 220;
  cout << "Static value for double is " << double1.staticVal << " = " << double2.staticVal << "\n";
  cout << "Static value for int is " << int1.staticVal << " = " << int2.staticVal << "\n";
}
