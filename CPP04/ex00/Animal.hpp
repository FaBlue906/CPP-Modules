/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 08:54:18 by fbordes           #+#    #+#             */
/*   Updated: 2024/01/09 09:07:33 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class	Animal
{
	protected :
		std::string type;

	public :
		Animal();
		virtual ~Animal();

		Animal(const Animal &src);
		Animal &operator=(const Animal &rhs);

		virtual void makeSound() const;
		std::string getType() const;
};

#endif
