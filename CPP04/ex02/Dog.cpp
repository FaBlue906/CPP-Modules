/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 08:54:41 by fbordes           #+#    #+#             */
/*   Updated: 2024/01/09 10:15:27 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	brain = new Brain();
	std::cout << "[Dog Constructor] A dog is born !" << std::endl;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "[Dog Destructor] A dog just died !" << std::endl;
}

Dog::Dog(const Dog &src) : AAnimal(src)
{
	brain = new Brain(*src.brain);
	std::cout << "[Dog Copy] A dog has been copied !" << std::endl;
}

Dog &Dog::operator=(const Dog &rhs)
{
	if (this != &rhs)
	{
		delete brain;
		brain = new Brain(*rhs.brain);
	}
	std::cout << "[Dog Assignement Operator Called !]" << std::endl;
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "Woof woof !" << std::endl;
}
