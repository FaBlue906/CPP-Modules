/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 08:54:35 by fbordes           #+#    #+#             */
/*   Updated: 2024/01/09 09:09:18 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class	Cat : public Animal
{
	public :
		Cat();
		virtual ~Cat();
		Cat(const Cat &src);
		Cat &operator=(const Cat &rhs);

		virtual void makeSound() const;
};

#endif
