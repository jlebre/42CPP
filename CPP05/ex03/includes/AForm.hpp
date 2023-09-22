#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <exception>
# include <stdlib.h>
# include <fstream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeToSign;
		const int			_gradeToExecute;

    public:
		AForm( void ); 
		AForm( std::string name, int gradeToSign, int gradeToExec );   
		AForm(const AForm &copy);
		~AForm();
		AForm&	operator= (const AForm &copy);
	
		std::string		getName() const;
		bool			isSigned() const;
		int				getGradeToSign() const;
		int				getGradeToExecute() const;
		void			beSigned( Bureaucrat &bro);
		virtual void	execute( Bureaucrat const &executor ) const = 0;

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

		class NotSignedException: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

};

std::ostream &operator<<(std::ostream &stream, AForm &obj);

#endif