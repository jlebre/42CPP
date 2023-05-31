#include "Point.hpp"

int main ( void )
{
	Point P( 4.0f, 2.0f );
	Point P1( 7.0f, 4.0f );
	Point A( 1.0f, 1.0f );
	Point B( 5.0f, 5.0f );
	Point C( 10.0f, 1.0f );

	std::cout << "Testing inside of triangle\n";
	std::cout << "The vertices are: ";
	std::cout << "A(" << A.getX() << ", " << A.getY() << ") ";
	std::cout << "B(" << B.getX() << ", " << B.getY() << ") ";
	std::cout << "C(" << C.getX() << ", " << C.getY() << ")\n";
	std::cout << "Point is P(" << P.getX() << ", " << P.getY() << ")\n";

	std::cout << bsp(A, B, C, P) << std::endl;

	std::cout << "Testing outside of triangle\n";
	std::cout << "The vertices are: ";
	std::cout << "A(" << A.getX() << ", " << A.getY() << ") ";
	std::cout << "B(" << B.getX() << ", " << B.getY() << ") ";
	std::cout << "C(" << C.getX() << ", " << C.getY() << ")\n";
	std::cout << "Point is P(" << P1.getX() << ", " << P1.getY() << ")\n";

	std::cout << bsp(A, B, C, P1) << std::endl;

	return 0;
}