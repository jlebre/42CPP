#include "ScalarConverter.hpp"

void    test()
{
	std::cout << "Testing with char:\n";
	ScalarConverter::convert("a");
	std::cout << std::endl;
	ScalarConverter::convert("k");
	std::cout << std::endl;
	ScalarConverter::convert("z");
	std::cout << std::endl;
	ScalarConverter::convert("jose");
	
	std::cout << std::endl;
	std::cout << "Testing with int:\n";
	ScalarConverter::convert("1");
	std::cout << std::endl;
	ScalarConverter::convert("15");
	std::cout << std::endl;
	ScalarConverter::convert("54275204575652741");
	std::cout << std::endl;
	ScalarConverter::convert("-3");
	
	std::cout << std::endl;
	std::cout << "Testing with infs:\n";
	ScalarConverter::convert("-inff");
	std::cout << std::endl;
	ScalarConverter::convert("+inff");
	std::cout << std::endl;
	ScalarConverter::convert("nanf");
	std::cout << std::endl;
	ScalarConverter::convert("-inf");
	std::cout << std::endl;
	ScalarConverter::convert("+inf");
	std::cout << std::endl;
	ScalarConverter::convert("nan");

	std::cout << std::endl;
	std::cout << "Testing with float:\n";
	ScalarConverter::convert("1.0f");
	std::cout << std::endl;
	ScalarConverter::convert("65.2f");
	std::cout << std::endl;
	ScalarConverter::convert("-853.1f");
	std::cout << std::endl;
	ScalarConverter::convert("84.0f");

	std::cout << std::endl;
	std::cout << "Testing with double:\n";
	ScalarConverter::convert("5.0");
	std::cout << std::endl;
	ScalarConverter::convert("-65131.351");
	std::cout << std::endl;
	ScalarConverter::convert("6541.0");
	std::cout << std::endl;
	ScalarConverter::convert("85.0");
	
	std::cout << std::endl;
	std::cout << "Testing ERRORS:\n";
	ScalarConverter::convert("5.0asde");
	std::cout << std::endl;
	ScalarConverter::convert("-65d5");
	std::cout << std::endl;
	ScalarConverter::convert("d9f");
	std::cout << std::endl;
	ScalarConverter::convert("85.d0");
	std::cout << std::endl;
	ScalarConverter::convert("85.8.0");
}

int main(int argc, char **argv)
{
	if (argc == 2)
		ScalarConverter::convert(argv[1]);
	else if (argc == 1)
	{
		std::cout << "Starting tests:\n";
		test();
	}        
	else
		std::cout << "Wrong number of arguments!\n";

	return 0;
} 