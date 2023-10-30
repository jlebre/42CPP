#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

class Awesome
{
	public:
		Awesome(void): _n(42){return;}
		int get(void) const {return this->_n;}
	private:
		int _n;
};
std::ostream & operator<<(std::ostream & o, Awesome const & rhs) {o << rhs.get(); return o;}

template <typename T, typename Func> void iter(T *arr, size_t len, Func func)
{
	for (size_t i = 0; i < len; i++)
		func(arr[i]);
}

template <typename T> void print( T& c)
{
	std::cout << c << std::endl;
}

#endif