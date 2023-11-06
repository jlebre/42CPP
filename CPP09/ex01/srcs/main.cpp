#include "RPN.hpp"

int main(int argc, char **argv) 
{
	if (argc != 2)
	{
		std::cout << "Invalid number of arguments\n";
		return 1;
	}

	RPN rpn;
	rpn.separate(argv[1]);
	rpn.displayStack();
	rpn.calculate();

	return 0;
}
