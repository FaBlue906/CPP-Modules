/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 11:23:31 by fbordes           #+#    #+#             */
/*   Updated: 2024/01/15 09:49:21 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "[ClapTrap] - " << this->_name << " has been born !\n" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "[ClapTrap] - " << this->_name << " has been destroyed.\n" << std::endl;
	return;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	*this = src;
	std::cout << "[ClapTrap] - " << this->_name << " has been copied with copy constructor.\n" << std::endl;
	return;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& src)
{
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
	std::cout << "[ClapTrap] - " << this->_name << " has been copied with copy assignement operator.\n" << std::endl;
	return *this;
}

void	ClapTrap::attack(std::string const &target)
{
	if (_energyPoints <= 0)
	{
		std::cout << "[ClapTrap] - " << this->_name << " is out of energy !\n" << std::endl;
		return;
	}
	std::cout << "[ClapTrap] - " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage !\n" << std::endl;
	_energyPoints -= 1;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints <= amount)
	{
		std::cout << "[ClapTrap] - " << this->_name << " is dead !\n" << std::endl;
		return;
	}
	std::cout << "[ClapTrap] - " << this->_name << " takes " << amount << " damage !\n" << std::endl;
	_hitPoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints <= amount)
	{
		std::cout << "[ClapTrap] - " << this->_name << " is out of energy !\n" << std::endl;
		return;
	}
	std::cout << "[ClapTrap] - " << this->_name << " repairs itself for " << amount << " hit points !\n" << std::endl;
	_energyPoints -= 1;
	_hitPoints += amount;
}
