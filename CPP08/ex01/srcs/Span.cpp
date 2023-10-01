#include "Span.hpp"

Span::Span()
{
	_size = 0;
	_nb = 0;
	//std::cout << "Default Constructor Called\n";
}

Span::Span( unsigned int size )
{
	_size = size;
	_nb = 0;
	//std::cout << "Constructor Called\n";
}

Span::Span( const Span &copy )
{
	_span = copy._span;
	_nb = copy._nb;
	_size = copy._size;
	//std::cout << "Copy constructor called!\n";
}

Span	&Span::operator=( const Span &obj )
{
	_span = obj._span;
	_nb = obj._nb;
	_size = obj._size;
	//std::cout << "Copy assignment operator called!\n";

	return *this;
}

Span::~Span()
{
	//std::cout << "Destructor Called\n";
}

unsigned int Span::getSize()
{
	return _size;
}

void	Span::addNumber( int nb)
{
	if ( getSize() <= 1 )
		throw SpanNotFoundException();
	else if ( _nb >= getSize() )
		throw LimitException();
	else
	{
		_span.push_back(nb);
		_nb++;
	}
}

void	Span::addRand()
{
	srand(time(NULL));
	for ( unsigned int i = 0 ; i < _size ; i++)
	{
		int r = rand() % 500000;
		this->addNumber(r);
	}
}

void	Span::addById()
{
	for ( unsigned int i = 0 ; i < _size ; i++)
		this->addNumber(i);
}

int	Span::shortestSpan()
{
	if (_nb < 2)
		throw SpanNotFoundException();

	std::sort(_span.begin(), _span.end());
	int minSpan = std::numeric_limits<int>::max();
	for ( unsigned int i = 1 ; i < _nb ; i++)
	{
		if (_span[i] == _span[i - 1])
			continue;
	
		int span = std::abs(_span[i - 1] - _span[i]);

		if (span < minSpan)
			minSpan = span;
	}
	return minSpan;
}

int	Span::longestSpan()
{
	if (_nb < 2)
		throw SpanNotFoundException();
	int min = _span[0];
	int max = _span[0];
	for (unsigned int i = 0; i != _nb ; i++)
	{
		if (_span[i] == _span[i + 1])
			continue;
		if (_span[i] < min)
			min = _span[i];
		if (_span[i] > max)
			max = _span[i];
	}
	return std::abs(max - min);
}
