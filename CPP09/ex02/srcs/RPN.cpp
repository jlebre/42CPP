#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
	std::stack<char> _stack;
	//std::cout << "PmergeMe default constructor called\n";
}

PmergeMe::PmergeMe( PmergeMe const & copy )
{
	//std::cout << "PmergeMe copy constructor called\n";
	*this = copy;
}

PmergeMe::~PmergeMe()
{
	//std::cout << "PmergeMe destructor called\n";
}

PmergeMe & PmergeMe::operator=( PmergeMe const & obj )
{
	( void )obj;
	//std::cout << "PmergeMe assignation operator called\n";

	return *this;
}

// Reverse Polish Notation
void PmergeMe::calculate(std::string line)
{
	std::string::iterator it = line.begin();
	std::string::iterator ite = line.end();
	int a;
	int b;
	//int c;

	for ( ; it != ite; it++ )
	{
		//if (!_stack.empty())
		//	std::cout << _stack.top() << std::endl;
		if (*it == ' ')
			continue ;
		else if (*it >= '0' && *it <= '9') 
			_stack.push(*it - '0');
		else if (*it == '+'|| *it == '-' || *it == '*' || *it == '/')
		{
			b = _stack.top();
			_stack.pop();
			a = _stack.top();
			_stack.pop();
			if (*it == '+')
				_stack.push(a + b);
			else if (*it == '-')
				_stack.push(a - b);
			else if (*it == '*')
				_stack.push(a * b);
			else if (*it == '/')
				_stack.push(a / b);
			//std::cout << _stack.top() << std::endl;
		}
		else
		{
			std::cout << "Error\n";
			return ;
		}
	}	
	std::cout << _stack.top() << std::endl;
}