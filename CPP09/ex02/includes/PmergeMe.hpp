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

	public:
		PmergeMe();
		~PmergeMe();
		PmergeMe(PmergeMe const & copy);
		PmergeMe &operator=(PmergeMe const & obj);

		void merge(std::vector<int> input);
		void sortVector();
		void sortList();
		void printVector(std::vector<int> input);
};

#endif 