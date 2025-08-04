/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:24:15 by vviterbo          #+#    #+#             */
/*   Updated: 2025/08/04 16:11:38 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "wrongAnimal.hpp"
#include "wrongCat.hpp"

int	main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const wrongAnimal* wA = new wrongCat();


	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound(); //will output the dog sound!
	meta->makeSound(); //will output the animal sound!
	delete i;
	i = j;
	i->makeSound(); //will output the dog sound!
	j->makeSound(); //will output the dog sound!
	meta->makeSound(); //will output the animal sound!

	wA->makeSound(); //will output the animal sound
	Dog	*gboy = new Dog();	
	const Dog	*copy = new Dog(*gboy);
	copy->makeSound();
	delete meta;
	delete i;
	delete wA;
	delete gboy;
	delete copy;
	return 0;
}
