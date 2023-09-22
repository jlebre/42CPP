#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout << "Constructor Called\n";
}

ScalarConverter::ScalarConverter( const ScalarConverter &copy )
{
	(void)copy;
	std::cout << "Copy constructor called!\n";
}

ScalarConverter	&ScalarConverter::operator=( const ScalarConverter &obj )
{
	(void)obj;
	std::cout << "Copy assignment operator called!\n";

	return *this;
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "Destructor Called\n";
}

void    ScalarConverter::convert(std::string conv)
{
	if (isinf(conv))
		convert_inf(conv);
	else if (ischr(conv))
		convert_char(conv);
	else if (isnum(conv))
		convert_int(conv);
	else if (isfloat(conv))
		convert_float(conv);
	else if (isdouble(conv))
		convert_double(conv);
	else
		error();
}

void    ScalarConverter::error()
{
	std::cout << "char: Impossible\n";
	std::cout << "int: Impossible\n";
	std::cout << "float: Impossible\n";
	std::cout << "double: Impossible\n";
}


void    ScalarConverter::convert_inf(std::string conv)
{
	int len = 3;
	std::string arr[6];
	arr[0] = "-inff";
	arr[1] = "+inff";
	arr[2] = "-inf";
	arr[3] = "+inf";
	arr[4] = "nanf";
	arr[5] = "nan";
	for (int i = 0; i < 6; i++)
	{
		if (conv == arr[i])
		{
			if (i < 4)
				len++;
			break;
		}
	}
	std::string root = conv.substr(0, len);
	std::cout << "char: Impossible\n";
	std::cout << "int: Impossible\n";
	std::cout << "float: " << root << "f\n";
	std::cout << "double: " << root << "\n";
}

void    ScalarConverter::convert_char(std::string conv)
{
	char c = conv[0];
	std::cout << "char: \'" << c << "\'\n";
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << ".0f\n";
	std::cout << "double: " << static_cast<double>(c) << ".0\n";
}

void    ScalarConverter::convert_int(std::string conv)
{ 
	int i = atoi(conv.c_str());
	std::cout << i << std::endl;
	if (i > 32 && i < 127)
		std::cout << "char: \'" << static_cast<char>(i) << "\'\n";
	else if (i > 256 || i < 0)
		std::cout << "char: Impossible\n";
	else
		std::cout << "char: Non displayable\n";
	if (i > INT_MAX || i < INT_MIN)
		std::cout << "int: Non displayable\n";
	else
		std::cout << "int: " << i << std::endl;
	std::cout << "float: " << static_cast<float>(i) << ".0f\n";
	std::cout << "double: " << static_cast<double>(i) << ".0\n";
}

void    ScalarConverter::convert_float(std::string conv)
{
	float f = atof(conv.c_str());
	if (f > 32 && f < 127)
		std::cout << "char: \'" << static_cast<char>(f) << "\'\n";
	else if (f > 256 || f < 0)
		std::cout << "char: Impossible\n";
	else
		std::cout << "char: Non displayable\n";
	if (f > INT_MAX || f < INT_MIN)
		std::cout << "int: Impossible\n";
	else
		std::cout << "int: " << static_cast<int>(f) << std::endl;
	if (f - static_cast<int>(f) == 0.0f)
	{
		std::cout << "float: " << f << ".0f\n";
		std::cout << "double: " << static_cast<double>(f) << ".0\n";
	}
	else
	{
		std::cout << "float: " << f << "f\n";
		std::cout << "double: " << static_cast<double>(f) << "\n";
	}
		
}

void    ScalarConverter::convert_double(std::string conv)
{
	double d = atof(conv.c_str());
	if (d > 32 && d < 127)
		std::cout << "char: \'" << static_cast<char>(d) << "\'\n";
	else if (d > 256 || d < 0)
		std::cout << "char: Impossible\n";
	else
		std::cout << "char: Non displayable\n";
	if (d > INT_MAX || d < INT_MIN)
		std::cout << "int: Impossible\n";
	else
		std::cout << "int: " << static_cast<int>(d) << std::endl;
	if (d - static_cast<int>(d) == 0.0f)
	{
		std::cout << "float: " << static_cast<float>(d) << ".0f\n";
		std::cout << "double: " << d << ".0\n";
	}
	else
	{
		std::cout << "float: " << static_cast<float>((d)) << "f\n";
		std::cout << "double: " << d << "\n";
	}
		
}

int    ScalarConverter::isdouble(std::string conv)
{
	int dot = 0;
	int i = 0;
	while (conv[i] == '+' || conv[i] == '-')
		i++;
	for (; conv[i]; i++)
	{
		if (conv[i] == '.')
			dot++;
		if (dot > 1)
			return 0;
		if ((conv[i] < 47 || conv[i] > 58) && conv[i] != '.')
			return 0;
	}      
	return 1; 
}

int    ScalarConverter::isfloat(std::string conv)
{
	int i = 0;
	int len = conv.length();
	int dot = 0;

	while (conv[i] == '+' || conv[i] == '-')
		i++;
	for (; conv[i] && i < (len - 1); i++)
	{
		if (conv[i] == '.')
			dot++;
		if (dot > 1)
			return 0;
		if ((conv[i] < 47 || conv[i] > 58) && conv[i] != '.')
			return 0;
	}
	if (conv[ len - 1 ] == 'f')
		return 1;
	else
		return 0;
}

int    ScalarConverter::isnum(std::string conv)
{
	int i = 0;
	while (conv[i] == '+' || conv[i] == '-')
		i++;
	for (; conv[i]; i++)
	{
		if (conv[i] < 47 || conv[i] > 58)
			return 0;
	}      
	return 1; 
}

int    ScalarConverter::ischr(std::string conv)
{
	for (int i = 0; conv[i]; i++)
	{
		if ((conv[i] > 31 && conv[i] < 48) || (conv[i] > 57 && conv[i] < 127))
			continue;
		else
			return 0;
	}
	return 1;        
}

int    ScalarConverter::isinf(std::string conv)
{
	std::string arr[6];
	arr[0] = "-inff";
	arr[1] = "+inff";
	arr[2] = "-inf";
	arr[3] = "+inf";
	arr[4] = "nanf";
	arr[5] = "nan";
	for (int i = 0; i < 6; i++)
	{
		if (conv == arr[i])
			return 1;
	}
	return 0;       
}