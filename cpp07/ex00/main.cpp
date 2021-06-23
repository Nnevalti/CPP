#include <iostream>
#include "whatever.hpp"

// int main(void) {
// 	char a = 't';
// 	char b = 'e';
// 	int c = 15;
// 	int d = 42;
//
// 	//char
// 	std::cout << "Before swap:" << std::endl;
// 	std::cout << "a = " << a << ", b = " << b << std::endl;
// 	::swap(a, b);
// 	std::cout << "After swap:" << std::endl;
// 	std::cout << "a = " << a << ", b = " << b << std::endl;
//
// 	// int
// 	std::cout << "Before swap:" << std::endl;
// 	std::cout << "c = " << c << ", d = " << d << std::endl;
// 	::swap(c, d);
// 	std::cout << "After swap:" << std::endl;
// 	std::cout << "c = " << c << ", d = " << d << std::endl;
//
// 	return 0;
// }

int main(void)
{
	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	
	return 0;
}
