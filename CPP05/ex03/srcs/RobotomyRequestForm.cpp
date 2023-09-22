#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ): AForm("Default Robotomy Request Form", 72, 45), _target("alvo")
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("Robotomy Request Form", 72, 45), _target(target)
{

}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &copy ): AForm(copy)
{
	_target = copy.getTarget();
}


RobotomyRequestForm::~RobotomyRequestForm()
{

}

std::string	RobotomyRequestForm::getTarget( void ) const
{
	return (_target);
}

RobotomyRequestForm& RobotomyRequestForm::operator= (const RobotomyRequestForm& copy) {
	_target = copy.getTarget();
	return (*this);
}

void    RobotomyRequestForm::execute( Bureaucrat const &executor ) const
{
	if ( !isSigned() )
		throw NotSignedException();
	else if (executor.getGrade() > getGradeToExecute() )
		throw GradeTooLowException();
	else
	{
		std::cout << "\n*** BRRRRRZZZZZZRZR ***\n\n";
		if (rand() & 1)
			std::cout << executor.getName() << " has been robotomized successfully!\n";
		else
			std::cout << "Robotomy failed!\n";
	}
}