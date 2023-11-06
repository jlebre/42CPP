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
		std::ifstream _dataCSV;
		std::string	_date;
		double	_value;

	public:
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(BitcoinExchange const & copy);
		BitcoinExchange &operator=(BitcoinExchange const & obj);

		void	createDataBase();
		void	displayMap();
		void	check(std::string line);
		void	error(std::string error);
		int		check_date(std::string date);

};

#endif 