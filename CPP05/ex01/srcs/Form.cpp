#include "Form.hpp"

Form::Form(): _name("Default"), _gradeToSign(50), _gradeToExecute(50)
{
	std::cout << "Constructor Called\n";
}

Form::Form( std::string name, int gradeToSign, int gradeToExec): _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExec)
{
	if ( gradeToSign < 1 || gradeToExec < 1 )
		throw GradeTooHighException();
	else if ( gradeToSign > 150 || gradeToExec > 150 )
		throw GradeTooLowException();
	std::cout << "Constructor Called\n";
}

Form::Form( const Form &copy ): _name(copy.getName()), _signed(copy.isSigned()), _gradeToSign(copy.getGradeToSign()), _gradeToExecute(copy.getGradeToExecute())
{
	if ( _gradeToSign < 1 || _gradeToExecute < 1 )
		throw GradeTooHighException();
	else if ( _gradeToSign > 150 || _gradeToExecute > 150 )
		throw GradeTooLowException();
	std::cout << "Copy constructor called!\n";
}

Form	&Form::operator=( const Form &obj )
{
	_signed = obj.isSigned();

	return *this;
}

Form::~Form()
{
	std::cout << "Destructor Called\n";
}


void    Form::beSigned( Bureaucrat &bro)
{
	if ( bro.getGrade() <= getGradeToSign())
		_signed = true;
	else
		throw GradeTooLowException();
}

// Getters //

std::string Form::getName() const
{
	return _name;
}

bool	Form::isSigned() const
{
	return _signed;
}

int Form::getGradeToSign() const
{
	return _gradeToSign;
}

int Form::getGradeToExecute() const
{
	return _gradeToExecute;
}

// ------- //

// Exceptions //

const char *Form::GradeTooHighException::what() const throw()
{
	return "Grade Too High\n";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Grade Too Low\n";
}

// -------- //


std::ostream&    operator<<(std::ostream &stream, Form &obj)
{
	stream << obj.getName() << ", bureaucrat grade " << obj.getGradeToSign() << ".\n";

	return stream;
}
