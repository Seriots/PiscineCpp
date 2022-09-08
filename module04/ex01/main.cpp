/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 22:10:33 by lgiband           #+#    #+#             */
/*   Updated: 2022/09/01 15:47:06 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "==========================" << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << "==========================" << std::endl;

	delete meta;
	delete j;
	delete i;
	std::cout << "==========================" << std::endl << std::endl;

	const WrongAnimal* metal = new WrongAnimal();
	const WrongAnimal* ile = new WrongCat();
	std::cout << "==========================" << std::endl << std::endl;
	
	std::cout << ile->getType() << " " << std::endl;
	ile->makeSound(); //will not output the cat sound!
	metal->makeSound();
	std::cout << "==========================" << std::endl << std::endl;

	delete metal;
	delete ile;
	std::cout << "==========================" << std::endl << std::endl;

	Cat chat1;
	Cat chat2(chat1);

	std::cout << "==========================" << std::endl << std::endl;
	chat1.makeSound();
	chat2.makeSound();
	std::cout << "==========================" << std::endl << std::endl;

	Dog doggyto1;
	Dog doggyto2(doggyto1);

	std::cout << "==========================" << std::endl << std::endl;
	doggyto1.makeSound();
	doggyto2.makeSound();
	std::cout << "==========================" << std::endl << std::endl;

	Animal *anim[10];
	std::cout << "==========================" << std::endl << std::endl;

	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
			anim[i] = new Cat();
		else
			anim[i] = new Dog();
	}
	std::cout << "==========================" << std::endl << std::endl;
	for (int i = 0; i < 10; i++)
		anim[i]->makeSound();
	std::cout << "==========================" << std::endl << std::endl;
	for (int i = 0; i < 10; i++)
		delete anim[i];
	return (0);
}