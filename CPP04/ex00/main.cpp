/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 08:54:52 by fbordes           #+#    #+#             */
/*   Updated: 2024/01/09 09:41:54 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound(); //will output the dog sound!
	meta->makeSound();//will output the generic animal sound!

	std::cout << wrongMeta->getType() << " " << std::endl;
	wrongMeta->makeSound(); //will output the generic wrong animal sound!

	std::cout << wrongCat->getType() << " " << std::endl;
	wrongCat->makeSound(); //will output the generic wrong cat sound!

	std::cout << "--- WrongCat Test ---" << std::endl;

	WrongCat directWrongCat;
	std::cout << "Direct WrongCat: ";
	directWrongCat.makeSound();

	const WrongAnimal* wrongCatPointer = new WrongCat();
	std::cout << "WrongAnimal pointer to WrongaCat: ";
	wrongCatPointer->makeSound();
	delete wrongCatPointer;

	WrongAnimal directWrongAnimal;
	std::cout << "Direct WrongAnimal: ";
	directWrongAnimal.makeSound();

	delete meta;
	delete j;
	delete i;

	delete wrongMeta;
	delete wrongCat;

	return 0;
}
