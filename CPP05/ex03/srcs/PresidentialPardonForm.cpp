#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("Default Presidential Pardon Form", 25, 5), _target("alvo")
{

}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("Presidential Pardon Form", 25, 5), _target(target)
{

}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &copy ): AForm(copy)  
{
    _target = copy.getTarget();
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

std::string	PresidentialPardonForm::getTarget( void ) const
{
	return (_target);
}

PresidentialPardonForm& PresidentialPardonForm::operator= (const PresidentialPardonForm& copy) {
	_target = copy.getTarget();
	return (*this);
}

void    PresidentialPardonForm::execute( Bureaucrat const &executor ) const
{
    if ( !isSigned() )
        throw NotSignedException();
    else if ( executor.getGrade() > getGradeToExecute() )
        throw GradeTooLowException();
    else
        std::cout << "\nI hereby annouce that " << executor.getName() << " has been pardoned by Zaphod Beeblebrox.\n\n";
}