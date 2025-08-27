/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 09:24:48 by fbordes           #+#    #+#             */
/*   Updated: 2024/01/15 10:00:45 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class	ScavTrap : virtual public ClapTrap
{
	private :
		ScavTrap();

	public :
		ScavTrap(std::string name);
		~ScavTrap();

		void	attack(std::string const &target);
		void	guardGate();
};

#endif
