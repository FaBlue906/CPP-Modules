/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 08:54:18 by fbordes           #+#    #+#             */
/*   Updated: 2024/01/09 10:13:53 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class	AAnimal
{
	protected :
		std::string type;

	public :
		AAnimal();
		virtual ~AAnimal();

		AAnimal(const AAnimal &src);
		AAnimal &operator=(const AAnimal &rhs);

		virtual void makeSound() const = 0;
		std::string getType() const;
};

#endif
