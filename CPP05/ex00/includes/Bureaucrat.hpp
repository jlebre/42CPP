#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
	private:
		const std::string _name;
		int	_grade;

	public:
		Bureaucrat( void );   
		Bureaucrat( const std::string name );   
		Bureaucrat( const std::string name, int grade );   
		Bureaucrat( const Bureaucrat &copy );  
		~Bureaucrat();
		Bureaucrat &operator = ( const Bureaucrat &obj );
		std::string		getName();
		int				getGrade();
		void			setGrade( int grade );
		void			info();
		void			increment();
		void			decrement();
		//std::exception 	GradeTooHighException();
		//std::exception 	GradeTooLowException();
};

std::ostream &operator<<(std::ostream &stream, Bureaucrat &obj);

#endif

