#include "BitcoinExchange.hpp"

int main( int argc, char **argv ) 
{
	if ( argc != 2)
	{
		std::cerr << "Invalid number of arguments\n";
		return 1;
	}

	std::string input = argv[2];

	return 0;
}
