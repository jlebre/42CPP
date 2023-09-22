#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

void	green(std::string str)
{
	std::cout << "\n\033[0;32m" << str << "\033[0m\n";
}

int main( void )
{
	RobotomyRequestForm Robot( "Robot" );
	ShrubberyCreationForm Shrub( "Shrub" );
	PresidentialPardonForm Pardon( "Pardon" );

	// Should be able to sign, but not execute because Grade Too Low
	try {
			green("Creating Paul");
			Bureaucrat Paul("Paul", 50);
			std::cout << Paul;
			Paul.signForm( Robot );
			Paul.executeForm( Robot );
	} catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	// Should be able to sign, but not execute because Grade Too Low
	try {
			green("Creating Bob");
			Bureaucrat Bob("Bob", 15);

			std::cout << Bob;
			Bob.increment();
			std::cout << Bob;
			Bob.signForm( Pardon );
			Bob.executeForm( Pardon);
	} catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	// Should be able to sign, but not execute because Grade Too Low
	try {
			green("Creating Zeek");
			Bureaucrat Zeek("Zeek", 15);

			std::cout << Zeek;
			Zeek.decrement();
			std::cout << Zeek;
			Zeek.signForm( Pardon );
			Zeek.executeForm( Pardon );
	} catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	// Grade Too Low
	try {
			green("Creating John");
			Bureaucrat John("John", 151);

			std::cout << John;
			John.decrement();
			std::cout << John;
			John.executeForm( Shrub );
	} catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	
	// Grade Too High
	try {
			green("Creating Mike");
			Bureaucrat Mike("Mike", -1);

			std::cout << Mike;
			Mike.increment();
			std::cout << Mike;
			Mike.executeForm( Shrub );
	} catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	// Should not be able to execute because Form not Signed
	try {
			green("Creating Andrew");
			Bureaucrat Andrew("Andrew", 2);

			std::cout << Andrew;
			Andrew.increment();
			std::cout << Andrew;
			Andrew.executeForm( Shrub );
	} catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	
	// Should be able do to everything.
	try {
			green("Creating BIGBOSS");
			Bureaucrat BIGBOSS("BIGBOSS", 1);
 
			std::cout << BIGBOSS;
			BIGBOSS.signForm( Shrub );
			BIGBOSS.signForm( Pardon );
			BIGBOSS.signForm( Robot );
			BIGBOSS.executeForm( Pardon );
			BIGBOSS.executeForm( Robot );
			BIGBOSS.executeForm( Shrub );
	} catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	return 0;
}

