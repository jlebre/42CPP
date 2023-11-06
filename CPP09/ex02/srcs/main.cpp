#include "PmergeMe.hpp"

int main(int argc, char **argv) 
{
	if (argc != 2)
	{
		std::cout << "Invalid number of arguments\n";
		return 1;
	}

	PmergeMe rpn;
	rpn.calculate(argv[1]);

	return 0;
}
