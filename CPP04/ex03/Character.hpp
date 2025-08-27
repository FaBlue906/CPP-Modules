/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:05:41 by fbordes           #+#    #+#             */
/*   Updated: 2024/01/09 15:57:24 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class	Character : public ICharacter
{
	private :
		std::string name;
		AMateria *inventory[4];

	public :
		Character(std::string const &name);
		Character(const Character &src);
		Character &operator=(const Character &rhs);
		virtual ~Character();

		std::string const &getName() const;
		void	equip(AMateria *m);
		void	unequip(int index);
		void	use(int index, ICharacter &target);
};

#endif
