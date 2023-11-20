#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <algorithm>
# include <time.h>
# include <ctime>
# include <vector>
# include <list>

class PmergeMe
{
	private:
		std::vector<int> _vector;
		std::list<int> _list;
		int	_sorted;
		int _size;

	public:
		PmergeMe();
		~PmergeMe();
		PmergeMe(PmergeMe const & copy);
		PmergeMe &operator=(PmergeMe const & obj);

		void merge(std::vector<int> input);
		int check(std::vector<int> input);
		void sortVector();
		void sortList();
		void printVector();
		void printList();
		int is_sorted(std::vector<int> input);
};

#endif 