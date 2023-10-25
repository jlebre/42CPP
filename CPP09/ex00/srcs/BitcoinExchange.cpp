#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
    std::cout << "BitcoinExchange default constructor called\n";
}

BitcoinExchange::BitcoinExchange( BitcoinExchange const & copy )
{
    std::cout << "BitcoinExchange copy constructor called\n";
    *this = copy;
}

BitcoinExchange::~BitcoinExchange()
{
    std::cout << "BitcoinExchange destructor called\n";
}

BitcoinExchange & BitcoinExchange::operator=( BitcoinExchange const & obj )
{
    ( void )obj;
    std::cout << "BitcoinExchange assignation operator called\n";

    return *this;
}

void BitcoinExchange::displayMap()
{
	std::map<std::string,float>::iterator it = _data.begin();
	std::map<std::string,float>::iterator ite = _data.end();

	for ( ; it != ite; it++ )
		std::cout << it->first << " => " << it->second << std::endl;
}