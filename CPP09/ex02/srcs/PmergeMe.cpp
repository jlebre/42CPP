#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
	std::vector<int> _vector;
	std::list<int> _list;
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

void PmergeMe::merge(std::vector<int> input)
{
	std::cout << "Before: ";
	printVector(input);
	std::cout << std::endl;
	
	_vector = input;
	_list.assign(input.begin(), input.end());
	sort(input.begin(), input.end());
	
	clock_t start = clock();
	sortVector();
	clock_t end = clock() - start;
	std::cout << "After: ";
	printVector(input);
	std::cout << std::endl;
	std::cout << "Time to process a range of " << "" << "elements with std::vector :" << end << " us" << std::endl;
	
	start = clock();
	sortList();
	end = clock() - start;
	std::cout << "Time to process a range of " << "" << "elements with std::list :" << end << " us" << std::endl;
}

void PmergeMe::printVector(std::vector<int> input)
{
	for (std::vector<int>::iterator it = input.begin(); it != input.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void PmergeMe::sortVector()
{
	std::sort(_vector.begin(), _vector.end());
}

void PmergeMe::sortList()
{
	_list.sort();
}

