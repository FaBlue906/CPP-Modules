/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 09:12:05 by fbordes           #+#    #+#             */
/*   Updated: 2024/05/03 09:12:07 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

void    testExceptions()
{
	std::cout << "Running Exceptions Tests\n" << std::endl;
	std::cout << "Starting with vector.\n" << std::endl;
	try
	{
		std::vector<int>    vect;
		int find = 10;
		vect.push_back(2);
		vect.push_back(1);
		vect.push_back(3);
		vect.push_back(5);
		vect.push_back(4);

		std::vector<int>::iterator it = easyfind(vect, find);
		std::cout << "Found number " << find << " at index " << std::distance(vect.begin(), it) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "Exception Caught!" << std::endl;
		std::cerr << e.what() << '\n';
	}
	std::cout << "Now let's test with list\n" << std::endl;
	try
	{
		std::list<char> list;
		char	find = 'z';

		list.push_back('a');
		list.push_back('b');
		list.push_back('c');
		list.push_back('d');
		list.push_back('e');

		std::list<char>::iterator it = easyfind(list, find);
		std::cout << "Found char " << find << " at index " << std::distance(list.begin(), it) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "Exception Caught !" << std::endl;
		std::cerr << e.what() << '\n';
	}

	std::cout << "Exceptions Test done !" << std::endl;
}

void    normalTests()
{
	std::cout << "Running Valid Tests this time ! Staring with vector\n" << std::endl;
	try
	{
		std::vector<int>	vect;
		int	find = 1;

		vect.push_back(2);
		vect.push_back(1);
		vect.push_back(3);
		vect.push_back(5);
		vect.push_back(4);

		std::vector<int>::iterator it = easyfind(vect, find);
		std::cout << "Found number " << find << " at index " << std::distance(vect.begin(), it) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "Exception Caught !" << std::endl;
		std::cerr << e.what() << '\n';
	}
	std::cout << "Running list Tests now !\n" << std::endl;
	try
	{
		std::list<char> list;
		char	find = 'a';

		list.push_back('a');
		list.push_back('b');
		list.push_back('c');
		list.push_back('d');
		list.push_back('e');

		std::list<char>::iterator it = easyfind(list, find);
		std::cout << "Found char " << find << " at index " << std::distance(list.begin(), it) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "Exception Caught !" << std::endl;
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "Valid Test done !" << std::endl;
}

int main()
{
	testExceptions();
	std::cout << std::endl;
	normalTests();
	std::cout << std::endl;
	std::cout << "All test passed, congrats !" << std::endl;
	return (0);
}
