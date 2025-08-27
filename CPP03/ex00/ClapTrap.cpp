/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 11:23:31 by fbordes           #+#    #+#             */
/*   Updated: 2024/01/15 09:42:19 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << _name << " is born !\n" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called\n" << std::endl;
	return;
}

ClapTrap::ClapTrap(const ClapTrap &rhs)
{
	*this = rhs;
	std::cout << "ClapTrap copy constructor called\n" << std::endl;
	return;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& src)
{
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
	return *this;
}

void	ClapTrap::attack(std::string const &target)
{
	if (_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " is out of energy !\n" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage !\n" << std::endl;
	_energyPoints -= 1;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints <= amount)
	{
		std::cout << "ClapTrap " << _name << " is dead !\n" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << _name << " takes " << amount << " damage !\n" << std::endl;
	_hitPoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints <= amount)
	{
		std::cout << "ClapTrap " << _name << " is out of energy !\n" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << _name << " repairs itself for " << amount << " hit points !\n" << std::endl;
	_energyPoints -= 1;
	_hitPoints += amount;
}
