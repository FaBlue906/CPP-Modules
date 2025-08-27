/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 08:54:09 by fbordes           #+#    #+#             */
/*   Updated: 2024/01/09 10:13:06 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal() : type("Animal")
{
	std::cout << "[Animal Constructor] An Animal is born !" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "[Animal Destructor] An animal just died !" << std::endl;
}

AAnimal::AAnimal(const AAnimal &src)
{
	*this = src;
	std::cout << "[Animal Copy] An animal has been copied !" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &rhs)
{
	if (this != &rhs)
		type = rhs.type;
	return *this;
}

void	AAnimal::makeSound() const
{
	std::cout << "Roaarrr !" << std::endl;
}

std::string AAnimal::getType() const
{
	return type;
}
