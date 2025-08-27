#include "ScalarConverter.hpp"
#include <iostream>

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Invalid Argument, need 1 Argument to work." << std::endl;
		return (1);
	}
	else
		ScalarConverter::convert(av[1]);
	return (0);
}