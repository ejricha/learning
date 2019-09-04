#include <iostream>
using namespace std;

template<typename T1 = int, typename T2 = double>
class HoldsPair {
 private:
  T1 value1;
  T2 value2;
 public:
  // Constructor
  HoldsPair(const T1& val1, const T2& val2)
    : value1(val1), value2(val2) {}

  // Access functions
  const T1& getFirstValue() const {
    return value1; // Returns a const, and cannot change the value
  }
  T2& getSecondValue() { // Non-const, which is an error!
    return value2;
  }
}; // template<> class HoldsPair

// Specialization of HoldsPair for types int,int here
template<> class HoldsPair<int, int> {
 private:
  int value1;
  int value2;
  string s;
 public:
  // Constructor
  HoldsPair(const int& val1, const int& val2)
    : value1(val1), value2(val2), s("Great fun!") {}

  // Access function (getSecondValue() remains unimplemented)
  const int& getFirstValue() const {
    cout << "Returning integer " << value1 << "\n";
    return value1; // Returns a const, and cannot change the value
  }
}; // template<> class HoldsPair<int, int>

// Main
int main() {
  int i, j = 99;
  double d;

  // Use the general template
  HoldsPair<int, double> pairIntDouble(11, 1.234);
  i = pairIntDouble.getFirstValue();
  d = pairIntDouble.getSecondValue();
  cout << "pairIntDouble holds (" << i << ", " << d << ")\n";
  cout << "incrementing i=" << ++i << " and d=" << ++d << "\n";
  i = pairIntDouble.getFirstValue();
  d = pairIntDouble.getSecondValue();
  cout << "pairIntDouble holds (" << i << ", " << d << ")\n";
  cout << "incrementing getFirstValue() directly results in an error\n";
  //++pairIntDouble.getFirstValue(); // error: increment of read-only location
  cout << "incrementing getSecondValue() directly works, because it is not const\n";
  ++pairIntDouble.getSecondValue();
  i = pairIntDouble.getFirstValue();
  d = pairIntDouble.getSecondValue();
  cout << "pairIntDouble holds (" << i << ", " << d << ")\n";
  
  cout << "\n";

  // Use the specialized template
  HoldsPair<int, int> pairIntInt(22, 32);
  i = pairIntInt.getFirstValue();
  //j = pairIntInt.getSecondValue(); // class HoldsPair<int, int>’ has no member named ‘getSecondValue’
  cout << "pairIntInt holds (" << i << ", " << j << ")\n";
  cout << "incrementing i=" << ++i << " and j=" << ++j << "\n";
  i = pairIntInt.getFirstValue();
  cout << "pairIntInt holds (" << i << ", " << j << ")\n";
  cout << "incrementing getFirstValue() directly results in an error\n";
  //++pairIntInt.getFirstValue(); // error: increment of read-only location
}
