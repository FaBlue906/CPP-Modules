/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 09:27:09 by fbordes           #+#    #+#             */
/*   Updated: 2024/01/03 09:29:54 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
}

HumanB::~HumanB(void)
{
}

void	HumanB::attack(void)
{
	if (weapon)
		std::cout << name << " attack with " << weapon->getType() << "\n";
	else
		std::cout << name << " attack with his fist\n";
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
