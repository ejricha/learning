#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
  cout << "There are " << argc << " arguments\n";
  for (int i = 0; i < argc; ++i) {
    std::cout << "  argv[" << i << "] = " << argv[i] << "\n";
  }

  string greetString("Hello std::string!");
  cout << greetString << "\n";

  cout << "Enter a line of text:\n";
  string firstLine;
  getline(cin, firstLine);
  cout << "[" << firstLine << "]\n";

  cout << "Enter another:\n";
  string secondLine;
  getline(cin, secondLine);
  cout << "[" << secondLine << "]\n";

  string concatString = firstLine + " " + secondLine;
  cout << "Result of concatenation:\n" << concatString << "\n";

  string aCopy;
  aCopy = concatString;
  cout << "Copy of concatenated string:\n" << aCopy << "\n";

  cout << "Length of concat string: " << concatString.length() << endl;

  return 0;
}
