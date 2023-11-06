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
	std::string line;

	input.open(argv[1]);
	if (input.is_open())
	{
		while (getline(input, line))
			exchange.check(line);
	}
	else
	{
		std::cerr << "Error: could not open file.\n";
		return 1;
	}

	return 0;
}
