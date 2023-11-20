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
			std::cout << "Negative number or invalid character: " << input[i] << std::endl;
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
	
	
	clock_t start = clock();
	sortVector();
	clock_t end = clock() - start;
	std::cout << "After: ";
	printVector();
	std::cout << "Time to process a range of " << _size << " elements with std::vector -> " << (static_cast<double> (end) / (CLOCKS_PER_SEC)) * 1000000.0 << " us" << std::endl;
	
	start = clock();
	sortList();
	end = clock() - start;
	printList();
	std::cout << "Time to process a range of " << _size << " elements with std::list -> " << (static_cast<double> (end) / (CLOCKS_PER_SEC)) * 1000000.0 << " us" << std::endl;
}

void PmergeMe::printVector()
{
	if (_vector.empty())
	{
		std::cout << "Empty vector" << std::endl;
		return ;
	}
	int a = 0;
	if (a == 1 && _size > 10)
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
		std::cout << "Empty list" << std::endl;
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

void PmergeMe::sortVector()
{
	if ( _vector.empty() || _sorted )
		return ;
	
	int size = _vector.size();
	std::vector<int> tmp;
	std::vector<std::pair<int, int> > pairs;
	if (size % 2 == 0)
	{
		for (int i = 0 ; i < size ; i += 2)
		{
			if (_vector[i] > _vector[i + 1])
				pairs.push_back(std::make_pair(_vector[i], _vector[i + 1]));
			else
				pairs.push_back(std::make_pair(_vector[i + 1], _vector[i]));
		}
	}
	else
	{
		for (int i = 0 ; i < size - 1 ; i += 2)
		{
			if (_vector[i] > _vector[i + 1])
				pairs.push_back(std::make_pair(_vector[i], _vector[i + 1]));
			else
				pairs.push_back(std::make_pair(_vector[i + 1], _vector[i]));
		}
		tmp.push_back(_vector.back());
	}
	
	for (size_t i = 0; i < pairs.size(); i++)
		tmp.insert(std::lower_bound(tmp.begin(), tmp.end(), pairs[i].first), pairs[i].first);
	for (size_t i = 0; i < pairs.size(); i++)
		tmp.insert(std::lower_bound(tmp.begin(), tmp.end(), pairs[i].second), pairs[i].second);
	_vector.clear();
	_vector = tmp;
}

void PmergeMe::sortList()
{
	if ( _list.empty() || _sorted )
		return ;
	
	int size = _list.size();
	std::list<int> tmp;
	std::list<std::pair<int, int> > pairs;
	if (size % 2 == 0)
	{
		for (std::list<int>::iterator it = _list.begin(); it != _list.end(); it++)
		{
			if (++it != _list.end())
			{
				if (*it > *(--it))
				{
					pairs.push_back(std::make_pair(*(++it), *(--it)));
					it++;
				}
				else
					pairs.push_back(std::make_pair(*it, *(++it)));
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
					pairs.push_back(std::make_pair(*(++it), *(--it)));
					it++;
				}
				else
					pairs.push_back(std::make_pair(*it, *(++it)));
			}
		}
		tmp.push_back(_list.back());
	}
	
	for (std::list<std::pair<int,int> >::iterator it = pairs.begin(); it != pairs.end(); it++)
		tmp.insert(std::lower_bound(tmp.begin(), tmp.end(), it->first), it->first);

	for (std::list<std::pair<int,int> >::iterator it = pairs.begin(); it != pairs.end(); it++)
		tmp.insert(std::lower_bound(tmp.begin(), tmp.end(), it->second), it->second);
	
	_list.clear();
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