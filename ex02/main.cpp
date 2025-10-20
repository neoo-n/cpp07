#include <iostream>
#include <cstdlib>
#include "Array.hpp"

#define MAX_VAL 750

int	subject_main()
{
	Array<int> numbers(MAX_VAL);
	if (!numbers.getArray())
	{
		std::cerr << RED << "Error : allocation" << std::endl << WHITE;
		return (1);
	}
    int* mirror = new(std::nothrow) int[MAX_VAL];
	if (!mirror)
	{
		std::cerr << RED << "Error : allocation" << std::endl << WHITE;
		return (1);
	}
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
		if (!tmp.getArray())
		{
			std::cerr << RED << "Error : allocation" << std::endl << WHITE;
			return (1);
		}
        Array<int> test(tmp);
		if (!test.getArray())
		{
			std::cerr << RED << "Error : allocation" << std::endl << WHITE;
			return (1);
		}
    }


    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << RED << "didn't save the same value!!" << std::endl << WHITE;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << RED << e.what() << "\n" << WHITE;
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;
	return (0);
}

int string_test()
{
	Array<std::string> list_name(3);
	if (!list_name.getArray())
	{
		std::cerr << RED << "didn't save the same value!!" << std::endl << WHITE;
		return 1;
	}
	try
	{
		for (int i = 0; i < 3; i++)
		{
			list_name[i] = "Hello";
			std::cout << list_name[i] << std::endl;
		}
	}
	catch(const std::exception& e)
	{
        std::cerr << RED << e.what() << std::endl << WHITE;
	}
	std::cout << "* TESTING OUT OF RANGE *" << std::endl;
	try
	{
		for (int i = 0; i < 4; i++)
		{
			list_name[i] = "Hello";
			std::cout << list_name[i] << std::endl;
		}
	}
	catch(const std::exception& e)
	{
        std::cerr << RED << e.what() << std::endl << WHITE;
	}
	return (0);
}

int main(int, char**)
{
	if (subject_main())
		return (1);
	if (string_test())
		return (1);
    return 0;
}