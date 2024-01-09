#include "PmergeMe.hpp"

PmergeMe::PmergeMe(): _vector(), _list(), _sorted(0), _size(0)
{
}

PmergeMe::PmergeMe( PmergeMe const & copy )
{
	_size = copy._size;
	_sorted = copy._sorted;
	_vector = copy._vector;
	_list = copy._list;
	*this = copy;
}

PmergeMe::~PmergeMe()
{
}

PmergeMe & PmergeMe::operator=( PmergeMe const & obj )
{
	_size = obj._size;
	_sorted = obj._sorted;
	_vector = obj._vector;
	_list = obj._list;

	return *this;
}

int PmergeMe::check(std::vector<int> input)
{
	if (input.empty())
	{
		std::cout << "Empty vector" << std::endl;
		return 0;
	}
	_size = input.size();
	for (size_t i = 0; i < input.size() ; i++)
	{
		if (input[i] < 0)
		{
			std::cout << "Error\n";
			//std::cout << "Negative number or invalid character: " << input[i] << std::endl;
			return 0;
		}
	}
	_sorted = is_sorted(input);

	return 1;
}

void PmergeMe::merge(std::vector<int> input)
{
	if (!check(input))
		return ;
	_vector = input;
	_list.assign(input.begin(), input.end());
	
	std::cout << "Before: ";
	printVector();
	{
		clock_t start = clock();
		sortVector();
		clock_t end = clock() - start;
		std::cout << "After: ";
		printVector();
		std::cout << "Time to process a range of " << _size << " elements with std::vector -> " << (static_cast<double> (end) / (CLOCKS_PER_SEC)) * 100.00 << " us" << std::endl;
	}
	{
		clock_t start = clock();
		sortList();
		clock_t end = clock() - start;
		//printList();
		std::cout << "Time to process a range of " << _size << " elements with std::list -> " << (static_cast<double> (end) / (CLOCKS_PER_SEC)) * 100.00 << " us" << std::endl;
	}
	/*
	for (size_t i = 0 ; i < _vector.size() ; i++)
	{
		if (_vector[i] != _list.front())
		{
			std::cout << "Error: " << _vector[i] << " != " << _list.front() << std::endl;
			return ;
		}
		_list.pop_front();
	}
	std::cout << "Success" << std::endl;
	*/
}

void PmergeMe::printVector()
{
	if (_vector.empty())
	{
		std::cout << "Error: Empty vector" << std::endl;
		return ;
	}
	int interruptor = 1; // 0 to print all elements
	if (interruptor == 1 && _size > 10)
	{
		for (int i = 0; i < 10; i++)
			std::cout << _vector[i] << " ";
		std::cout << "[...]";
	}
	else
	{
		for (std::vector<int>::iterator it  = _vector.begin(); it != _vector.end(); it++)
			std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void PmergeMe::printList()
{
	if (_list.empty())
	{
		std::cout << "Error: Empty list" << std::endl;
		return ;
	}
	int a = 0;
	if (a == 1 && _size > 10)
	{
		for (int i = 0; i < 10; i++)
		{
			std::cout << _list.front() << " ";
			_list.pop_front();
		}
		std::cout << "[...]";
	}
	else
	{
		for (std::list<int>::iterator it  = _list.begin(); it != _list.end(); it++)
			std::cout << *it << " ";
	}
	std::cout << std::endl;
}

// Sorting with Ford-Johnson-Merge-Insertion Algorithm
void PmergeMe::sortVector()
{
	if ( _vector.empty() || _sorted )
		return ;
	
	int size = _vector.size();
	std::vector<int> tmp;
	std::vector<std::pair<int, int> > pares;
	
	if (size % 2 == 0)
	{
		for (size_t i = 0; i < _vector.size(); i += 2)
		{
			if (_vector[i] > _vector[i + 1])
				pares.push_back(std::make_pair(_vector[i], _vector[i + 1]));
			else
				pares.push_back(std::make_pair(_vector[i + 1], _vector[i]));
		}
	}
	else
	{
		for (size_t i = 0; i < _vector.size() - 1; i += 2)
		{
			if (_vector[i] > _vector[i + 1])
				pares.push_back(std::make_pair(_vector[i], _vector[i + 1]));
			else
				pares.push_back(std::make_pair(_vector[i + 1], _vector[i]));
		}
		tmp.push_back(_vector.back());
	}

	for (size_t i = 0; i < pares.size(); i++)
		tmp.insert(std::lower_bound(tmp.begin(), tmp.end(), pares[i].first), pares[i].first);

	for (size_t i = 0; i < pares.size(); i++)
		tmp.insert(std::lower_bound(tmp.begin(), tmp.end(), pares[i].second), pares[i].second);
	_vector = tmp;
}


void PmergeMe::sortList()
{
	if ( _list.empty() || _sorted )
		return ;

	int size = _vector.size();
	std::list<int> tmp;
	std::list<std::pair<int, int> > pares;
	if (size % 2 == 0)
	{
		for (std::list<int>::iterator it = _list.begin(); it != _list.end(); it++)
		{
			if (++it != _list.end())
			{
				if (*it > *(--it))
				{
					pares.push_back(std::make_pair(*(++it), *(--it)));
					it++;
				}
				else
					pares.push_back(std::make_pair(*it, *(++it)));
			}
		}
	}
	else
	{
		for (std::list<int>::iterator it = _list.begin(); it != --_list.end(); it++)
		{
			if (++it != --_list.end())
			{
				if (*it > *(--it))
				{
					pares.push_back(std::make_pair(*(++it), *(--it)));
					it++;
				}
				else
					pares.push_back(std::make_pair(*it, *(++it)));
			}
		}
		tmp.push_back(_list.back());
	}

	for (std::list<std::pair<int,int> >::iterator it = pares.begin(); it != pares.end(); it++)
		tmp.insert(std::lower_bound(tmp.begin(), tmp.end(), it->first), it->first);

	for (std::list<std::pair<int,int> >::iterator it = pares.begin(); it != pares.end(); it++)
		tmp.insert(std::lower_bound(tmp.begin(), tmp.end(), it->second), it->second);
	_list = tmp;
}

int PmergeMe::is_sorted( std::vector<int> input )
{
	if ( input.size() <= 1 )
		return 1;
	for ( size_t i = 1; i < input.size(); ++i ) 
        if ( input[i] < input[i - 1] ) 
            return 0;
	return 1;
}