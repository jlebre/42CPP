#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <exception>

class Form
{
    private:
        const std::string _name;
        bool    _signed = false;
        const int   _requiredGradeToSign;
        const int   _requiredGradeToExecute;

    public:
		Form( void ); 
		Form( const std::string name, int grade );   
		Form( const Form &copy );  
		~Form();
		Form &operator = ( const Form &obj );
		std::string		getName() const;
		int				getGrade() const;
		void			setGrade( int grade );
		void			info();
		void			increment();
		void			decrement();
        void            beSigned( Bureaucrat bro);
        void            signForm();
		
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

std::ostream &operator<<(std::ostream &stream, Form &obj);


#endif