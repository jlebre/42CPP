#include "Bureaucrat.hpp"

void	green(std::string str)
{
	std::cout << "\n\033[0;32m" << str << "\033[0m\n";
}

int main( void )
{
	green("Creating Bob");
	Bureaucrat Bob("Bob", 15);

	Bob.info();
	std::cout << Bob;
	Bob.increment();
	Bob.info();
	std::cout << Bob;

	return 0;
}

