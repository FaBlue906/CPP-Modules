/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 10:49:18 by fbordes           #+#    #+#             */
/*   Updated: 2024/04/22 11:16:55 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "New object." << std::endl;
}

Intern::Intern(const Intern &i)
{
	*this = i;
}

Intern::~Intern()
{
}

Intern	&Intern::operator=(const Intern &i)
{
	(void) i;
	return (*this);
}

AForm	*Intern::makeForm(std::string formName, std::string target) const
{
	AForm	*f[3];
	AForm	*returned = NULL;
	f[0] = new ShrubberyCreationForm(target);
	f[1] = new RobotomyRequestForm(target);
	f[2] = new PresidentialPardonForm(target);
	for (int i = 0; i < 3; i++)
	{
		if (formName == f[i]->getName())
			returned = f[i];
	}
	for (int i = 0; i < 3; i++)
	{
		if (f[i] != returned)
			delete f[i];
	}
	if (!returned)
		throw FormNotFound();
	std::cout << "The Intern just made a form named " << returned->getName() << "." << std::endl;
	return (returned);
}

const char*	Intern::FormNotFound::what() const throw()
{
	return ("Form not Found.");
}
