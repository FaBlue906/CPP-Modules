/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:51:44 by fbordes           #+#    #+#             */
/*   Updated: 2024/04/25 10:31:18 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP
# define SCALAR_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <limits>

class	ScalarConverter
{
	public:
		static void convert(const std::string	&literal);

		static void	convertChar(const std::string &literal);
		static void	convertInt(const std::string &literal);
		static void	convertFloat(const std::string &literal);
		static void	convertDouble(const std::string &literal);

		static bool	isChar(const std::string &literal);
		static bool     isInt(const std::string &literal);
		static bool     isDouble(const std::string &literal);
		static bool     isFloat(const std::string &literal);

		static double stod(const std::string &literal);
		static float stof(const std::string &literal);

		class	UnknowTypeException
		{
			public:
				virtual const char* what() const throw();
		};
};

#endif
