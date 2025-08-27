/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 11:23:16 by fbordes           #+#    #+#             */
/*   Updated: 2024/01/08 09:57:30 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap ash("Ash");
	FragTrap ash2(ash);
	
	ash.attack("the air");
	ash.takeDamage( 10 );
	ash.beRepaired( 10 );
	ash.highFive();

	return 0;
}
