#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Constructor Called\n";
}

Bureaucrat::Bureaucrat( const std::string name): _name(name)
{
	//_name = name;
	std::cout << "Constructor Called\n";
}

Bureaucrat::Bureaucrat( const std::string name, int grade): _name(name)
{
	//_name = name;
	_grade = grade;
	std::cout << "Constructor Called\n";
}

Bureaucrat::Bureaucrat( const Bureaucrat &copy )
{
	*this = copy;
	std::cout << "Copy constructor called!\n";
}

Bureaucrat	&Bureaucrat::operator=( const Bureaucrat &obj )
{
	( void )obj;
	std::cout << "Copy assignment operator called!\n";

	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor Called\n";
}

std::string Bureaucrat::getName()
{
	return _name;
}

int Bureaucrat::getGrade()
{
	return _grade;
}

void	Bureaucrat::setGrade( int grade )
{
	_grade = grade;
}

void	Bureaucrat::info()
{
	std::cout << " _______ \n";
	std::cout << "|NAME:  |" << getName() << std::endl;
	std::cout << "|_______|\n";
	std::cout << "|GRADE: |" << getGrade() << std::endl;
	std::cout << "|_______|\n";
}

void	Bureaucrat::increment()
{
	_grade--;
}

void	Bureaucrat::decrement()
{
	_grade++;
}

std::ostream&    operator<<(std::ostream &stream, Bureaucrat &obj)
{
    stream << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".\n";

    return stream;
}


/*
std::exception Bureaucrat::GradeTooHighException()
{
	if (_grade < 1)
		std::cout << "Grade Too High\n";
}

std::exception Bureaucrat::GradeTooLowException()
{
	if (_grade > 150)
		std::cout << "Grade Too Low\n";
}
*/
