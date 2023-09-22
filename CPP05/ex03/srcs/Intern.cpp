#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern( const Intern &copy )
{
	(void)copy;
}

Intern	&Intern::operator=( const Intern &obj )
{
	(void)obj;

	return *this;
}

Intern::~Intern()
{
}

AForm    *Intern::makeForm(std::string form, std::string target)
{
	std::string forms[3];
	int	nb = -1;

	forms[0] = "robotomy request";
	forms[1] = "shrubbery creation";
	forms[2] = "presidential pardon";

	for (int i = 0; i < 3; i++)
	{
		if (form == forms[i])
		{
			nb = i;
			break;
		}
	}
	switch (nb)
	{
		case 0:
			std::cout << "\n\033[0;32mIntern creates " << form << "\033[0m\n";
			return new RobotomyRequestForm( target );
		case 1:
			std::cout << "\n\033[0;32mIntern creates " << form << "\033[0m\n";
			return new ShrubberyCreationForm( target );
		case 2:
			  std::cout << "\n\033[0;32mIntern creates " << form << "\033[0m\n";
			return new PresidentialPardonForm( target );
		default:
			throw FormDoesNotExist();
	}
}

const char *Intern::FormDoesNotExist::what() const throw()
{
	return "Form does not exist!\n";
}