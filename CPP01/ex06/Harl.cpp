/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 10:40:43 by fbordes           #+#    #+#             */
/*   Updated: 2024/01/03 11:01:56 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void	Harl::complain(std::string level)
{
	std::string	rule[4] = {"debug", "info", "warning", "error"};
	int	i = 0;
	int	x = 5;
	while (i < 4)
	{
		if (level == rule[i])
			x = i;
		i++;
	}
	switch (x) {
		case 0:
			debug();
			break;
		case 1:
			info();
			break;
		case 2:
			warning();
			break;
		case 3:
			error();
			break;
		default:
			break;
	}
}

void	Harl::debug(void)
{
	std::cout << "DEBUG :\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
	info();
}

void	Harl::info(void)
{
	std::cout << "INFO :\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
	warning();
}

void	Harl::warning(void)
{
	std::cout << "WARNING :\nI think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
	error();
}

void	Harl::error(void)
{
	std::cout << "ERROR :\nThis is unacceptable! I want to speak to the manager now.\n";
}
