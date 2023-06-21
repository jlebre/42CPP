#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	protected:
		std::string ideas[100];
		int	nb;

	public:
		Brain();
		~Brain();
		Brain( const Brain &copy );
		void	newIdea( std::string pensamento );
		void	showIdeas();
		int		getNB();
};

#endif