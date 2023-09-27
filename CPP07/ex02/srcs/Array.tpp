template <class T>
Array<T>::Array()
{
	_len = 0;
	_arr = new T[_len];
	std::cout << "Default Constructor Called\n";
}

template <class T>
Array<T>::Array( unsigned int n )
{
	_len = n;
	_arr = new T[n];
	std::cout << "Unsigned int Constructor Called\n";
}

template <class T>
Array<T>::Array( const Array &copy )
{
	_len = copy.size();
	_arr = new T[_len];

	for (unsigned int ui = 0; ui < _len; ui++)
		_arr[ui] = copy[ui];
	std::cout << "Copy Constructor Called\n";
}

template <class T>
Array<T>::~Array()
{
	delete[] _arr;
	std::cout << "Destructor Called\n";
}

template <class T>
Array<T>&	Array<T>::operator= ( const Array &copy )
{
	delete[] _arr;
	_len = copy.size();
	_arr = new T[_len];
	for (unsigned int ui = 0; ui < _len; ui++)
		_arr[ui] = copy[ui];

	std::cout << "Copy Assignement Operator Constructor Called\n";
	return *this;
}

template <class T>
T& Array<T>::operator[](int i) const
{
	if (i < 0 || static_cast<unsigned int>(i) >= _len)
		throw ErrorException();
	return _arr[i];
}


template <class T>
unsigned int Array<T>::size()
{
	return _len;
}
