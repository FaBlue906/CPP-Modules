/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 10:30:55 by fbordes           #+#    #+#             */
/*   Updated: 2024/05/03 08:44:22 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "whatever.hpp"

void testSubject()
{
	std::cout << "This is the test in the subject\n" << std::endl;
	int a = 2;
	int b = 3;

	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
	std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
	std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
}

void testSwap()
{
	std::cout << "Running another tests, starting with int\n" << std::endl;
	{
		int	a = 1;
		int b = 2;
		std::cout << "a = " << a << " | b = " << b << std::endl;
		::swap(a, b);
		std::cout << "a = " << a << " | b = " << b << std::endl;
	}
	std::cout << "Now with char\n" << std::endl;
	{
		char a = 'a';
		char b = 'b';
		std::cout << "a = " << a << " | b = " << b << std::endl;
		::swap(a, b);
		std::cout << "a = " << a << " | b = " << b << std::endl;
	}
	std::cout << "Now with strings\n" << std::endl;
	{
		std::string a = "Welcome";
		std::string b = "Goodbye";
		std::cout << "a = " << a << " | b = " << b << std::endl;
		::swap(a, b);
		std::cout << "a = " << a << " | b = " << b << std::endl;
	}
	std::cout << "Swap Test done !\n" << std::endl;
}

void testMin()
{
	std::cout << "Running test with min, starting with int\n" << std::endl;
	{
		int a = 1;
		int b = 2;
		std::cout << "a = " << a << " | b = " << b << std::endl;
		std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
	}
	std::cout << "Now with char\n" << std::endl;
	{
		char a = 'a';
		char b = 'b';
		std::cout << "a = " << a << " | b = " << b << std::endl;
		std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
	}
	std::cout << "Now with strings\n" << std::endl;
	{
		std::string a = "Welcome";
		std::string b = "Goodbye";
		std::cout << "a = " << a << " | b = " << b << std::endl;
		std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
	}
	std::cout << "Min test done !\n" << std::endl;
}

void testMax()
{
	std::cout << "Running test with max, starting with int\n" << std::endl;
	{
		int a = 1;
		int b = 2;
		std::cout << "a = " << a << " | b = " << b << std::endl;
		std::cout << "max(a, b) = " << ::max(a, b) << std::endl;
	}
	std::cout << "Now with char\n" << std::endl;
	{
		char a = 'a';
		char b = 'b';
		std::cout << "a = " << a << " | b = " << b << std::endl;
		std::cout << "max(a, b) = " << ::max(a, b) << std::endl;
	}
	std::cout << "Now with strings\n" << std::endl;
	{
		std::string a = "Welcome";
		std::string b = "Goodbye";
		std::cout << "a = " << a << " | b = " << b << std::endl;
		std::cout << "max(a, b) = " << ::max(a, b) << std::endl;
	}
	std::cout << "Max test done !\n" << std::endl;
}

int main()
{
	testSubject();
	std::cout << std::endl;
	testSwap();
	testMin();
	testMax();
	std::cout << "All test done !" << std::endl;
	return (0);
}