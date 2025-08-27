/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 08:55:02 by fbordes           #+#    #+#             */
/*   Updated: 2024/01/09 09:42:39 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout << "A wrong animal is born !" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "A wrong animal just died !" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	*this = src;
	std::cout << "A wrong animal has been copied !" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs)
{
	if (this != &rhs)
		type = rhs.type;
	return *this;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Atchoum !" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return type;
}
