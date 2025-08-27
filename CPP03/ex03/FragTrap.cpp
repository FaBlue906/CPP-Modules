/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 09:49:12 by fbordes           #+#    #+#             */
/*   Updated: 2024/01/08 11:27:54 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	
	std::cout << "|FragTrap| - " << this->_name << " constructed.\n" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "|FragTrap| - " << this->_name << " destructed.\n" << std::endl;
}

void	FragTrap::highFive(void)
{
	if (this->_energyPoints <= 0)
	{
		std::cout << "|FragTrap| - " << this->_name << " is out of energy.\n" << std::endl;
		return;
	}
	std::cout << "|FragTrap| - " << this->_name << " high fives everybody.\n" << std::endl;
	this->_energyPoints -= 1;
}
