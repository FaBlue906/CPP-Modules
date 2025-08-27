/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:24:46 by fbordes           #+#    #+#             */
/*   Updated: 2024/01/09 15:55:28 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>
#include <iostream>

class	ICharacter;

class	AMateria
{
	protected :
		std::string _type;

	public :
		AMateria();
		AMateria(std::string const & type);
		AMateria(AMateria const & src);
		virtual ~AMateria();

		std::string const & getType() const; //Returns the materia type

		virtual AMateria* clone() const = 0;
		virtual void	use(ICharacter& target);
};

#endif
