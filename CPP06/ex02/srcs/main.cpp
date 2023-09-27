#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>

Base * generate(void)
{
	srand(time(NULL));
	int i = rand() % 3;

	switch (i)
	{
		case 0:
			std::cout << "Creating A object\n";
			return new A;
		case 1:
			std::cout << "Creating B object\n";
			return new B;
		case 2:
			std::cout << "Creating C object\n";
			return new C;
		default:
			std::cout << "Error!\n";
			return NULL;
	}
}

void identify(Base* p)
{
	A *check_a = dynamic_cast<A*>(p);
	if (check_a)
	{	
		std::cout << "A object\n";
		return;
	}
	B *check_b = dynamic_cast<B*>(p);
	if (check_b)
	{	
		std::cout << "B object\n";
		return;
	}
	C *check_c = dynamic_cast<C*>(p);
	if (check_c)
	{	
		std::cout << "C object\n";
		return;
	}
}

void identify(Base& p)
{
	try {
		A check_a = dynamic_cast<A&>(p);
		std::cout << "A object\n";
	}catch(std::exception &e){}

	try {
		B check_b = dynamic_cast<B&>(p);
		std::cout << "B object\n";
	}catch(std::exception &e){}

	try {
		C check_c = dynamic_cast<C&>(p);
		std::cout << "C object\n";
	}catch(std::exception &e){}
}

int main()
{
	Base *p = generate();

	identify(p);
	delete p;
	p = generate();
	identify(*p);
	delete p;

	return 0;
}