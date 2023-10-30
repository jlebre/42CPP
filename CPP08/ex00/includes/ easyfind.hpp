#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <list>
# include <vector>
# include <algorithm>

template <typename T> int easyfind(T container, int y)
{
	typename T::iterator it = std::find(container.begin(), container.end(), y);
	if (it != container.end())
		return 1;
	return 0;
}

#endif