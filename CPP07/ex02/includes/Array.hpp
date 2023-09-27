#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template <class T> class Array
{
	private:
		T *_arr;
		unsigned int _len;

	public:
		Array();
		Array( unsigned int n );
		Array(const Array &copy);
		~Array();
		Array&	operator= (const Array &copy);
		T& operator[](int i) const;

		unsigned int size();

		class ErrorException: public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return "Error! Index crosses the limits";
				}
		};
};

# include "../srcs/Array.tpp"

#endif