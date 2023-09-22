#include "AForm.hpp"

AForm::AForm(): _name("Default"), _gradeToSign(50), _gradeToExecute(50)
{
	std::cout << "Constructor Called\n";
}

AForm::AForm( std::string name, int gradeToSign, int gradeToExec): _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExec)
{
	if ( gradeToSign < 1 || gradeToExec < 1 )
		throw GradeTooHighException();
	else if ( gradeToSign > 150 || gradeToExec > 150 )
		throw GradeTooLowException();
	std::cout << "Constructor Called\n";
}

AForm::~AForm()
{
	std::cout << "Destructor Called\n";
}

void    AForm::beSigned( Bureaucrat &bro)
{
	if ( bro.getGrade() <= getGradeToSign())
		_signed = true;
	else
		throw GradeTooLowException(); 
}

AForm::AForm( const AForm &copy ): _name(copy.getName()), _signed(copy.isSigned()), _gradeToSign(copy.getGradeToSign()), _gradeToExecute(copy.getGradeToExecute())
{

}

AForm	&AForm::operator=( const AForm &obj )
{
	_signed = obj.isSigned();

	return *this;
}

//Getters

std::string AForm::getName() const
{
	return _name;
}

bool	AForm::isSigned() const
{
	return _signed;
}

int AForm::getGradeToSign() const
{
	return _gradeToSign;
}

int AForm::getGradeToExecute() const
{
	return _gradeToExecute;
}

//Exceptions

const char *AForm::GradeTooHighException::what() const throw()
{
	return "Grade Too High\n";
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return "Grade Too Low\n";
}

const char *AForm::NotSignedException::what() const throw()
{
	return "Form not signed\n";
}

std::ostream&    operator<<(std::ostream &stream, AForm &obj)
{
	stream << obj.getName() << ", bureaucrat grade " << obj.getGradeToSign() << ".\n";

	return stream;
}
