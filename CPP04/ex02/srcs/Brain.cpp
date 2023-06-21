#include "Brain.hpp"

Brain::Brain()
{
	nb = 0;
	std::cout << "Brain Default Constructor Called!\n";
}

Brain::~Brain()
{
	std::cout << "Brain Destructor Called!\n";
}

Brain::Brain( const Brain &copy)
{
	*this = copy;	
	std::cout << "Brain Copy Constructor Called!\n";
}

void	Brain::newIdea( std::string pensamento )
{
	if (nb < 100)
	{
		std::cout << "I had an idea: " << pensamento << std::endl;
		ideas[nb] = pensamento;
		nb++;
	}
	else
	{
		std::cout << "My Brain is full, i have a migraine\n";
	}

}

void	Brain::showIdeas()
{
	if (nb == 0)
	{
		std::cout << "Brain is empty!\n";
		return ;
	}
	std::cout << "This is what i have inside my brain:\n";
	for (int i = 0 ; i < nb ; i++)
	{
		std::cout << i << ": " << ideas[i] << std::endl;
	}
}

int	Brain::getNB()
{
	return nb;
}