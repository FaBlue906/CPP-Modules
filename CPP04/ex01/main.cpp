/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 08:54:52 by fbordes           #+#    #+#             */
/*   Updated: 2024/01/09 09:59:20 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int	main()
{
	const Animal* animals[5];
	
	std::cout << "\033[1;32mCreating Animal, please wait ...\033[0m" << std::endl;
	for (int i = 0; i < 3; i++)
	{
		animals[i] = new Dog();
		animals[i]->makeSound();
	}

	for (int i = 3; i < 5; i++)
	{
		animals[i] = new Cat();
		animals[i]->makeSound();
	}

	std::cout << "\033[1;32mDemonstration Time of copy constructor...\033[0m" << std::endl;
	Dog originalDog;
	Dog copiedDog(originalDog);

	Cat originalCat;
	Cat copiedCat(originalCat);

	std::cout << "\033[1;32mTime to delete some animals...\033[0m" << std::endl;
	for(int i = 0; i < 5; i++)
		delete animals[i];
	return 0;
}
