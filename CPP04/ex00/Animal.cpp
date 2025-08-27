/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 08:54:09 by fbordes           #+#    #+#             */
/*   Updated: 2024/01/09 09:39:55 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "An Animal is born !" << std::endl;
}

Animal::~Animal()
{
	std::cout << "An animal just died !" << std::endl;
}

Animal::Animal(const Animal &src)
{
	*this = src;
	std::cout << "An animal has been copied !" << std::endl;
}

Animal &Animal::operator=(const Animal &rhs)
{
	if (this != &rhs)
		type = rhs.type;
	return *this;
}

void	Animal::makeSound() const
{
	std::cout << "Roaarrr !" << std::endl;
}

std::string Animal::getType() const
{
	return type;
}
