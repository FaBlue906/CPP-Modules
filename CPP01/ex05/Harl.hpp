/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 10:47:58 by fbordes           #+#    #+#             */
/*   Updated: 2024/01/10 09:12:02 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class	Harl
{
	private :
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

	public :
		Harl(void);
		~Harl(void);
		void	complain(std::string level);
};

#endif
