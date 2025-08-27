/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:47:54 by fbordes           #+#    #+#             */
/*   Updated: 2024/01/09 14:49:54 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include <string>

class	AMateria;

class	ICharacter
{
	public :
		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		virtual void	equip(AMateria* m) = 0;
		virtual void	unequip(int index) = 0;
		virtual void	use(int index, ICharacter& target) = 0;
};

#endif
