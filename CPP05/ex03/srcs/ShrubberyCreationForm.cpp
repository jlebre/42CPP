#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ): AForm("Default Shrubbery Creation Form", 145, 137), _target("alvo")
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("Shrubbery Creation Form", 145, 137), _target(target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &copy ): AForm(copy)  
{
    _target = copy.getTarget();
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

std::string	ShrubberyCreationForm::getTarget( void ) const
{
	return (_target);
}

ShrubberyCreationForm& ShrubberyCreationForm::operator= (const ShrubberyCreationForm& copy) {
	_target = copy.getTarget();
	return (*this);
}

void    ShrubberyCreationForm::execute( Bureaucrat const &executor ) const
{
	if ( !isSigned() )
		throw NotSignedException();
	else if (executor.getGrade() > getGradeToExecute() )
		throw GradeTooLowException();
	else
	{
		std::string name = executor.getName();
		std::string suf = "_shrubbery";
		std::string new_name = name + suf;
		std::cout << new_name << std::endl;
		const char *newFile = new_name.data();
		
    	std::ofstream outputFile;
		outputFile.open(newFile, std::ofstream::app);
		if (outputFile.is_open())
		{
			outputFile << "   /\\\n";
			outputFile << "  //\\\\\n";
			outputFile << " ///\\\\\\\n";
			outputFile << "////\\\\\\\\\n";
			outputFile << "   ||\n";
			outputFile.close();
		}
		else
		{
			std::ofstream outputFile(newFile, std::ofstream::out); // Create new file
			outputFile << "   /\\\n";
			outputFile << "  //\\\\\n";
			outputFile << " ///\\\\\\\n";
			outputFile << "////\\\\\\\\\n";
			outputFile << "   ||\n";
			outputFile.close(); // Close new file
		}
	}
}




