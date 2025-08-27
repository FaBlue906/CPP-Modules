/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 09:46:16 by fbordes           #+#    #+#             */
/*   Updated: 2024/01/09 10:02:10 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "\033[1;33m[Brain Constructor] Brain is created !\033[0m" << std::endl;
}

Brain::~Brain()
{
	std::cout << "\033[1;33m[Brain Destructor] No More Brain !\033[0m" << std::endl;
}

Brain::Brain(const Brain &src)
{
	*this = src;
}

Brain &Brain::operator=(const Brain &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
			ideas[i] = rhs.ideas[i];
	}
	return *this;
}
