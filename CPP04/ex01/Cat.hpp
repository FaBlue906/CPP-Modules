/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 08:54:35 by fbordes           #+#    #+#             */
/*   Updated: 2024/01/09 10:06:41 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public Animal
{
	private :
		Brain *brain;

	public :
		Cat();
		virtual ~Cat();
		Cat(const Cat &src);
		Cat &operator=(const Cat &rhs);

		virtual void makeSound() const;
};

#endif
