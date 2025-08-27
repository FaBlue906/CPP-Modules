/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 09:49:55 by fbordes           #+#    #+#             */
/*   Updated: 2024/01/09 09:51:16 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>

class	Brain
{
	public :
		Brain();
		~Brain();
		Brain(const Brain &src);
		Brain &operator=(const Brain &rhs);

		std::string ideas[100];
};

#endif
