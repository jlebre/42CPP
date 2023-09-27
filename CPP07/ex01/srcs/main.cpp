#include "iter.hpp"

int main( void ) 
{
	int intArr[] = {1, 2, 3, 4, 5};
	char charArr[] = {'a', 'b', 'c', 'd', 'e'};
	iter(intArr, 5, print<int>);
	std::cout << std::endl;
	iter(charArr, 5, print<char>);
	std::cout << std::endl;
	return 0;
}
