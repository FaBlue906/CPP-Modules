/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 11:23:16 by fbordes           #+#    #+#             */
/*   Updated: 2024/01/15 09:40:35 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap clap("Ash");
	
	clap.attack("Ennemy");
	
	clap.takeDamage(1);

	clap.beRepaired(1);

	return 0;
}
