#include "PmergeMe.hpp"

int main(int argc, char **argv) 
{
	if (argc < 2)
	{
		std::cout << "Invalid number of arguments\n";
		return 1;
	}

	std::vector<int> input;
	for (int i = 1; i < argc; i++)
		input.push_back(atoi(argv[i]));
	
	PmergeMe mer;
	mer.merge(input);

	return 0;
}
