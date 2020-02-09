// app1.cpp

#include <iostream>

#include "src1.hpp"
#include "src2.hpp"

int main()
{
	std::cout << "main() in app1.cpp - top\n";
	print1();
	print2();
	std::cout << "main() in app1.cpp - end\n";
}
