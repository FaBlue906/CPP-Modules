/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 09:38:06 by fbordes           #+#    #+#             */
/*   Updated: 2024/01/03 09:43:54 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;
}

Weapon::~Weapon(void)
{
}

const std::string	Weapon::getType(void)
{
	return (this->type);
}

void	Weapon::setType(std::string new_type)
{
	this->type = new_type;
}
