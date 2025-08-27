/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 08:54:45 by fbordes           #+#    #+#             */
/*   Updated: 2024/01/09 10:15:34 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
	private :
		Brain *brain;

	public :
		Dog();
		virtual ~Dog();
		Dog(const Dog &src);
		Dog &operator=(const Dog &rhs);

		virtual void makeSound() const;
};

#endif
