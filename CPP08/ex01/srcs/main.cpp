#include "../includes/Span.hpp"

int main( void ) 
{
	std::vector<int>	container;

	container.push_back(1);
	container.push_back(15);
	container.push_back(8);
	container.push_back(3);
	container.push_back(9);
	container.push_back(42);
	container.push_back(-3);

	if (easyfind(container, 3))
		std::cout << "Sucess!\n";
	else
		std::cerr << "Failed!\n";

	if (easyfind(container, 5))
		std::cout << "Sucess!\n";
	else
		std::cerr << "Failed!\n";

	return 0;
}
