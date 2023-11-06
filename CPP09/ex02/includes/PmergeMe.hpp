#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <algorithm>
# include <stack>

class PmergeMe
{
	private:
		std::stack<int> _stack;

	public:
		PmergeMe();
		~PmergeMe();
		PmergeMe(PmergeMe const & copy);
		PmergeMe &operator=(PmergeMe const & obj);

		void calculate(std::string line);
};

#endif 