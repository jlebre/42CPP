#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <algorithm>
# include <stack>

class RPN
{
	private:
		std::stack<int> _stack;

	public:
		RPN();
		~RPN();
		RPN(RPN const & copy);
		RPN &operator=(RPN const & obj);

		void calculate(std::string line);
};

#endif 