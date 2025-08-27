/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 10:49:24 by fbordes           #+#    #+#             */
/*   Updated: 2024/04/22 11:13:51 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class	Intern
{
	public:
		Intern();
		Intern(const Intern &i);
		Intern &operator=(const Intern &i);
		~Intern();

		class FormNotFound : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		AForm*	makeForm(std::string formName, std::string target) const;

};

#endif
