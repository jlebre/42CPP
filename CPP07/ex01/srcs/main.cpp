#include "../includes/iter.hpp"

int main( void ) 
{
	int intArr[] = {1, 2, 3, 4, 5};
	char charArr[] = {'a', 'b', 'c', 'd', 'e'};
	iter(intArr, 5, print<int>);
	iter(charArr, 5, print<char>);

	int tab[] = { 0, 1, 2, 3, 4 };
	Awesome tab2[5];
	iter( tab, 5, print<int> );
	iter( tab2, 5, print<Awesome> );

	return 0;
}
