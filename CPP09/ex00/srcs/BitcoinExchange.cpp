#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	createDataBase();
	//displayMap();
	//std::cout << "BitcoinExchange default constructor called\n";
}

BitcoinExchange::BitcoinExchange( BitcoinExchange const & copy )
{
	//std::cout << "BitcoinExchange copy constructor called\n";
	*this = copy;
}

BitcoinExchange::~BitcoinExchange()
{
	//std::cout << "BitcoinExchange destructor called\n";
}

BitcoinExchange & BitcoinExchange::operator=( BitcoinExchange const & obj )
{
	( void )obj;
	//std::cout << "BitcoinExchange assignation operator called\n";

	return *this;
}

void BitcoinExchange::createDataBase()
{
	std::string line;
	std::string key;
	float value;

	_dataCSV.open("data.csv");
	if (_dataCSV.is_open())
	{
		while (getline(_dataCSV, line))
		{
			key = line.substr(0, line.find(','));
			std::string tmp = line.substr(line.find(',') + 1);
			value = std::atof(tmp.c_str());
			_data.insert(std::pair<std::string, float>(key, value));
		}
		_dataCSV.close();
	}
	else
		std::cout << "Unable to open \"data.csv\" file\n";
}

void BitcoinExchange::displayMap()
{
	std::map<std::string,float>::iterator it = _data.begin();
	std::map<std::string,float>::iterator ite = _data.end();

	for ( ; it != ite; it++ )
		std::cout << it->first << " => " << it->second << std::endl;
}

void BitcoinExchange::check(std::string line)
{
	if (line == "date | value")
		return ;
	std::string date;
	std::string value;
	std::string tmp;
	double tmp_value;

	date = line.substr(0, line.find('|'));
	value = line.substr(line.find('|') + 1);
	tmp_value = std::atof(value.c_str());
	if (!check_date(date))
	{
		error("DATE");
		return ;
	}
	if (tmp_value < 0)
	{
		error("RANGE-");
		return ;
	}
	else if (tmp_value > 1000)
	{
		error("RANGE+");
		return ;
	}
	std::cout << _date << " => " << tmp_value << " = " << _value * tmp_value << "\n";
}

int BitcoinExchange::check_date(std::string date)
{
	std::map<std::string,float>::iterator it = _data.begin();
	std::map<std::string,float>::iterator ite = _data.end();
	_date = date;
	int year = std::atoi(date.substr(0, 4).c_str());
	int month = std::atoi(date.substr(5, 2).c_str());
	int day = std::atoi(date.substr(8, 2).c_str());

	//std::cout << "year: " << year << " month: " << month << " day: " << day << std::endl;
	if (year < 2009 || year > 2022)
		return 0;
	if (month < 1 || month > 12)
		return 0;
	if (day < 1 || day > 31)
		return 0;

	for (; std::atoi(it->first.substr(0, 4).c_str()) < year && it != ite ; it++)
		;
	for (; std::atoi(it->first.substr(5, 2).c_str()) < month && it != ite ; it++)
		;
	for (; std::atoi(it->first.substr(8, 2).c_str()) < day && it != ite ; it++)
		;
	if (std::atoi(it->first.substr(8, 2).c_str()) > day)
		it--; 
	_value = it->second;
	return 1;
}

void BitcoinExchange::error(std::string error)
{
	if (error == "DATE")
		std::cerr << "Error: bad input => " << _date << "\n";
	else if (error == "VALUE")
		std::cerr << "Invalid value\n";
	else if (error == "RANGE-")
		std::cerr << "Error: not a positive number.\n";
	else if (error == "RANGE+")
		std::cerr << "Error: too large a number\n";
	else
		std::cerr << "Unknown error\n";
}

/*
Check if date is valid
Check if the value is valid
Float, or int between 0 and 1000
*/