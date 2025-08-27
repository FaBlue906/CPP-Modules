/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 09:22:16 by fbordes           #+#    #+#             */
/*   Updated: 2024/04/15 15:15:07 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void	testException()
{
	std::cout << "Running Exception Test" << std::endl;
	std::cout << "\n" << std::endl;
	try
	{
		Bureaucrat	Dummy("Dummy", 0);
	}
	catch (std::exception &exception)
	{
		std::cout << "Exception Caught !" << std::endl;
		std::cout << exception.what() << std::endl;
	}
	std::cout << "\n" << std::endl;
	std::cout << "Running Exception Test 2" << std::endl;
	std::cout << "\n" << std::endl;
        try
        {
                Bureaucrat      Dummy("Dummy", 151);
        }
        catch (std::exception &exception)
        {
                std::cout << "Exception Caught !" << std::endl;
                std::cout << exception.what() << std::endl;
        }
}

void	testGradeControl()
{
	std::cout << "Running Incrementation Test" << std::endl;
	std::cout << "\n" << std::endl;
	try
	{
		Bureaucrat	Dummy("Dummy", 149);
		Dummy.increment();
	}
        catch (std::exception &exception)
        {
                std::cout << "Exception Caught !" << std::endl;
                std::cout << exception.what() << std::endl;
        }
	std::cout << "\n" << std::endl;
	std::cout << "Running Decrementation Test" << std::endl;
	std::cout << "\n" << std::endl;
	try
	{
		Bureaucrat	Dummy("Dummy", 149);
		Dummy.decrement();
	}
	catch (std::exception &exception)
        {
                std::cout << "Exception Caught !" << std::endl;
                std::cout << exception.what() << std::endl;
        }
}

void	testGetter()
{
	std::cout << "Running Getter Test\n" << std::endl;
	try
	{
		std::string	s;
		Bureaucrat	Dummy("Dummy", 3);
		s = Dummy.getName();
		std::cout << s << std::endl;
	}
	catch (std::exception &exception)
	{
		std::cout << "Exception Caught !" << std::endl;
		std::cout << exception.what() << std::endl;
	}
	std::cout << "\n" << std::endl;
	std::cout << "Running Getter Test 2\n" << std::endl;
	try
	{
		int	n;
		Bureaucrat	Dummy("Dummy", 4);
		n = Dummy.getGrade();
		std::cout << n << std::endl;
	}
	catch (std::exception &exception)
	{
		std::cout << "Exception Caught !" << std::endl;
		std::cout << exception.what() << std::endl;
	}
}

int	main()
{
	testException();
	std::cout << "\n" << std::endl;
	testGradeControl();
	std::cout << "\n" << std::endl;
	testGetter();
	std::cout << "\n" << std::endl;
	std::cout << "All test passed" << std::endl;
	return (0);
}
