#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include "Bureaucrat.hpp"

class ShrubberyCreationForm: public AForm
{
    private:
        std::string _target;

    public:
        ShrubberyCreationForm( void );
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm( const ShrubberyCreationForm &copy );  
        ~ShrubberyCreationForm();
		ShrubberyCreationForm &operator = ( const ShrubberyCreationForm &obj );

		std::string	getTarget( void ) const;
        void execute(Bureaucrat const & executor) const;
};

#endif