/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 10:00:59 by fbordes           #+#    #+#             */
/*   Updated: 2024/01/15 09:56:19 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class	DiamondTrap : public FragTrap, public ScavTrap
{
	private :
		std::string _name;

	public :
		DiamondTrap(std::string name);
		~DiamondTrap();

		using	ScavTrap::attack;
		void	whoAmI( void );
};

#endif
