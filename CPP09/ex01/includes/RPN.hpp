#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <algorithm>
# include <stack>

class RPN
{
	private:
		std::stack<char> _stack;

	public:
		RPN();
		~RPN();
		RPN(RPN const & copy);
		RPN &operator=(RPN const & obj);

		void separate(std::string line);
		void displayStack();
		void calculate();
};

#endif 