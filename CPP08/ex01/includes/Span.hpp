#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <list>
# include <vector>

template <typename T> int easyfind(T container, int y)
{
	for(int i = 0; container[i]; i++)
	{
		if (container[i] == y)
			return 1;
	}
	return 0;
}

#endif