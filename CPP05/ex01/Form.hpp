/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:28:08 by fbordes           #+#    #+#             */
/*   Updated: 2024/04/17 10:01:51 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string _name;
		const int	_execg;
		bool	_signed;
		const int	_signg;
	public:
		Form();
		Form(const std::string &name, const int execg, const int signg);
		Form(const Form &src);
		Form	&operator=(const Form &f);
		~Form();

		const	std::string &getName() const;
		const int	&getExecGrade() const;
		bool	getSigned() const;
		const int	&getSignGrade() const;

		void	beSigned(Bureaucrat &b);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &o, const Form &f);

#endif
