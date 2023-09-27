#include "Array.hpp"

int main( void ) 
{
	Array<int> intArr(500);
	int *intArr2 = new int[500];

	for (int i = 0; i < 500; i++)
	{
		intArr[i] = i;
		intArr2[i] = i;
	}

	for (int i = 0; i < 500; i++)
	{
		if (intArr[i] != intArr2[i])
		{
			std::cerr << "Error: Values are not equal!\n";
			return -1;
		}
	}
	std::cout << "All values are equal!\n";

	try
	{
		intArr[-5] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		intArr[501] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	delete[] intArr2;

	return 0;
}
