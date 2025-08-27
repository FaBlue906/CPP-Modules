/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 09:53:05 by fbordes           #+#    #+#             */
/*   Updated: 2024/04/29 09:53:07 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

void    test()
{
	std::cout << "Running Test\n" << std::endl;
	Data    data;

	data.id = 42;
	std::cout << "Original pointer : " << &data << std::endl;
	uintptr_t   serialized = Serialize::serialize(&data);
	Data    *deserialized = Serialize::deserialize(serialized);

	std::cout << "Serialized data : " << serialized << "; Deserialized data : " << deserialized << std::endl;
	std::cout << "Running comparaison\n" << std::endl;
	if (deserialized == &data)
		std::cout << "Ok ! Deserialized pointer is equal to the original pointer.\n" << std::endl;
	else
		std::cout << "KO ! Deserialized pointer is different to the original pointer.\n" << std::endl;
}

int main()
{
	test();
	std::cout << "All tests done !" << std::endl;
	return (0);
}
