/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:38:01 by fbordes           #+#    #+#             */
/*   Updated: 2024/01/09 14:39:32 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class	Ice : public AMateria
{
	public :
		Ice();
		Ice(const Ice &src);
		Ice &operator=(const Ice &rhs);
		virtual ~Ice();

		AMateria *clone() const;
		void	use(ICharacter &target);
};

#endif
