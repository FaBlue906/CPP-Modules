/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:15:22 by fbordes           #+#    #+#             */
/*   Updated: 2024/04/22 09:53:19 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
	this->_target = "undefine";
	std::cout << "New RobotomyRequestForm object called with target " << this->_target << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
	this->_target = target;
	std::cout << "New RobotomyRequestForm object called with target " << this->_target << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &r) : AForm(r)
{
	*this = r;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &r)
{
	if (this != &r)
		this->_target = r._target;
	return (*this);
}

void	RobotomyRequestForm::executeReq(Bureaucrat const &exec) const
{
	std::cout << "Bzzzz bzzz" << std::endl;
	srand((unsigned) time(NULL));
	if (rand() % 2 == 0)
		std::cout << this->getName() << " has been robotomized." << std::endl;
	else
		std::cout << this->getName() << "'s robotomy has failed." << std::endl;
	(void) exec;
}
