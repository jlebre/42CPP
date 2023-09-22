#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"
# include "Bureaucrat.hpp"

class RobotomyRequestForm: public AForm
{
    private:
        std::string _target;

    public:
        RobotomyRequestForm( void );
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm( const RobotomyRequestForm &copy );
        ~RobotomyRequestForm();
		RobotomyRequestForm &operator = ( const RobotomyRequestForm &obj );

        std::string	getTarget( void ) const;
        void execute(Bureaucrat const & executor) const;
};

#endif