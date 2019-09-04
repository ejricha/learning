// ex.cpp
//
// Actually test all the exercises in Lesson 14

#include <iostream>
using namespace std;

// ex01
#define MULTIPLY(x, y) ((x) * (y))

// ex02
template <typename T1, typename T2>
T1 multiply(const T1& t1, const T2& t2) {
  return t1 * t2; // Assumes the return type is the first type
}

// ex03
template <typename T>
void swap(const T& t1, const T& t2) {
  T t3 = t1;
  t1 = t2;
  t2 = t3;
}

// ex04
#define QUARTER(x) ((x) / 4.0)

// ex05
template <typename T1, typename T2>
class TwoArrays {
 public:
  // Default constructor is deleted
  TwoArrays() = delete;
  // Constructor that takes an element for each type
  TwoArrays(const T1& t1, const T2& t2) {
    fillArray1(t1);
    fillArray2(t2);
  }

  // Get each of the arrays, and the size
  const T1* getArray1() const {
    return a1;
  }
  const T2* getArray2() const {
    return a2;
  }
  short getSize() const {
    return arraySize;
  }

  // Show the arrays
  void printArrays() const {
    size_t x;
    x = sizeof(a1);
    cout << " a1 has " << x << " elements";
    x *= sizeof(T1);
    cout << " (" << x << " bytes total) : ";
    printArray1();
    x = sizeof(a2);
    cout << " a2 has " << x << " elements";
    x *= sizeof(T2);
    cout << " (" << x << " bytes total) : ";
    printArray2();
  }
  void printArray1() const {
    for (int i = 0; i < arraySize; ++i) {
      cout << " " << a1[i];
    }
    cout << "\n";
  }
  void printArray2() const {
    for (int i = 0; i < arraySize; ++i) {
      cout << " " << a2[i];
    }
    cout << "\n";
  }

  // Fill the arrays
  void fillArray1(const T1& t1) {
    for (int i = 0; i < arraySize; ++i) {
      a1[i] = t1;
    }
  }
  void fillArray2(const T2& t2) {
    for (int i = 0; i < arraySize; ++i) {
      a2[i] = t2;
    }
  }

 private:
  // Data member arrays are private
  static const short arraySize = 10;
  T1 a1[arraySize];
  T2 a2[arraySize];
}; // class TwoArrays

// ex06
// Handle no args
void Display() {}
// Variadic Template
template <typename T, typename... Others>
void Display(const T& t, Others... o) {
  const size_t n = sizeof...(o);
  cout << " " << n << " : " << t << "\n";
  Display(o ...);
}

// Main
int main() {
  cout << "\nex01.\n";
  cout << "MULTIPLY(2, 3) = " << MULTIPLY(2, 3) << " == " << 2 * 3 << "\n";
  cout << "MULTIPLY(2+2, 3-1) = " << MULTIPLY(2+2, 3-1) << " == " << (2+2) * (3-1) << "\n";
  cout << "MULTIPLY(2.3, 3) = " << MULTIPLY(2.3, 3) << " == " << 2.3*3 << "\n";
  cout << "MULTIPLY(2, 2.3) = " << MULTIPLY(3, 2.3) << " == " << 3*2.3 << "\n";

  cout << "\nex02.\n";
  cout << "multiply(2, 3) = " << multiply(2, 3) << " == " << 2 * 3 << "\n";
  cout << "multiply(2+2, 3-1) = " << multiply(2+2, 3-1) << " == " << (2+2) * (3-1) << "\n";
  cout << "multiply(2.3, 3) = " << multiply(2.3, 3) << " == " << 2.3*3 << "\n";
  cout << "multiply(3, 2.3) = " << multiply(3, 2.3) << " == " << 3*2 << " // because int\n";

  cout << "\nex03.\n";
  int i1 = 2;
  int i2 = 3;
  double d1 = 4.4;
  double d2 = 5.5;
  cout << "swap(" << i1 << ", " << i2 << ") : ";
  swap(i1, i2);
  cout << "i1 = " << i1 << ", i2 = " << i2 << "\n";
  cout << "swap(" << i1 << ", " << i2 << ") : ";
  swap(i1, i2);
  cout << "i1 = " << i1 << ", i2 = " << i2 << "\n";
  cout << "swap(" << d1 << ", " << d2 << ") : ";
  swap(d1, d2);
  cout << "d1 = " << d1 << ", d2 = " << d2 << "\n";
  cout << "swap(" << i1 << ", " << d2 << ") fails because int != double\n";
  //swap(i1, d2); // error: no matching function for call to ‘swap(int&, double&)’
  cout << "i1 = " << i1 << ", d2 = " << d2 << "\n";

  cout << "\nex04.\n";
  cout << "QUARTER(13) = " << QUARTER(13) << "\n";
  cout << "QUARTER(13.) = " << QUARTER(13.) << "\n";

  cout << "\nex05.\n";
  cout << "arrayIntString:\n";
  TwoArrays<int, string> arrayIntString(1, "nothing");
  arrayIntString.printArrays(); 
  cout << "arrayIntString set to 7 and \"potato\":\n";
  arrayIntString.fillArray1(7);
  arrayIntString.fillArray2("potato");
  arrayIntString.printArrays(); 
  cout << "arrayCharDouble:\n";
  TwoArrays<char, double>* arrayCharDouble = new TwoArrays<char, double>('p', -12.21);
  arrayCharDouble->printArrays();
  cout << "arrayCharDouble set to 'x' and 3.2123:\n";
  arrayCharDouble->fillArray1('x');
  arrayCharDouble->fillArray2(3.2123);
  arrayCharDouble->printArrays(); 

  cout << "\nex06.\n";
  cout << "Display()\n";
  Display();
  cout << "Display(999)\n";
  Display(999);
  cout << "Display(1, 2)\n";
  Display(1, 2);
  cout << "Display(1, 2, 3)\n";
  Display(1, 2, 3);
  cout << "Display(4, 5.1, \"six\", '7', 8, 90/10)\n";
  Display(4, 5.1, "six", '7', 8, 90/10);
}
