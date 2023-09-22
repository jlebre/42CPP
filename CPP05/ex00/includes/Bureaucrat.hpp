#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>

class Bureaucrat
{
	private:
		const std::string _name;
		int _grade;

	public:
		Bureaucrat();
		Bureaucrat( const std::string name, int grade );
		Bureaucrat( const Bureaucrat &copy );
		Bureaucrat &operator = ( const Bureaucrat &obj );
		~Bureaucrat();

		//Getters
		std::string	getName() const;
		int		getGrade() const;
		
		//Functions
		void	increment();
		void	decrement();

		//Exceptions
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