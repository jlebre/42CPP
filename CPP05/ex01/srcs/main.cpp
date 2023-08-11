#include "Bureaucrat.hpp"

void	green(std::string str)
{
	std::cout << "\n\033[0;32m" << str << "\033[0m\n";
}

int main( void )
{
	try {
			green("Creating Paul");
			Bureaucrat Paul("Paul", 50);
			std::cout << Paul;
	} catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	try {
			green("Creating Bob");
			Bureaucrat Bob("Bob", 15);

			std::cout << Bob;
			Bob.increment();
			std::cout << Bob;
	} catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	try {
			green("Creating Zeek");
			Bureaucrat Zeek("Zeek", 15);

			std::cout << Zeek;
			Zeek.decrement();
			std::cout << Zeek;
	} catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	
	try {
			green("Creating John");
			Bureaucrat John("John", 151);

			std::cout << John;
			John.decrement();
			std::cout << John;
	} catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	
	try {
			green("Creating Mike");
			Bureaucrat Mike("Mike", -1);

			std::cout << Mike;
			Mike.increment();
			std::cout << Mike;
	} catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	return 0;
}

