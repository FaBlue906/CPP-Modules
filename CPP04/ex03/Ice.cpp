/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:58:59 by fbordes           #+#    #+#             */
/*   Updated: 2024/01/09 15:57:43 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(const Ice &src) : AMateria(src)
{
}

Ice &Ice::operator=(const Ice &rhs)
{
	if (this != &rhs)
		AMateria::operator=(rhs);
	return *this;
}

Ice::~Ice()
{
}

AMateria *Ice::clone() const
{
	return new Ice(*this);
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
