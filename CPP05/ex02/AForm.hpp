/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 10:13:05 by fbordes           #+#    #+#             */
/*   Updated: 2024/04/22 09:37:06 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string	_name;
		const int	_signg;
		const int	_execg;
		bool	_signed;
	public:
		AForm();
		AForm(const std::string &name, const int signg, const int execg);
		AForm(const AForm &src);
		AForm	&operator=(const AForm &f);
		~AForm();

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
		class UnsignedFormException : public std::exception
                {
                        public:
                                virtual const char* what() const throw();
                };

		void	beSigned(Bureaucrat &b);
		void	execute(Bureaucrat const &exec) const;
		virtual void	executeReq(Bureaucrat const &exec) const = 0;

		const std::string	&getName() const;
		const int	&getSignGrade() const;
		const int	&getSignExec() const;
		bool	getSigned() const;
};

std::ostream	&operator<<(std::ostream &out, const AForm &f);

#endif
