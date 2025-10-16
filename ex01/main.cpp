#include "iter.hpp"

int main()
{
	int	arr[4] = {1, 3, 4, 7};
	
	for (int i = 0; i < 4; i++)
		std::cout << arr[i] << std::endl;
	std::cout << std::endl;
	iter(arr, 4, add_three);

	std::cout << "--------------- char -------------------" << std::endl;
	char arr_c[3] = {'s', 'a', '&'};
	for (int i = 0; i < 3; i++)
		std::cout << arr_c[i] << std::endl;
	std::cout << std::endl;
	iter(arr_c, 3, add_three);


	std::cout << "--------------- strings -------------------" << std::endl;

	std::string arr_s[5] = {"Hello", "World", "!", "I'm", "Happy"};
	for (int i = 0; i < 5; i++)
		std::cout << arr_s[i] << std::endl;
	std::cout << std::endl;
	iter(arr_s, 5, add_f);
	return (0);
}