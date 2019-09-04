// ex01.cpp
//
// Sort the telephone directory by phone number

#include <iostream>
#include <set>
#include <string>
using namespace std;

// Overloaded display function
template <typename T>
void display(const T& container) {
  const auto begin = container.cbegin();
  const auto end = container.cend();
  for (auto it = begin; it != end; ++it) {
    cout << " " << *it << "\n";
  }
}

// Definition of a word class
class Entry {
 public:
  // Delete the default constructor
  Entry() = delete;
  // Overloaded constructor
  Entry(const string& w, const string& d)
    : word(w), definition(d) {
    output = this->word + " : " + this->definition;
  }

  // Used by set::find()
  bool operator==(const Entry& e) const {
    return (this->word == e.word);
  }

  // Used to sort
  bool operator<(const Entry& e) const {
    return (this->word < e.word);
  }

  // Used in display via cout
  operator const char*() const {
    return output.c_str();
  }

  // Private member variables
 private:
  string word;
  string definition;
  string output;
};

// Main function
int main() {
  multiset<Entry> dict;
  dict.insert(Entry("do", "A deer, a female deer"));
  /*
  dict.insert(Entry("re", "A drop of golden sun"));
  dict.insert(Entry("mi", "A name I call myself"));
  dict.insert(Entry("fa", "A long long way to run"));
  dict.insert(Entry("so", "A needle pulling thread"));
  dict.insert(Entry("la", "A note to follow so (lame)"));
  dict.insert(Entry("ti", "A drink with jam and bread"));
  */
  display(dict);
  cout << "\n";

  string word;
  string definition;
  do {
    cout << "Enter a word ('x' to quit): ";
    getline(cin, word);
    if (word != "x") {
      cout << "Enter a definition: ";
      getline(cin, definition);
      dict.insert(Entry(word, definition));
      display(dict);
      cout << "\n";
    }
  } while (word != "x");

  cout << "Exiting, dictionary has:\n";
  display(dict);
  cout << "\n";
}
