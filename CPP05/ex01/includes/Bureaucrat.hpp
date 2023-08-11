#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>

class Bureaucrat
{
	private:
		const std::string _name;
		int	_grade;

	public:
		Bureaucrat( void ); 
		Bureaucrat( const std::string name, int grade );   
		Bureaucrat( const Bureaucrat &copy );  
		~Bureaucrat();
		Bureaucrat &operator = ( const Bureaucrat &obj );
		std::string		getName() const;
		int				getGrade() const;
		void			setGrade( int grade );
		void			info();
		void			increment();
		void			decrement();
		
		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &stream, Bureaucrat &obj);

#endif

