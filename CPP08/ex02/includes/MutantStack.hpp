#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <exception>
# include <stack>
# include <list>
# include <cstdlib>
# include <limits>
# include <algorithm>
# include <stdint.h>

template <class T>
class MutantStack: public std::stack<T>
{
	public:
		MutantStack<T>(){};
		MutantStack<T>(const MutantStack &copy){(void)copy;};
		MutantStack<T>&	operator= (const MutantStack &copy){(void)copy;return *this;};
		~MutantStack<T>(){};

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin()
		{
			return this->c.begin();
		};

		iterator end()
		{
			return this->c.end();
		};
};

// Create an alias
// "std::stack<T>::container_type::iterator" becomes "iterator"

#endif