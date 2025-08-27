/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 10:00:53 by fbordes           #+#    #+#             */
/*   Updated: 2024/01/08 10:52:54 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name)
{
	this->_name = name;
	this->ClapTrap::_name = name + "_clap_name";

	FragTrap::_hitPoints = 100;
	ScavTrap::_energyPoints = 50;
	FragTrap::_attackDamage = 30;
	
	std::cout << "#DiamondTrap# - " << this->_name << " constructed.\n" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "#DiamondTrap# - " << this->_name << " is dead.\n" << std::endl;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "I am a DiamondTrap named " << this->_name << ", ClapTrap name : " << ClapTrap::_name << std::endl;
}
