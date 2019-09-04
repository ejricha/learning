#include <iostream>

using namespace std;

class Base {
 public:
  virtual void someMethod() {
    cout << "Hello from Base::someMethod()\n";
  }
};

class Derived : public Base {
 public:
  virtual void someMethod(int i) {
    cout << "Derived::someMethod(int " << i << ")\n";
  }
  virtual void someOtherMethod() {
    cout << "Derived::someOtherMethod()\n";
  }
};

// Main
int main() {
  Base myBase;
  myBase.someMethod();

  Derived myDerived;
  //myDerived.someMethod(); // Won't compile, this is hidden
  myDerived.someMethod(7);
}
