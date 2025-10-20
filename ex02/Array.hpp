#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

# define BLUE "\033[34m"
# define WHITE "\033[0m"
# define RED "\033[0;31m"
# define PINK "\033[1;35m"
# define YELLOW "\033[0;33m"
# define DEBUG true

template <typename T>
class Array
{
	private:
		T				*_arr;
		unsigned int	_size;

	public:
		Array();
		Array(const Array &cpy);
		Array(const unsigned int n);
		Array &operator=(const Array &obj);
		~Array();

		int		size() const;
		T const	*getArray() const;

		T	&operator[](int i);

};

# include "Array.tpp"

#endif