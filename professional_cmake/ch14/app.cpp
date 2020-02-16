// app.cpp

#include <iostream>

#include "lib.hpp"

int main()
{
	std::cout << "main() in app.cpp - top\n";
	print_from_lib();
	std::cout << "main() in app.cpp - end\n";
}
