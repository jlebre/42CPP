#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Constructor Called\n";
}

Bureaucrat::Bureaucrat( const std::string name, int grade): _name(name)
{
	if (grade <= 0)
		throw GradeTooHighException();
	else if (grade >= 150)
		throw GradeTooLowException();
	_grade = grade;
	std::cout << "Constructor Called\n";
}

Bureaucrat::Bureaucrat( const Bureaucrat &copy ): _name(copy.getName())
{
	_grade = copy.getGrade();
	if (_grade <= 0)
		throw GradeTooHighException();
	else if (_grade >= 150)
		throw GradeTooLowException();
	std::cout << "Copy constructor called!\n";
}

Bureaucrat	&Bureaucrat::operator=( const Bureaucrat &obj )
{
	_grade = obj.getGrade();
	if (_grade <= 0)
		throw GradeTooHighException();
	else if (_grade >= 150)
		throw GradeTooLowException();
	std::cout << "Copy assignment operator called!\n";

	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor Called\n";
}

std::string Bureaucrat::getName() const
{
	return _name;
}

int Bureaucrat::getGrade() const
{
	return _grade;
}

void	Bureaucrat::setGrade( int grade )
{
	_grade = grade;
}

void	Bureaucrat::increment()
{
	std::cout << "Increment\n";
	_grade--;
	if (_grade < 1)
		throw GradeTooHighException();
}

void	Bureaucrat::decrement()
{
	std::cout << "Decrement\n";
	_grade++;
	if (_grade > 150)
		throw GradeTooLowException();
}

std::ostream&    operator<<(std::ostream &stream, Bureaucrat &obj)
{
    stream << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".\n";

    return stream;
}

// Exceptions //

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade Too High\n";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade Too Low\n";
}

void	Bureaucrat::signForm( AForm &formulario )
{
	try {
		formulario.beSigned(*this);
		std::cout << _name << " signed " << formulario.getName() << std::endl;
	} catch ( std::exception &e ) {
		std::cout << _name << " couldn't sign " << formulario.getName() << " because " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm( AForm const &formulario )
{
	try {
		formulario.execute(*this);
		std::cout << _name << " executed " << formulario.getName() << std::endl;
	} catch ( std::exception &e ) {
		std::cout << _name << " couldn't execute " << formulario.getName() << " because " << e.what() << std::endl;
	}
}