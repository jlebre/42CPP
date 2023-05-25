#include "Point.hpp"

int main ( void )
{
	Point P(4,2);
	Point P1(6,4);
	Point A(1,1);
	Point B(3,4);
	Point C(5,5);

	std::cout << "Testing inside of triangle\n";
	std::cout << "The vertices are: A(1,1) B(3,4) C(5,5)\n";
	std::cout << "Point is P(4,2)\n";

	std::cout << bsp(A, B, C, P) << std::endl;

	std::cout << "Testing outside of triangle\n";
	std::cout << "The vertices are: A(1,1) B(3,4) C(5,5)\n";
	std::cout << "Point is P(6,4)\n";

	std::cout << bsp(A, B, C, P1) << std::endl;

	return 0;
}