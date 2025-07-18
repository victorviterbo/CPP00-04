/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:24:15 by vviterbo          #+#    #+#             */
/*   Updated: 2025/07/18 14:46:19 by vviterbo         ###   ########.fr       */
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
	const int 	farm_size = 2;
	Animal 		*farm[farm_size];

	for (int i = 0; i < farm_size / 2; i++)
		farm[i] = new Dog();
	for (int i = farm_size / 2; i < farm_size; i++)
		farm[i] = new Cat();
	delete farm[0];
	farm[1]->makeSound();
	farm[3]->makeSound();
	for (int i = 1; i < farm_size; i++)
		delete farm[i];
}
