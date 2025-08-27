/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 09:22:16 by fbordes           #+#    #+#             */
/*   Updated: 2024/04/22 09:36:38 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

void	testShrubbery()
{
	std::cout << "Running Shrubbery Creation Form Test\n" << std::endl;
	Bureaucrat	goodB("Good Bureaucrat", 136);
	Bureaucrat	badSB("Bad Sign Bureaucrat", 146);
	Bureaucrat	badEB("Bad Exec Bureaucrat", 138);
	try
	{
		std::cout << "Good Bureaucrat will try to sign and execute Form\n" << std::endl;
		ShrubberyCreationForm	dummyForm("GoodForm");

		goodB.signForm(dummyForm);
		goodB.executeForm(dummyForm);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception Caught !" << std::endl;
		std::cout << e.what() << std::endl;
	}
	try
        {
                std::cout << "Bad Sign Bureaucrat will try to sign and execute Form\n" << std::endl;
                ShrubberyCreationForm   dummyForm("BadSignForm");

                badSB.signForm(dummyForm);
                badSB.executeForm(dummyForm);
        }
        catch (std::exception &e)
        {
                std::cout << "Exception Caught !" << std::endl;
                std::cout << e.what() << std::endl;
        }
	try
        {
                std::cout << "Bad Exec Bureaucrat will try to sign and execute Form\n" << std::endl;
                ShrubberyCreationForm   dummyForm("BadExecForm");

                badEB.signForm(dummyForm);
                badEB.executeForm(dummyForm);
        }
        catch (std::exception &e)
        {
                std::cout << "Exception Caught !" << std::endl;
                std::cout << e.what() << std::endl;
        }
}

void	testRobotomy()
{
	std::cout << "Running Robotomy Request Test\n" << std::endl;
	Bureaucrat      goodB("Good Bureaucrat", 45);
        Bureaucrat      badSB("Bad Sign Bureaucrat", 73);
        Bureaucrat      badEB("Bad Exec Bureaucrat", 46);
        try
        {
                std::cout << "Good Bureaucrat will try to sign and execute Form\n" << std::endl;
                RobotomyRequestForm   dummyForm("GoodForm");

                goodB.signForm(dummyForm);
                goodB.executeForm(dummyForm);
        }
        catch (std::exception &e)
        {
                std::cout << "Exception Caught !" << std::endl;
                std::cout << e.what() << std::endl;
        }
        try
        {
                std::cout << "Bad Sign Bureaucrat will try to sign and execute Form\n" << std::endl;
                RobotomyRequestForm   dummyForm("BadSignForm");

                badSB.signForm(dummyForm);
                badSB.executeForm(dummyForm);
        }
        catch (std::exception &e)
        {
                std::cout << "Exception Caught !" << std::endl;
                std::cout << e.what() << std::endl;
        }
        try
        {
                std::cout << "Bad Exec Bureaucrat will try to sign and execute Form\n" << std::endl;
                RobotomyRequestForm   dummyForm("BadExecForm");

                badEB.signForm(dummyForm);
                badEB.executeForm(dummyForm);
        }
        catch (std::exception &e)
        {
                std::cout << "Exception Caught !" << std::endl;
                std::cout << e.what() << std::endl;
        }
}

void	testPresidential()
{
	std::cout << "Running Presidential Pardon Form Test\n" << std::endl;
	Bureaucrat      goodB("Good Bureaucrat", 1);
        Bureaucrat      badSB("Bad Sign Bureaucrat", 26);
        Bureaucrat      badEB("Bad Exec Bureaucrat", 6);
        try
        {
                std::cout << "Good Bureaucrat will try to sign and execute Form\n" << std::endl;
                PresidentialPardonForm   dummyForm("GoodForm");

                goodB.signForm(dummyForm);
                goodB.executeForm(dummyForm);
        }
        catch (std::exception &e)
        {
                std::cout << "Exception Caught !" << std::endl;
                std::cout << e.what() << std::endl;
        }
        try
        {
                std::cout << "Bad Sign Bureaucrat will try to sign and execute Form\n" << std::endl;
                PresidentialPardonForm   dummyForm("BadSignForm");

                badSB.signForm(dummyForm);
                badSB.executeForm(dummyForm);
        }
        catch (std::exception &e)
        {
                std::cout << "Exception Caught !" << std::endl;
                std::cout << e.what() << std::endl;
        }
        try
        {
                std::cout << "Bad Exec Bureaucrat will try to sign and execute Form\n" << std::endl;
                PresidentialPardonForm   dummyForm("BadExecForm");

                badEB.signForm(dummyForm);
                badEB.executeForm(dummyForm);
        }
        catch (std::exception &e)
        {
                std::cout << "Exception Caught !" << std::endl;
                std::cout << e.what() << std::endl;
        }
}
int	main()
{
	testShrubbery();
	std::cout << "\n" << std::endl;
	testRobotomy();
	std::cout << "\n" << std::endl;
	testPresidential();
	std::cout << "\n" << std::endl;
	std::cout << "All test passed" << std::endl;
	return (0);
}
