/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 09:11:40 by fbordes           #+#    #+#             */
/*   Updated: 2024/01/03 09:13:47 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*new_zombie = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		new_zombie[i].set_name(name);
		new_zombie[i].announce();
	}
	return (new_zombie);
}
