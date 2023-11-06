#include "RPN.hpp"

RPN::RPN()
{
	std::stack<char> _stack;
	//std::cout << "RPN default constructor called\n";
}

RPN::RPN( RPN const & copy )
{
	//std::cout << "RPN copy constructor called\n";
	*this = copy;
}

RPN::~RPN()
{
	//std::cout << "RPN destructor called\n";
}

RPN & RPN::operator=( RPN const & obj )
{
	( void )obj;
	//std::cout << "RPN assignation operator called\n";

	return *this;
}

void	RPN::separate(std::string line)
{
	std::string::iterator it = line.begin();
	std::string::iterator ite = line.end();

	for ( ; it != ite; it++ )
	{
		if (*it == ' ')
			continue ;
		else if ((*it >= '0' && *it <= '9') || (*it == '+' || *it == '-' || *it == '*' || *it == '/'))
			_stack.push(*it);
	}	
}

void	RPN::displayStack()
{
	while (!_stack.empty())
	{
		std::cout << _stack.top() << std::endl;
		_stack.pop();
	}
}

// Reverse Polish Notation
void RPN::calculate()
{
	
}