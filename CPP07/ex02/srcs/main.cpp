#include "Array.hpp"

#define MAX_VAL 750
int main()
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }

    std::cout << "Checking values in numbers and mirror:" << std::endl;
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "Didn't save the same value!!" << std::endl;
            return 1;
        }
        if (i == MAX_VAL - 1)
            std::cout << "Saved the same values!!" << std::endl;
    }

    std::cout << "Trying to access out of bounds: -2" << std::endl;
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "Trying to access out of bounds: MAX_VAL" << std::endl;
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }

    std::cout << "Creating an empty array" << std::endl;
    Array<int> empty;
    std::cout << "Trying to access out of bounds: 0" << std::endl; 
    try
    {
        empty[0] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "Creating array of size 5" << std::endl;
    Array<int> five(5);

    five[0] = 5;
    five[1] = 4;
    five[2] = 3;
    five[3] = 2;
    five[4] = 1;

    std::cout << five[2] << std::endl;

    delete [] mirror;//
    return 0;
}
