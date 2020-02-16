// app2.cpp

#include <iostream>

#include "generator.hpp"
#include "src1.hpp"
#include "src2.hpp"

int main()
{
	std::cout << "main() in app2.cpp - top\n";
	print2();
	print1();
	show_generator_expression();
	std::cout << "main() in app2.cpp - end\n";
}
