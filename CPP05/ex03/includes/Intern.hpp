#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <exception>
# include "AForm.hpp"
# include "Bureaucrat.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class AForm;

class Intern
{
	public:
		Intern( void ); 
		Intern( const std::string name, int grade );   
		Intern( const Intern &copy );  
		~Intern();
		Intern &operator = ( const Intern &obj );

        AForm    *makeForm(std::string form, std::string target);
        
        class FormDoesNotExist: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

#endif

