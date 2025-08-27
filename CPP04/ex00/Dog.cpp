/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 08:54:41 by fbordes           #+#    #+#             */
/*   Updated: 2024/01/09 09:42:23 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "A dog is born !" << std::endl;
}

Dog::~Dog()
{
	std::cout << "A dog just died !" << std::endl;
}

Dog::Dog(const Dog &src) : Animal(src)
{
	std::cout << "A dog has been copied !" << std::endl;
}

Dog &Dog::operator=(const Dog &rhs)
{
	Animal::operator=(rhs);
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "Woof woof !" << std::endl;
}
