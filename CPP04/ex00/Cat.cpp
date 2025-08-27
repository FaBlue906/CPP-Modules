/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 08:54:27 by fbordes           #+#    #+#             */
/*   Updated: 2024/01/09 09:07:08 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "A cat is born !" << std::endl;
}

Cat::~Cat()
{
	std::cout << "A cat just died !" << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src)
{
	std::cout << "A cat has been copied !" << std::endl;
}

Cat &Cat::operator=(const Cat &rhs)
{
	Animal::operator=(rhs);
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "Meow meow !" << std::endl;
}
