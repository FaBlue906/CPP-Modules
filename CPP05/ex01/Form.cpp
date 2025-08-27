/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:28:03 by fbordes           #+#    #+#             */
/*   Updated: 2024/04/17 10:07:05 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("undefine"), _execg(150), _signg(150)
{
	std::cout << "New Form object called " << this->_name << " that need a grade of " << this->_signg << " to be sign and a grade of " << this->_execg << " to be execute." << std::endl;
}

Form::Form(const std::string &name, const int execg, const int signg) : _name(name), _execg(execg), _signg(signg)
{
	if (execg < 1 || signg < 1)
		throw Form::GradeTooHighException();
	else if (execg > 150 || signg > 150)
		throw Form::GradeTooLowException();
	std::cout << "Form called " << this->_name << " that need a grade of " << this->_signg << " to be sign and a grade of " << this->_execg << " to be execute." << std::endl;
}

Form::Form(const Form &src) : _name(src.getName()), _execg(src.getExecGrade()), _signg(src.getSignGrade())
{
	*this = src;
	std::cout << "New Form copy called " << src.getName() << " that need a grade of " << src.getSignGrade() << " to be sign and a grade of " << src.getExecGrade() << " to be execute." << std::endl;
}

Form::~Form()
{
}

Form	&Form::operator=(const Form &f)
{
	if (this != &f)
		this->_signed = f.getSigned();
	return (*this);
}

const std::string &Form::getName() const
{
	return (this->_name);
}

const int	&Form::getExecGrade() const
{
	return (this->_execg);
}

bool	Form::getSigned() const
{
	return (this->_signed);
}

const int	&Form::getSignGrade() const
{
	return (this->_signg);
}

void	Form::beSigned(Bureaucrat &b)
{
	if (b.getGrade() > this->_signg)
		throw Form::GradeTooLowException();
	if (!this->_signed)
		this->_signed = true;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Form Grade is too High !");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Form Grade is too Low !");
}

std::ostream &operator<<(std::ostream &o, const Form &f)
{
	o << f.getName() << ", Form sign Grade " << f.getSignGrade() << ", Form Execution sign " << f.getExecGrade() << ", is signed " << (!f.getSigned() ? "no" : "yes") << ".";
	return (o);
}

