#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <algorithm>
# include <map>
# include <fstream>

class BitcoinExchange
{
	private:
		std::map<std::string, float> _data;
		std::ifstream _input;
		std::ifstream _dataCSV;

	public:
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(BitcoinExchange const & copy);
		BitcoinExchange &operator=(BitcoinExchange const & obj);

		void createDataBase();
		void displayMap();
		int check();
};

#endif 