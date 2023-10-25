#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
    createDataBase();
    displayMap();
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

void BitcoinExchange::createDataBase()
{
    std::string line;
    std::string key;
    float value;

    _input.open("data.csv");
    if (_input.is_open())
    {
        while (getline(_input, line))
        {
            key = line.substr(0, line.find(','));
            value = (float)line.substr(line.find(',') + 1);
            _data.insert(std::pair<std::string, float>(key, value));
        }
        _input.close();
    }
    else
        std::cout << "Unable to open file\n";
}

void BitcoinExchange::displayMap()
{
	std::map<std::string,float>::iterator it = _data.begin();
	std::map<std::string,float>::iterator ite = _data.end();

	for ( ; it != ite; it++ )
		std::cout << it->first << " => " << it->second << std::endl;
}