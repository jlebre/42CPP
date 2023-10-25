#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <cstring>
# include <string>
# include <cmath>
# include <climits>
# include <limits>

class ScalarConverter
{
	private:

	public:
		ScalarConverter( void ); 
		ScalarConverter( const ScalarConverter &copy );  
		~ScalarConverter();
		ScalarConverter &operator = ( const ScalarConverter &obj );

		static void	convert(std::string conv);
		static void	convert_char(std::string conv);
		static void	convert_int(std::string conv);
		static void	convert_inf(std::string conv);
		static void	convert_float(std::string conv);
		static void	convert_double(std::string conv);
		static void	error();
		static int	isdouble(std::string conv);
		static int	isnum(std::string conv);
		static int	ischr(std::string conv);
		static int	isfloat(std::string conv);
		static int	isinf(std::string conv);
};

#endif