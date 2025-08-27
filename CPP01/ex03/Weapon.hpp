/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 09:40:12 by fbordes           #+#    #+#             */
/*   Updated: 2024/01/10 09:07:52 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class	Weapon
{
	private :
		std::string	type;

	public :
		Weapon(std::string type);
		~Weapon(void);
		void			setType(std::string new_type);
		const std::string	getType(void);
};

#endif
