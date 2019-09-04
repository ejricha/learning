// const_pointers_and_references.cpp
//
// Test of various combinations of const-ness to pointers and references,
//  to see which are valid and which throw compile errors

#include <iostream>
using namespace std;

// Functions to pass by value, reference, and pointer
void by_value(int x);
void by_const_value(const int x);
void by_reference(int &x);
void by_const_reference(const int &x);
void by_pointer(int *x);
void by_const_pointer(const int *x);

// Main
int main() {
  // Three integers
  int i = 10;
  int j = 20;
  int k = 30;

  // Pointer to an integer
  cout << "// Pointer to an integer\n";
  int* p_i = &i;
  cout << "int* p_i = &i;\n";
  ++(*p_i); // *p_i = 11
  cout << "++(*p_i); // *p_i = " << *p_i << "\n";
  p_i = &j; // *p_i = 20
  cout << "p_i = &j; // *p_i = " << *p_i << "\n\n";

  // Pointer to an integer constant
  cout << "// Pointer to an integer constant\n";
  const int* p_ic = &i;
  cout << "const int* p_ic = &i;\n";
  //++(*p_ic); // error: increment of read-only location ‘* p_ic’
  cout << "++(*p_ic); // error: increment of read-only location ‘* p_ic’\n\b";
  p_ic = &j; // *p_ic = 20
  cout << "p_ic = &j; // *p_ic = " << *p_ic << "\n\n";

  // Constant pointer to an integer
  cout << "// Constant pointer to an integer\n";
  int* const cp_i = &i;
  cout << "int* const cp_i = &i;\n";
  ++(*cp_i); // *p_i = 12
  cout << "++(*cp_i); // *cp_i = " << *cp_i << "\n";
  //cp_i = &j; // error: assignment of read-only variable ‘cp_i’
  cout << "cp_i = &j; // error: assignment of read-only variable ‘cp_i’\n\n";
  
  // Constant pointer to an integer constant
  cout << "// Constant pointer to an integer constant\n";
  const int* const cp_ic = &i;
  cout << "const int* const cp_ic = &i;\n";
  //++(*cp_ic); // error: increment of read-only location ‘*(const int*)cp_ic’
  cout << "++(*cp_ic); // error: increment of read-only location ‘*(const int*)cp_ic’\n";
  //cp_ic = &j; // error: assignment of read-only variable ‘cp_ic’
  cout << "cp_ic = &j; // error: assignment of read-only variable ‘cp_ic’\n\n";

  // Reference to an integer
  cout << "// Reference to an integer\n";
  int& r_i = k;
  cout << "int& r_i = k;\n";
  ++r_i; // r_i = 31
  cout << "++r_i;   // r_i = " << r_i << "\n";
  r_i = j; // r_i = 20
  cout << "r_i = j; // r_i = " << r_i << "\n\n";

  // Reference to an integer constant (the reference is also const)
  cout << "// Reference to an integer constant (the reference is also const)\n";
  const int& r_ic = k;
  cout << "const int& r_ic = k;\n";
  //++r_ic; // error: increment of read-only reference ‘r_ic’
  cout << "++r_ic;   // error: increment of read-only reference ‘r_ic’\n";
  //r_ic = j; // error: assignment of read-only reference ‘r_ic’
  cout << "r_ic = j; // error: assignment of read-only reference ‘r_ic’\n\n";

  // Constant reference to an integer is NOT ALLOWED
  cout << "// Constant reference to an integer is NOT ALLOWED\n";
  //int& const r_ic = k; // error: ‘const’ qualifiers cannot be applied to ‘int&’
  cout << "int& const r_ic = k; // error: ‘const’ qualifiers cannot be applied to ‘int&’\n\n";

  // Constant reference to an integer constant is NOT ALLOWED
  cout << "// Constant reference to an integer constant is NOT ALLOWED\n";
  //const int& const cr_ic = k; // error: ‘const’ qualifiers cannot be applied to ‘const int&’
  cout << "const int& const cr_ic = k; // error: ‘const’ qualifiers cannot be applied to ‘const int&’\n\n";

  // Increment i and j
  cout << "i = " << i << ", j = " << j << ", k=" << k
    << " : *p_i = " << *p_i << ", *p_ic = " << *p_ic
    << ", *cp_i = " << *cp_i << ", *cp_ic = " << *cp_ic
    << " ; r_i = " << r_i << ", r_ic = " << r_ic << "\n";
  ++i; j+=2; k+=3;
  cout << "++i; j+=2; k+=3;\n";
  cout << "i = " << i << ", j = " << j << ", k=" << k
    << " : *p_i = " << *p_i << ", *p_ic = " << *p_ic
    << ", *cp_i = " << *cp_i << ", *cp_ic = " << *cp_ic
    << " ; r_i = " << r_i << ", r_ic = " << r_ic << "\n";

  // Passing by value, reference, and pointers, sometimes const
  cout << "\n// Passing by value, reference, and pointers, sometimes const\n";
  cout << "by_value(i);           // i=" << i << "\n";
  by_value(i);
  cout << "by_const_value(i);     // i=" << i << "\n";
  by_const_value(i);
  cout << "by_reference(i);       // i=" << i << "\n";
  by_reference(i);
  cout << "by_const_reference(i); // i=" << i << "\n";
  by_const_reference(i);
  cout << "by_pointer(&i);        // i=" << i << "\n";
  by_pointer(&i);
  cout << "by_const_pointer(&i);  // i=" << i << "\n";
  by_const_pointer(&i);
}

// Function definitions
void by_value(int x) {
  cout << "  x = " << x << " @" << &x << "\n";
  ++x;
  cout << "  ++x;\n";
  cout << "  x = " << x << " @" << &x << "\n";
}
void by_const_value(const int x) {
  cout << "  x = " << x << " @" << &x << "\n";
  //++x; // error: increment of read-only parameter ‘x’
  cout << "  ++x; // error: increment of read-only parameter ‘x’\n";
}
void by_reference(int &x) {
  cout << "  x = " << x << " @" << &x << "\n";
  ++x;
  cout << "  ++x;\n";
  cout << "  x = " << x << " @" << &x << "\n";
}
void by_const_reference(const int &x) {
  cout << "  x = " << x << " @" << &x << "\n";
  //++x; // error: increment of read-only reference ‘x’
  cout << "  ++x; // error: increment of read-only reference ‘x’\n";
}
void by_pointer(int *x) {
  cout << " *x = " << *x << " @" << x << ", &x=" << &x << "\n";
  ++(*x);
  cout << "  ++(*x);\n";
  cout << " *x = " << *x << " @" << x << ", &x=" << &x << "\n";
}
void by_const_pointer(const int *x) {
  cout << " *x = " << *x << " @" << x << ", &x=" << &x << "\n";
  //++(*x); // error: increment of read-only location ‘* x’
  cout << "  ++(*x); // error: increment of read-only location ‘* x’\n";
}
