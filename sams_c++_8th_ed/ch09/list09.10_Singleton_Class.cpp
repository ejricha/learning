#include <iostream>
#include <string>
using namespace std;


// Class
class President {
 private:
  President() {
    cout << "Default constructor\n";
  }
  President(const President& p) {
    cout << "Copy constructor for p=" << p.getName() << "\n";
  }
  const President& operator=(const President& p) {
    cout << "Copy assignment operator for p=" << p.getName() << "\n";
    return p;
  }
  // We could also explicitly delete the copy constructor and copy assignment operator
  /*
 public:
  President(const President& p) = delete;
  const President& operator=(const President& p) = delete;
  */

  string name;

 public:
  static President& getInstance() {
    cout << "Getting instance of President\n";
    static President only_instance;
    return only_instance;
  }

  string getName() const {
    return name;
  }
  void setName(string input_name) {
    name = input_name;
  }
};

// Main function
int main() {
  // Calls constructor
  cout << "// Calls constructor\n";
  cout << "President& only_president = President::getInstance();\n";
  President& only_president = President::getInstance();
  cout << "\n";

  // Does NOT call constructor, since it has already run
  cout << "// Does NOT call constructor, since it has already run\n";
  cout << "President& ref_president = President::getInstance();\n";
  President& ref_president = President::getInstance();
  cout << "\n";

  // These things fail
  cout << "// These things fail\n";
  //President second; // error: ‘President::President()’ is private within this context
  cout << "President second; // error: ‘President::President()’ is private within this context\n";
  //President *third = new President(); // error: ‘President::President()’ is private within this context
  cout << "President *third = new President(); // error: ‘President::President()’ is private within this context\n";
  //President fourth = only_president; // error: ‘President::President(const President&)’ is private within this context
  cout << "President fourth = only_president; // error: ‘President::President(const President&)’ is private within this context\n";
  //only_president = President::getInstance(); // error: ‘const President& President::operator=(const President&)’ is private within this context
  cout << "only_president = President::getInstance(); // error: ‘const President& President::operator=(const President&)’ is private within this context\n";
  cout << "\n";

  // Sets the name in both references
  cout << "// Sets the name\n";
  only_president.setName("Abraham Lincoln");
  cout << "The name of the president is: " << only_president.getName()
    << " = " << ref_president.getName()<< "\n";
  ref_president.setName("George Washington");
  cout << "The name of the president is: " << only_president.getName()
    << " = " << ref_president.getName()<< "\n";
}
