/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 09:18:15 by fbordes           #+#    #+#             */
/*   Updated: 2024/01/03 09:19:22 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string &ref = str;

	std::cout << &str << "\n";
	std::cout << &ptr << "\n";
	std::cout << &ref << "\n\n";
	std::cout << str << "\n";
	std::cout << ptr << "\n";
	std::cout << ref << "\n";
}
