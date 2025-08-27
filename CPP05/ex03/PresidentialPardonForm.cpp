/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:15:03 by fbordes           #+#    #+#             */
/*   Updated: 2024/04/22 09:52:43 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{
	this->_target = "undefine";
	std::cout << "New PresidentialPardonForm object with target " << this->_target << "." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5)
{
	this->_target = target;
	std::cout << "New PresidentialPardonForm object with target " << this->_target << "." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &p) : AForm(p)
{
	*this = p;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &p)
{
	if (this != &p)
		this->_target = p._target;
	return (*this);
}

void	PresidentialPardonForm::executeReq(Bureaucrat const &exec) const
{
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	(void) exec;
}
