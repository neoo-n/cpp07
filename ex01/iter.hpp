#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void	iter(T *arr, const size_t size, T(* f)(T elt))
{
	for (size_t i = 0; i < size; i++)
		std::cout << f(arr[i]) << std::endl;
}

template <typename T>
T	add_three(T elt)
{
	return (elt += 3);
}

template <typename T>
T	add_f(T elt)
{
	return (elt + 'f');
}

#endif