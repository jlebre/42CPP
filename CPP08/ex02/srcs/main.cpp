#include "../includes/MutantStack.hpp"

void	green(std::string str)
{
	std::cout << "\n\033[0;32m" << str << "\033[0m\n";
}

int main()
{
	green("Testing subject example");
	{
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);
		mstack.pop();
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		
		std::cout << "Top: " << mstack.top() << std::endl;
		std::cout << "Size: " << mstack.size() << std::endl;
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}

	green("Comparing with std::list");
	{
		std::list<int> lst;

		lst.push_back(5);
		lst.push_back(17);
		lst.pop_back();
		lst.push_back(3);
		lst.push_back(5);
		lst.push_back(737);
		lst.push_back(0);
		
		std::cout << "Top: " << lst.back() << std::endl;
		std::cout << "Size: " << lst.size() << std::endl;
		std::list<int>::iterator it = lst.begin();
		std::list<int>::iterator ite = lst.end();
		
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}

	green("More Tests");
	{
		MutantStack<std::string> mstack;

		mstack.push("ola");
		mstack.push("o");
		mstack.push("meu");
		mstack.push("nome");
		mstack.push("e");
		mstack.push("jose");
		
		std::cout << "Top: " << mstack.top() << std::endl;
		std::cout << "Size: " << mstack.size() << std::endl;
		MutantStack<std::string>::iterator it = mstack.begin();
		MutantStack<std::string>::iterator ite = mstack.end();
		
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}

	return 0;
}