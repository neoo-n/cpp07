#include <iostream>

template <typename T>
Array::Array()
: arr(0)
{
	if (DEBUG)	
		std::cout << BLUE << "Default contructor" << std::endl << WHITE;
}