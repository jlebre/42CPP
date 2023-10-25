#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <exception>
# include <vector>
# include <cstdlib>
# include <limits>
# include <algorithm>
# include <stdint.h>

class Span
{
	private:
		std::vector<int> _span;
		unsigned int _nb;
		unsigned int _size;

	public:
		Span();
		Span( unsigned int size );
		Span( const Span &copy );
		Span &operator = ( const Span &obj );
		~Span();

		unsigned int getSize();
		void		addNumber( int nb );
		void		addRand();
		void		addById();
		int			shortestSpan();
		int			longestSpan();

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