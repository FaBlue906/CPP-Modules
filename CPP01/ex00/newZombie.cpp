/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 13:09:00 by fbordes           #+#    #+#             */
/*   Updated: 2024/01/03 08:52:10 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(std::string new_name)
{
	Zombie	*new_zombie = new Zombie(new_name);

	new_zombie->announce();
	return (new_zombie);
}
