/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 11:02:33 by fbordes           #+#    #+#             */
/*   Updated: 2024/04/22 10:47:21 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("undefine"), _signg(150), _execg(150)
{
	this->_signed = false;
	std::cout << "New AForm object called " << this->_name << " with required sign " << this->_signg << " and required execution " << this->_execg << "." << std::endl;
}

AForm::AForm(const std::string &name, const int signg, const int execg) : _name(name), _signg(signg), _execg(execg)
{
	if (signg < 1 || execg < 1)
		throw AForm::GradeTooHighException();
	else if (signg > 150 || execg > 150)
		throw AForm::GradeTooLowException();
	this->_signed = false;
	std::cout << "New AForm object called " << this->_name << " with required sign " << this->_signg << " and required execution " << this->_execg << "." << std::endl;
}

AForm::AForm(const AForm &src) : _name(src.getName()), _signg(src.getSignGrade()), _execg(src.getSignExec())
{
	*this = src;
	std::cout << "New AForm copy called " << this->_name << "." << std::endl;
}

AForm	&AForm::operator=(const AForm &f)
{
	if (this != &f)
		this->_signed = f.getSigned();
	return (*this);
}

AForm::~AForm()
{
}

void	AForm::beSigned(Bureaucrat &b)
{
	if (b.getGrade() > this->_signg)
		throw AForm::GradeTooLowException();
	if (!this->_signed)
		this->_signed = true;
}

void	AForm::execute(Bureaucrat const &exec) const
{
	if (!this->getSigned())
		throw AForm::UnsignedFormException();
	else if (exec.getGrade() > this->_execg)
		throw AForm::GradeTooLowException();
	executeReq(exec);
}

void	AForm::executeReq(Bureaucrat const &exec) const
{
	(void) exec;
}

const	std::string	&AForm::getName() const
{
	return (this->_name);
}

const int	&AForm::getSignGrade() const
{
	return (this->_signg);
}

const int	&AForm::getSignExec() const
{
	return (this->_execg);
}

bool	AForm::getSigned() const
{
	return (this->_signed);
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is too High !");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Grade is too Low !");
}

const char* AForm::UnsignedFormException::what() const throw()
{
	return ("Form is not signed !");
}

std::ostream	&operator<<(std::ostream &o, const AForm &f)
{
	o << f.getName() << ", AForm sign grade " << f.getSignGrade() << ", execution sign " << f.getSignExec() << " is signed " << (!f.getSigned() ? "no" : "yes") << ".";
	return (o);
}
