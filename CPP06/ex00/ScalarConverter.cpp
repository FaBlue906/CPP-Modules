/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:51:38 by fbordes           #+#    #+#             */
/*   Updated: 2024/04/25 11:04:45 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

float	ScalarConverter::stof(const std::string &literal)
{
	 std::istringstream iss(literal);
	 float f;
	 iss >> f;
	 if (literal == "nanf")
	 	return (std::numeric_limits<float>::quiet_NaN());
	else if (literal == "+inff")
		return (std::numeric_limits<float>::infinity());
	else if (literal == "-inff")
		return (-std::numeric_limits<float>::infinity());
	else
		return (f);
}

double	ScalarConverter::stod(const std::string &literal)
{
	std::istringstream iss(literal);
	double	d;
	iss >> d;
	if (literal == "nan")
		return (std::numeric_limits<double>::quiet_NaN());
	else if (literal == "+inf")
		return (std::numeric_limits<double>::infinity());
	else if (literal == "-inf")
		return (-std::numeric_limits<double>::infinity());
	else
		return (d);
}

void	ScalarConverter::convertChar(const std::string &literal)
{
	std::cout << "char: " << literal[0] << std::endl;
	std::cout << "Int: " << static_cast<int>(literal[0]) << std::endl;
	std::cout << "Float: " << static_cast<float>(literal[0]) << ".0f" << std::endl;
	std::cout << "Double: " << static_cast<double>(literal[0]) << ".0" << std::endl;
}

void	ScalarConverter::convertInt(const std::string &literal)
{
	std::istringstream iss(literal);
	int n;
	iss >> n;
	if ((n < 9 && n >= std::numeric_limits<char>::min()) || (n > 13 && n < 32) || (n == 127))
		std::cout << "char: Non Displayable" << std::endl;
	else if ((std::numeric_limits<char>::min() > n) || (std::numeric_limits<char>::max() < n))
		std::cout << "char: impossible" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(n) << std::endl;
	std::cout << "int: " << n << std::endl;
	std::cout << "float: " << static_cast<float>(n) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(n) << ".0" << std::endl;
}

void	ScalarConverter::convertFloat(const std::string &literal)
{
	float f = stof(literal);
	if ((f < 9 && f >= std::numeric_limits<char>::min()) || (f > 13 && f < 32) || (f == 127))
		std::cout << "char: Non Displayable" << std::endl;
	else if ((std::numeric_limits<char>::min() > f) || (std::numeric_limits<char>::max() < f) || (literal == "nanf" || literal == "-inff" || literal == "+inff"))
		std::cout << "char: impossible" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(f) << std::endl;
	if ((std::numeric_limits<int>::min() > f) || (std::numeric_limits<int>::max() < f) || (literal == "nanf" || literal == "-inff" || literal == "+inff"))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(f) << std::endl;
	if (f == static_cast<int>(f))
	{
		std::cout << "float: " << f << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(f) << ".0" << std::endl;
	}
	else
	{	
		std::cout << "float: " << f << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(f) << std::endl;
	}
}

void	ScalarConverter::convertDouble(const std::string &literal)
{
	double d = stod(literal);
	if ((std::numeric_limits<char>::min() > d) || (std::numeric_limits<char>::max() < d) || (literal == "nan" || literal == "-inf" || literal == "+inf"))
		std::cout << "char: impossible" << std::endl;
	else if ((d < 9 && d >= std::numeric_limits<char>::min()) || (d > 13 && d < 32) || (d == 127))
		std::cout << "char: Non Displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(d) << std::endl;
	if ((std::numeric_limits<int>::min() > d) || (std::numeric_limits<int>::max() < d) || (literal == "nan" || literal == "-inf" || literal == "+inf"))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(d) << std::endl;
	if (((static_cast<double>(std::numeric_limits<float>::min()) > d) || (static_cast<double>(std::numeric_limits<float>::max()) < d)) && (literal != "-inf" && literal != "+inf"))
		std::cout  << "float: impossible" << std::endl;
	else if (d == static_cast<int>(d))
		std::cout << "float: " << static_cast<float>(d) << ".0f" << std::endl;
	else
		std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
	if (d == static_cast<int>(d))
		std::cout << "double: " << d << ".0" << std::endl;
	else
		std::cout << "double: " << d << std::endl;
}
void	ScalarConverter::convert(const std::string &literal)
{
	if (literal.size() == 0)
		throw ScalarConverter::UnknowTypeException();
	if (isInt(literal) == true)
		convertInt(literal);
	else if (isFloat(literal) == true)
		convertFloat(literal);
	else if (isDouble(literal) == true)
		convertDouble(literal);
	else if (isChar(literal) == true)
		convertChar(literal);
	else
		throw ScalarConverter::UnknowTypeException();
}

bool	ScalarConverter::isChar(const std::string &literal)
{
	if (literal.size() == 1 && ((literal[0] >= 9 && literal[0] <= 13) || (literal[0] >= 32 && literal[0] <= 126)))
		return true;
	else
		return false;
}

bool	ScalarConverter::isInt(const std::string &literal)
{
	std::istringstream iss(literal);
	int n;
	iss >> n;
	if (!iss.fail() && iss.eof())
		return true;
	else
		return false;
}

bool	ScalarConverter::isFloat(const std::string &literal)
{
	std::istringstream iss(literal);
	std::string sufix;
	float f;
	iss >> f;
	iss >> sufix;
	if ((!iss.fail() && sufix == "f") || (literal == "nanf" || literal == "-inff" || literal == "+inff"))
		return true;
	else
		return false;
}

bool	ScalarConverter::isDouble(const std::string &literal)
{
	std::istringstream iss(literal);
	double d;
	iss >> d;
	if ((!iss.fail() && iss.eof()) || (literal == "nan" || literal == "-inf" || literal == "+inf"))
		return true;
	else
		return false;
}

const char*	ScalarConverter::UnknowTypeException::what() const throw()
{
	return ("Unknow Type Found !");
}
