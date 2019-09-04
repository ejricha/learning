// list19.05_A_Telephone_Directory_using_set_find_and_erase.cpp
//
// Create a telephone directory, and remove an element from it

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

// ContactItem class
class ContactItem {
 public:
  // Delete the default constructor
  ContactItem() = delete;
  // Overloaded constructor
  ContactItem(const string& name_init, const string& phone_init)
    : name(name_init), phone_number(phone_init) {
    display_as = (name + ": " + phone_number);
  }

  // Used by set::find() given contact list item
  bool operator==(const ContactItem& item_to_compare) const {
    //cout << "this->name = (" << this->name << "), item_to_compare.name = (" << item_to_compare.name << ")\n";
    return (this->name == item_to_compare.name);
  }

  // Used to sort
  bool operator<(const ContactItem& item_to_compare) const {
    //cout << "this->name = (" << this->name << "), item_to_compare.name = (" << item_to_compare.name << ")\n";
    return (this->name < item_to_compare.name);
  }

  // Used in display via cout
  operator const char*() const {
    return display_as.c_str();
  }
  
  // Private member variables
 private:
  string name;
  string phone_number;
  string display_as;
};

// Main function
int main() {
  set<ContactItem> set_contacts;
  set_contacts.insert(ContactItem("Jack Welsch", "+1 7889 879 879"));
  set_contacts.insert(ContactItem("Bill Gates", "+1 97 7897 8799 8"));
  set_contacts.insert(ContactItem("Angi Merkel", "+49 23456 5466"));
  set_contacts.insert(ContactItem("Vlad Putin", "+7 6645 4564 789"));
  set_contacts.insert(ContactItem("John Travolta", "+1 234 4563 789"));
  set_contacts.insert(ContactItem("Ben Affleck", "+1 745 641 314"));
  display(set_contacts);

  cout << "Enter a name you wish to delete: ";
  string input_name;
  getline(cin, input_name);

  // Find the contact in the set
  auto contact_found = set_contacts.find(ContactItem(input_name, ""));
  if (contact_found != set_contacts.end()) {
    set_contacts.erase(contact_found);
    cout << "Displaying contacts after erasing " << input_name << "\n";
    display(set_contacts);
  }
  else {
    cout << "Contact not found\n";
  }
}
