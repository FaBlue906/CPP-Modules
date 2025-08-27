/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 11:23:16 by fbordes           #+#    #+#             */
/*   Updated: 2024/01/08 10:06:24 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap ash("Ash");
	DiamondTrap ash2(ash);
	DiamondTrap ash3(".");
	
	ash.whoAmI();
	ash2.whoAmI();
	ash3 = ash;
	ash3.whoAmI();
	
	ash.attack("the air");
	ash.takeDamage(10);
	ash.beRepaired(10);

	return 0;
}
