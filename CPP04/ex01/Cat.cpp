/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 08:54:27 by fbordes           #+#    #+#             */
/*   Updated: 2024/01/09 10:10:07 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	brain = new Brain();
	std::cout << "[Cat Constructor] A cat is born !" << std::endl;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "[Cat Destructor] A cat just died !" << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src)
{
	brain = new Brain(*src.brain);
	std::cout << "[Cat Copy] A cat has been copied !" << std::endl;
}

Cat &Cat::operator=(const Cat &rhs)
{
	if (this != &rhs)
	{
		delete brain;
		brain = new Brain(*rhs.brain);
	}
	std::cout << "[Cat Assignement Operator Called !]" << std::endl;
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "Meow meow !" << std::endl;
}
