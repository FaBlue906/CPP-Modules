/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:50:08 by fbordes           #+#    #+#             */
/*   Updated: 2024/01/09 14:51:51 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIA_HPP
# define IMATERIA_HPP

#include "AMateria.hpp"

class	IMateriaSource
{
	public :
		virtual ~IMateriaSource() {}
		virtual void	learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif
