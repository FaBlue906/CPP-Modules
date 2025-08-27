/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 11:23:16 by fbordes           #+#    #+#             */
/*   Updated: 2024/01/08 09:48:09 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap ash("Ash");
	ScavTrap ash2(ash);
	
	ash.attack( "the air" );
	ash.takeDamage( 10 );
	ash.beRepaired( 10 );
	ash.guardGate();
	
	return 0;
}
