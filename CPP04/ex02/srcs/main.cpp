/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:24:15 by vviterbo          #+#    #+#             */
/*   Updated: 2025/07/18 14:17:15 by vviterbo         ###   ########.fr       */
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
	const int 	farm_size = 12;
	Animal 		*farm[farm_size];

	for (int i = 0; i < farm_size / 2; i++)
		farm[i] = new Dog();
	std::cout << "coucou" << std::endl;
	for (int i = farm_size / 2; i < farm_size; i++)
		farm[i] = new Cat();
	
	for (int i = 0; i < farm_size; i++)
		delete farm[i];
}
