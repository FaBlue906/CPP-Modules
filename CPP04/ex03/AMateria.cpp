/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:29:19 by fbordes           #+#    #+#             */
/*   Updated: 2024/01/09 12:45:56 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(void) : _type("")
{
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	std::cout << " AMateria " << this->_type << " created" << std::endl;
}

AMateria::AMateria(AMateria const & src)
{
	*this = src;
}

AMateria::~AMateria(void)
{
	std::cout << " AMateria " << this->_type << " destroyed" << std::endl;
}

std::string const & AMateria::getType() const
{
	return this->_type;
}

void	AMateria::use(ICharacter& target)
{
	std::cout << " AMateria " << this->_type << " used on " << target.getName() << std::endl;
}
