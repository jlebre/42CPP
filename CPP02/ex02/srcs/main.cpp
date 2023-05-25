#include "Fixed.hpp"

int main ( void )
{
	Fixed 		a;
	Fixed const b(Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed		test1(5);
	Fixed		test2(9.15f);

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << "\nStarting my tests:\n";
	std::cout << "Test1 = " << test1 << std::endl;
	std::cout << "Test2 = " << test2 << std::endl;

	std::cout << "\n\tComparisions:\n";
	std::cout << "Test1 > Test2: " << (test1 > test2) << std::endl;
	std::cout << "Test1 < Test2: " << (test1 < test2) << std::endl;
	std::cout << "Test1 >= Test2: " << (test1 >= test2) << std::endl;
	std::cout << "Test1 <= Test2: " << (test1 <= test2) << std::endl;
	std::cout << "Test1 == Test2: " << (test1 == test2) << std::endl;
	std::cout << "Test1 != Test2: " << (test1 != test2) << std::endl;

	std::cout << "\n\tArithmetic:\n";
	std::cout << "Test1 + Test2: " << (test1 + test2) << std::endl;
	std::cout << "Test1 - Test2: " << (test1 - test2) << std::endl;
	std::cout << "Test1 * Test2: " << (test1 * test2) << std::endl;
	std::cout << "Test1 / Test2: " << (test1 / test2) << std::endl;

	std::cout << "\n\tIncrement/Decrement:\n";
	std::cout << "Test1: " << test1 << std::endl;
	std::cout << "Test1++: " << test1++ << std::endl;
	std::cout << "Test1: " << test1 << std::endl;
	std::cout << "++Test1: " << ++test1 << std::endl;
	std::cout << "Test1: " << test1 << std::endl;

	std::cout << "Test2: " << test2 << std::endl;
	std::cout << "Test2--: " << test2-- << std::endl;
	std::cout << "Test2: " << test2 << std::endl;
	std::cout << "--Test2: " << --test2 << std::endl;
	std::cout << "Test2: " << test2 << std::endl;

	std::cout << "\n\tMax/Min:\n";
	std::cout << "max(Test1, Test2) = " << Fixed::max(test1, test2) << std::endl;
	std::cout << "min(Test1, Test2) = " << Fixed::min(test1, test2) << std::endl;

	return 0;
}