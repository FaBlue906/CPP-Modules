/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:52:19 by fbordes           #+#    #+#             */
/*   Updated: 2024/01/09 13:05:32 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(std::string const &name) : name(name)
{
	for (int i = 0; i < 4; ++i)
		inventory[i] = NULL;
}

Character::Character(const Character &src) : name(src.name)
{
	for (int i = 0; i < 4; ++i)
		inventory[i] = src.inventory[i] ? src.inventory[i]->clone() : NULL;
}

Character &Character::operator=(const Character &rhs)
{
	if (this != &rhs)
	{
		name = rhs.name;
		for (int i = 0; i < 4; ++i)
		{
			delete inventory[i];
			inventory[i] = rhs.inventory[i] ? rhs.inventory[i]->clone() : NULL;
		}
	}
	return *this;
}

Character::~Character()
{
	for (int i = 0; i < 4; ++i)
		delete inventory[i];
}

std::string const &Character::getName() const
{
	return this->name;
}

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; ++i)
	{
		if (inventory[i] == NULL)
		{
			inventory[i] = m;
			break;
		}
	}
}

void	Character::unequip(int index)
{
	if (index >= 0 && index < 4)
		inventory[index] = NULL;
}

void	Character::use(int index, ICharacter &target)
{
	if (index >= 0 && index < 4 && inventory[index] != NULL)
		inventory[index]->use(target);
}
