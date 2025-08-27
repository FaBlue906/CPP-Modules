/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 09:21:39 by fbordes           #+#    #+#             */
/*   Updated: 2024/04/15 14:19:43 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("undefine")
{
	this->_grade = 150;
	std::cout << "New Bureaucrat object called " << this->_name << " with grade of " << this->_grade << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name), _grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooLowException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooHighException();
	std::cout << "Bureaucrat called " << this->_name << " with grade " << this->_grade << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
	*this = src;
	std::cout << "New Bureaucrat copy called " << src.getName() << " with grade of " << src.getGrade() << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureau destructor called." << std::endl;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &rhs)
{
	if (this != &rhs)
		this->_grade = rhs.getGrade();
	return (*this);
}

void	Bureaucrat::increment()
{
	this->_grade--;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	std::cout << "Bureaucrat's grade is now " << this->_grade << std::endl;
}

void	Bureaucrat::decrement()
{
	this->_grade++;
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << "Bureaucrat's grade is now " << this->_grade << std::endl;
}

const std::string &Bureaucrat::getName() const
{
    std::cout << "Getting Name of the Bureaucrat..." << std::endl;
	return (this->_name);
}

int	Bureaucrat::getGrade() const
{
    std::cout << "Getting Grade of the Bureaucrat..." << std::endl;
	return (this->_grade);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too High !");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low !");
}

std::ostream &operator<<(std::ostream &o, const Bureaucrat &b)
{
	o << b.getName() << ", Bureaucrat grade " << b.getGrade() << "." << std::endl;
	return (o);
}
