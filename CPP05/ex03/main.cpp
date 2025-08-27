/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 09:22:16 by fbordes           #+#    #+#             */
/*   Updated: 2024/04/22 11:15:13 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

void	testException()
{
	std::cout << "Running Exception Test\n" << std::endl;
	try
	{
		Intern	dummy;
		dummy.makeForm("Unknow", "Unknow");
	}
	catch (std::exception &e)
	{
		std::cout << "Exception Caught !" << std::endl;
		std::cout << e.what() << std::endl;
	}
}

void	testValidForms()
{
	std::cout << "Running Intern Test\n" << std::endl;
	try
	{
		std::cout << "Making Shrubbery Creation Form\n" << std::endl;
		Intern	dummy;
		AForm	*ref;

		ref = dummy.makeForm("ShrubberyCreationForm", "some Target");
		delete ref;
	}
	catch (std::exception &e)
	{
		std::cout << "Exception Caught !" << std::endl;
                std::cout << e.what() << std::endl;
	}
	try
        {
                std::cout << "Making Robotomy Request Form\n" << std::endl;
                Intern  dummy;
                AForm   *ref;

                ref = dummy.makeForm("RobotomyRequestForm", "some Target");
                delete ref;
        }
        catch (std::exception &e)
        {
                std::cout << "Exception Caught !" << std::endl;
                std::cout << e.what() << std::endl;
        }
	try
        {
                std::cout << "Making Presidential Pardon Form\n" << std::endl;
                Intern  dummy;
                AForm   *ref;

                ref = dummy.makeForm("PresidentialPardonForm", "some Target");
                delete ref;
        }
        catch (std::exception &e)
        {
                std::cout << "Exception Caught !" << std::endl;
                std::cout << e.what() << std::endl;
        }
}
int	main()
{
	testException();
	std::cout << "\n" << std::endl;
	testValidForms();
	std::cout << "\n" << std::endl;
	std::cout << "All test passed" << std::endl;
	return (0);
}
