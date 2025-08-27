/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:18:55 by fbordes           #+#    #+#             */
/*   Updated: 2024/01/09 13:20:21 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class	Cure : public AMateria
{
	public :
		Cure();
		Cure(const Cure &src);
		Cure &operator=(const Cure &rhs);
		virtual ~Cure();

		AMateria *clone() const;
		void	use(ICharacter &target);
};

#endif
