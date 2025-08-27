/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 09:22:16 by fbordes           #+#    #+#             */
/*   Updated: 2024/04/17 10:09:59 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

void	testException()
{
	std::cout << "Running Exception Test : Too High Sign Grade" << std::endl;
	std::cout << "\n" << std::endl;
	try
	{
		Form	Dummy("Dummy", 0, 1);
	}
	catch (std::exception &exception)
	{
		std::cout << "Form Exception Caught !" << std::endl;
		std::cout << exception.what() << std::endl;
	}
	std::cout << "\n" << std::endl;
	std::cout << "Running Exception Test : Too Low Sign Grade" << std::endl;
	std::cout << "\n" << std::endl;
        try
        {
                Form	Dummy("Dummy", 151, 1);
        }
        catch (std::exception &exception)
        {
                std::cout << "Form Exception Caught !" << std::endl;
                std::cout << exception.what() << std::endl;
        }
	std::cout << "\n" << std::endl;
	std::cout << "Running Exception Test : Too Low Execution Grade\n" << std::endl;
	try
	{
		Form	Dummy("Dummy", 1, 151);
	}
	catch (std::exception &exception)
	{
		std::cout << "Form Exception Caught !" << std::endl;
		std::cout << exception.what() << std::endl;
	}
	std::cout << "\n" << std::endl;
	std::cout << "Running Final Exception Test : Too High Execution Grade\n" << std::endl;
	try
	{
		Form	Dummy("Dummy", 1, 0);
	}
	catch (std::exception &exception)
	{
		std::cout << "Form Exception Caught !" << std::endl;
		std::cout << exception.what() << std::endl;
	}
	std::cout << "Exception Test Done !" << std::endl;
}

void	testSign()
{
	try
	{
		std::cout << "Running Form Signing Test" << std::endl;
		std::cout << "\n" << std::endl;
		Form	dummyForm("Dummy", 21, 1);
		Bureaucrat	badBureaucrat("Bob", 22);
		badBureaucrat.signForm(dummyForm);
		std::cout << "\n" << std::endl;
		Bureaucrat	goodBureaucrat("Gero", 21);
		goodBureaucrat.signForm(dummyForm);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception Caught !" << std::endl;
		std::cout << e.what() << std::endl;
	}
}

void	testGetter()
{
	std::cout << "Running Getter Test\n" << std::endl;
	try
	{
		Form	dummy("Dummy", 42, 1);
		std::cout << "\n" << std::endl;
		std::cout << "Name ? " << dummy.getName() << std::endl;
		std::cout << "\n" << std::endl;
		std::cout << "Signed ? " << (!dummy.getSigned() ? "no" : "yes") << std::endl;
		std::cout << "\n" << std::endl;
		std::cout << "Execution Grade ? " << dummy.getExecGrade() << std::endl;
		std::cout << "\n" << std::endl;
		std::cout << "Sign Grade ? " << dummy.getSignGrade() << std::endl;
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
	testSign();
	std::cout << "\n" << std::endl;
	testGetter();
	std::cout << "\n" << std::endl;
	std::cout << "All test passed" << std::endl;
	return (0);
}
