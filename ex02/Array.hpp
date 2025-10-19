#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

# define BLUE "\033[34m"
# define WHITE "\033[0m"
# define RED "\033[0;31m"
# define PINK "\033[1;35m"
# define YELLOW "\033[0;33m"
# define DEBUG false

template <typename T>
class Array
{
	private:
		T	*arr;

	public:
		Array();
		Array(const Array &cpy);
		Array(const unsigned int n);
		Array &operator=(const Array &obj);
		~Array();

};

# include "Array.tpp"

#endif