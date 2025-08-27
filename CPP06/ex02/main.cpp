/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 09:53:50 by fbordes           #+#    #+#             */
/*   Updated: 2024/04/29 09:53:51 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <stdint.h>
#include <iostream>
#include <cstdlib>

Base	*generate()
{
	int rand = std::rand() % 3;

	if (rand == 0)
	{
		std::cout << "Base : A class generated !" << std::endl;
		return (new A());
	}
	else if (rand == 1)
	{
		std::cout << "Base : B class generated !" << std::endl;
		return (new B());
	}
	else
	{
		std::cout << "Base : C class generated !" << std::endl;
		return (new C());
	}
}

void	identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Base : Identify as A !" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Base : Identify as B !" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Base : Identify as C !" << std::endl;
	else
		std::cout << "An Error occured while identifying !" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		A	&tmp = dynamic_cast<A&>(p);

		std::cout << "Base : Identify as A !" << std::endl;
		(void)tmp;
		return ;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		B	&tmp = dynamic_cast<B&>(p);

		std::cout << "Base : Identify as B !" << std::endl;
		(void)tmp;
		return ;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		C	&tmp = dynamic_cast<C&>(p);

		std::cout << "Base : Identify as C !" << std::endl;
		(void)tmp;
		return ;
	}
	catch(const std::exception& e)
	{
	}
	std::cout << "An error occured while identifying !" << std::endl;
}

int	main()
{
	Base	*base;

	srand(time(NULL));
	std::cout << "Running Test" << std::endl << std::endl;

	base = generate();
	identify(base);
	identify(*base);
	delete base;

	std::cout << "All tests done !" << std::endl;
	return (0);
}