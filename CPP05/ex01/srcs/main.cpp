#include "Form.hpp"

void	green(std::string str)
{
	std::cout << "\n\033[0;32m" << str << "\033[0m\n";
}

int main( void )
{
	Form oPapel( "oPapel", 15, 15 );

	try {
			green("Creating Paul");
			Bureaucrat Paul("Paul", 50);
			std::cout << Paul;
			Paul.signForm( oPapel );
	} catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	try {
			green("Creating Bob");
			Bureaucrat Bob("Bob", 15);

			std::cout << Bob;
			Bob.increment();
			std::cout << Bob;
			Bob.signForm( oPapel );
	} catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	try {
			green("Creating Zeek");
			Bureaucrat Zeek("Zeek", 15);

			std::cout << Zeek;
			Zeek.decrement();
			std::cout << Zeek;
			Zeek.signForm( oPapel );
	} catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	
	try {
			green("Creating John");
			Bureaucrat John("John", 151);

			std::cout << John;
			John.decrement();
			std::cout << John;
			John.signForm( oPapel );
	} catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	
	try {
			green("Creating Mike");
			Bureaucrat Mike("Mike", -1);

			std::cout << Mike;
			Mike.increment();
			std::cout << Mike;
			Mike.signForm( oPapel );
	} catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	return 0;
}

