/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 08:55:19 by fbordes           #+#    #+#             */
/*   Updated: 2024/01/09 10:09:46 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "A wrong Cat is born !" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "A wrong Cat just died !" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src) : WrongAnimal(src)
{
	std::cout << "A wrong Cat has been copied !" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs)
{
	WrongAnimal::operator=(rhs);
	return *this;
}
/*
void	WrongCat::makeSound() const
{
	std::cout << "Pssshh pssshhhh !" << std::endl;
}
*/
