#include "../includes/Span.hpp"

void	green(std::string str)
{
	std::cout << "\n\033[0;32m" << str << "\033[0m\n";
}

int main()
{
	green("Testing subject example");
	{
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}

	green("Testing not everything filled");
	{
		try
		{
			Span sp = Span(5);

			sp.addNumber(1);
			sp.addNumber(5);
			sp.addNumber(18);
			sp.addNumber(9);

			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
	}

	green("Testing with negative numbers");
	{
		try
		{
			Span sp = Span(5);

			sp.addNumber(-7);
			sp.addNumber(3);
			sp.addNumber(10);
			sp.addNumber(15);
			sp.addNumber(-5);

			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
	}

	green("Testing with zero");
	{
		try
		{
			Span sp = Span(5);

			sp.addNumber(0);
			sp.addNumber(-5);
			sp.addNumber(0);
			sp.addNumber(5);
			sp.addNumber(0);

			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
	}

	green("Testing less than limit");
	{
		try
		{
			Span sp = Span(5);

			sp.addNumber(1);

			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
	}

	green("Testing more than limit");
	{
		try
		{
			Span sp = Span(5);

			sp.addNumber(0);
			sp.addNumber(5);
			sp.addNumber(10);
			sp.addNumber(15);
			sp.addNumber(20);

			sp.addNumber(25);

			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
	}

	green("Testing random with 10000");
	{
		try
		{
			Span sp1 = Span(10000);
			sp1.addById();

			std::cout << sp1.shortestSpan() << std::endl;
			std::cout << sp1.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
	}

	green("Testing random with 20000");
	{
		try
		{
			Span sp2 = Span(20000);
			sp2.addRand();

			std::cout << sp2.shortestSpan() << std::endl;
			std::cout << sp2.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
	}

	green("Testing random with 30000");
	{
		try
		{
			Span sp3 = Span(30000);
			sp3.addRand();

			std::cout << sp3.shortestSpan() << std::endl;
			std::cout << sp3.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
	}

	return 0;
}