/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 09:24:35 by fbordes           #+#    #+#             */
/*   Updated: 2024/01/15 09:46:56 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	
	std::cout << "<ScavTrap> - " << this->_name << " constructed.\n" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "<ScavTrap> - " << this->_name << " destructed.\n" << std::endl;
}

void	ScavTrap::attack(std::string const& target)
{
	if (this->_energyPoints <= 0)
	{
		std::cout << "<ScavTrap> - " << this->_name << " is out of energy.\n" << std::endl;
		return;
	}
	std::cout << "<ScavTrap> - " << this->_name << " attacks " << target << " at range, causing " << this->_attackDamage << " points of damage !\n" << std::endl;
	this->_energyPoints -= 1;
}

void	ScavTrap::guardGate()
{
	std::cout << "<ScavTrap> - " << this->_name << " is now in Gate keeper mode.\n" << std::endl;
}
