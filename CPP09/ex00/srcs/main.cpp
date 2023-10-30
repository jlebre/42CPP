#include "BitcoinExchange.hpp"

int main( int argc, char **argv ) 
{
	if ( argc != 2)
	{
		std::cerr << "Invalid number of arguments\n";
		return 1;
	}

	BitcoinExchange exchange;
	
	std::ifstream input;

	input.open(argv[1]);
	if (input.is_open())
	{
		std::cout << "File opened\n";
	}

	return 0;
}
