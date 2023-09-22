#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"
# include "Bureaucrat.hpp"

class PresidentialPardonForm: public AForm
{
	private:
		std::string _target;

	public:
		PresidentialPardonForm( void );
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm( const PresidentialPardonForm &copy );  
		~PresidentialPardonForm();
		PresidentialPardonForm &operator = ( const PresidentialPardonForm &obj );

		std::string	getTarget( void ) const;
		void execute(Bureaucrat const & executor) const;
};

#endif