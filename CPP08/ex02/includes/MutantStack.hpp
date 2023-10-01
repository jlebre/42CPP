#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <exception>
# include <vector>
# include <cstdlib>
# include <limits>
# include <algorithm>
# include <stdint.h>

class MutantStack
{
	private:
		std::vector<int> _MutantStack;
		unsigned int _nb;
		unsigned int _size;

	public:
		MutantStack();
		MutantStack( unsigned int size );
		MutantStack( const MutantStack &copy );
		MutantStack &operator = ( const MutantStack &obj );
		~MutantStack();

		class SpanNotFoundException: public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return "Error: Cannot calculate span. Too few numbers.";
				}
		};

		class LimitException: public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return "Error: Span limit exceeded.";
				}
		};
};

#endif