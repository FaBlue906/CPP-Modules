/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:14:39 by fbordes           #+#    #+#             */
/*   Updated: 2024/04/18 16:05:26 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
	this->_target = "undefine";
	std::cout << "New ShrubberyCreationForm object with target " << this->_target << "." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137)
{
	this->_target = target;
	std::cout << "New ShrubberyCreationForm object with target " << this->_target << "." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &s)
{
	*this = s;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void	ShrubberyCreationForm::executeReq(Bureaucrat const &exec) const
{
	std::string	fileName = this->_target + "_shrubbery";
	std::ofstream	outfile(fileName.c_str());
	
	if (!outfile.is_open())
	{
		std::cout << "An error occured while creating outfile." << std::endl;
		return ;
	}
	outfile << "		 v" << std::endl;
	outfile << "            >X<" << std::endl;
	outfile << "             A" << std::endl;
	outfile << "            d$b" << std::endl;
	outfile << "          .d\\$$b." << std::endl;
	outfile << "        .d$i$$\\$$b." << std::endl;
	outfile << "           d$$@b" << std::endl;
	outfile << "          d\\$$$ib" << std::endl;
	outfile << "        .d$$$\\$$$b" << std::endl;
	outfile << "      .d$$@$$$$\\$$ib." << std::endl;
	outfile << "    .d$$$$i$$$\\$$$$$$b." << std::endl;
	outfile << "            ###" << std::endl;
	outfile << "            ###" << std::endl;
	outfile << "            ###" << std::endl;
	outfile.close();
	(void) exec;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &s)
{
	if (this != &s)
		this->_target = s._target;
	return (*this);
}
