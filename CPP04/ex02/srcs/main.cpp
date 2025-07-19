/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorviterbo <victorviterbo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:24:15 by vviterbo          #+#    #+#             */
/*   Updated: 2025/07/19 17:32:36 by victorviter      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

#include "wrongAnimal.hpp"
#include "wrongCat.hpp"

int	main(void)
{
	const int 	farm_size = 6;
	Animal 		*farm[farm_size];
	Dog			*good_boy = new(Dog);
	Dog			*best_boy;
	Cat			*filthy_feline1;
	Cat			*filthy_feline2;
	//Animal		animal = new Animal();

	for (int i = 0; i < farm_size / 2; i++)
		farm[i] = new Dog();
	for (int i = farm_size / 2; i < farm_size; i++)
		farm[i] = new Cat();
	for (int i = 0; i < farm_size; i++)
		farm[i]->makeSound();
	for (int i = 1; i < farm_size; i++)
		delete farm[i];
	
	good_boy->getBrain()->newIdea("I am hungry...");
	best_boy = new Dog(*good_boy);
	good_boy->getBrain()->newIdea("OMG ! It's best boy !");
	
	std::cout << "\nGood Boy is thinking : " << std::endl;
	good_boy->getBrain()->getIdea();
	std::cout << "\nBest Boy is thinking : " << std::endl;
	best_boy->getBrain()->getIdea();
	
	best_boy->getBrain()->newIdea("Oh it's Good boy !");
	std::cout << "\nGood Boy is thinking : " << std::endl;
	good_boy->getBrain()->getIdea();
	std::cout << "\nBest Boy is thinking : " << std::endl;
	best_boy->getBrain()->getIdea();

	filthy_feline1 = new Cat();
	filthy_feline1->getTypicalCatThought();
	filthy_feline2 = new Cat();
	*filthy_feline2 = *filthy_feline1;
	filthy_feline1->getBrain()->popIdea();
	filthy_feline1->getBrain()->newIdea("Or a nap ?");
	
	std::cout << "\nfilthy_feline2 is thinking : " << std::endl;
	filthy_feline2->getBrain()->getIdea();
	std::cout << "\nfilthy_feline1 is thinking : " << std::endl;
	filthy_feline1->getBrain()->getIdea();
	filthy_feline1->getBrain()->newIdea("I am not smart enough to hold so many thougths", 100);
}
