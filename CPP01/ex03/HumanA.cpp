/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 09:22:25 by fbordes           #+#    #+#             */
/*   Updated: 2024/01/03 09:24:42 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
{
	this->weapon = &weapon;
	this->name = name;
}

HumanA::~HumanA(void)
{
}

void	HumanA::attack(void)
{
	std::cout << name << " attack with " << weapon->getType() << "\n";
}
