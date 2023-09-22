#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

void	green(std::string str)
{
	std::cout << "\n\033[0;32m" << str << "\033[0m\n";
}

int main( void )
{
	std::cout << "Sadly the Intern company set you up with Ryan, who is rather dumb.\n";
	std::cout << "He only unsderstands simple orders. And only creates Forms.\n";
	std::cout << "The orders he can recieve are:\n";
	std::cout << "robotomy request\n";
	std::cout << "shrubbery creation\n";
	std::cout << "presidential pardon\n";
	
	Intern	Ryan;
	AForm	*rrf = Ryan.makeForm("robotomy request", "Robot");
	AForm	*scf = Ryan.makeForm("shrubbery creation", "Schrub");
	AForm	*ppf = Ryan.makeForm("presidential pardon", "Pardon");

	// Should be able do to everything.
	try {
			green("Creating Michael Scott");
			Bureaucrat Michael_Scott("Michael_Scott", 1);
 
			std::cout << Michael_Scott;
			Michael_Scott.signForm( *rrf );
			Michael_Scott.signForm( *scf );
			Michael_Scott.signForm( *ppf );
			Michael_Scott.executeForm( *rrf );
			Michael_Scott.executeForm( *scf );
			Michael_Scott.executeForm( *ppf );
	} catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	
	try {
		AForm	*error = Ryan.makeForm("error form", "Error");
		Bureaucrat Michael_Scott("Michael_Scott", 1);
		
		Michael_Scott.signForm( *error );
		Michael_Scott.executeForm( *error );
	} catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	return 0;
}

