#include <iostream>
#include <string>

using namespace std;

class Book
{
public:
	virtual ~Book() = default;
	virtual string getDescription() const { return "Book"; }
	string getDescriptionNonVirtual() const { return "Book [nv]"; }
	virtual int getHeight() const { return 120; }
};

class Paperback : public Book
{
public:
	virtual string getDescription() const override {
		return "Paperback " + Book::getDescription();
	}
};

class Romance : public Paperback
{
public:
	virtual string getDescription() const override {
		return "Romance " + Paperback::getDescription();
	}
	virtual int getHeight() const override { return Paperback::getHeight() / 2; }
};

class Technical : public Book
{
public:
	virtual string getDescription() const override {
		return "Technical " + Book::getDescription();
	}
	string getDescriptionNonVirtual() const {
		return "Technical " + Book::getDescription();
	}
};

int main()
{
	Romance novel;
	Book book;
	cout << novel.getDescription() << endl; // Outputs "Romance Paperback Book"
	cout << book.getDescription() << endl;  // Outputs "Book"
	cout << novel.getHeight() << endl;      // Outputs "60"
	cout << book.getHeight() << endl;       // Outputs "120"

	// Test without virtual
	Technical t;
	cout << "Regular Technical Book: (" << t.getDescription() << ") vs (" << t.getDescriptionNonVirtual() << ")\n";
	Book* b = dynamic_cast<Technical*>(&t);
	if (!b) {
		cout << "Error, failed to cast t to a Book\n";
		return 1;
	}
	cout << "Book pointer to Technical Book: (" << b->getDescription() << ") vs (" << b->getDescriptionNonVirtual() << ")\n";

	return 0;
}
