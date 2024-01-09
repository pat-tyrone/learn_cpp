#include <iostream>

/*
There are 6 basic ways to initialize variables in C++:

int a;		// no initializer (default initialization)
int b = 5;	// initializer after equals sign (copy initialization)
int c(6);   // initializer in parenthesis (direct initialization)

// List initialization methods (C++11) (preferred)
int d{ 7 };		// initializer in braces (direct list initialization)
int e = { 8 };	// initializer in braces after equals sign (copy list initialization)
int f{};		// initializer is empty braces (value initialization)
*/
int main() {
	int a;
	int b;
	int c{8};
	[[maybe_unused]] int d{};

	a = 5;

	std::cout << "a: ";
	std::cout << a;
	std::cout << "\n";

	std::cout << "c: ";
	std::cout << c;
	std::cout << "\n";

	b = 7;
	a = b;

	std::cout << "new a: ";
	std::cout << a;
	std::cout << "\n";

	return 0;

}