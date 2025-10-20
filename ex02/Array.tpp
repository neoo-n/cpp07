#include <iostream>

// ----------------------- CONSTRUCTORS ... -----------------------------------
template <typename T>
Array<T>::Array()
: _arr(0), _size(0)
{
	if (DEBUG)	
		std::cout << BLUE << "Default contructor" << std::endl << WHITE;
}

template <typename T>
Array<T>::Array(const Array &cpy)
: _size(cpy._size)
{
	this->_arr = new T[cpy._size];
	for (unsigned int i = 0; i < cpy._size; i++)
		this->_arr[i] = cpy._arr[i];
	if (DEBUG)
		std::cout << BLUE << "Copy contructor" << std::endl << WHITE;
}

template <typename T>
Array<T>::Array(const unsigned int n)
{
	this->_size = n;
	this->_arr = new T[n];
	for (unsigned int i = 0; i < n; i++)
		this->_arr[i] = 0;
	if (DEBUG)
		std::cout << BLUE << "Number contructor" << std::endl << WHITE;
}

template <typename T>
Array<T>	&Array<T>::operator=(const Array &obj)
{
	if (this != &obj)
	{
		this->_size = obj._size;
		this->_arr = new T[obj._size];
		for (unsigned int i = 0; i < obj._size; i++)
			this->_arr[i] = obj._arr[i];
	}
	if (DEBUG)	
		std::cout << PINK << "Assignment operator" << std::endl << WHITE;
	return (*this);
}

template <typename T>
Array<T>::~Array()
{
	if (this->_arr)
		delete[] this->_arr;
	this->_arr = NULL;
	if (DEBUG)	
		std::cout << PINK << "Destructor" << std::endl << WHITE;

}

// ------------------------------- METHOD ------------------------------
template <typename T>
int	Array<T>::size() const
{
	return (this->_size);
}

template <typename T>
T	*Array<T>::getArray()
{
	return (this->_arr);
}

// -------------------------------- OPERATOR ----------------------------------
template <typename T>
T	&Array<T>::operator[](int i)
{
	if (i >= this->size() || i < 0)
		throw std::out_of_range("Out of range : you try to reach something inexistant");
	return (this->_arr[i]);
}
