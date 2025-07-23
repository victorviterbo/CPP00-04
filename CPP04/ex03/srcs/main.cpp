/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorviterbo <victorviterbo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:24:15 by vviterbo          #+#    #+#             */
/*   Updated: 2025/07/23 14:44:57 by victorviter      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "AMateria.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	std::cout << 1 << std::endl;
	src->learnMateria(new Ice());
	std::cout << 2 << std::endl;
	src->learnMateria(new Cure());
	std::cout << 3 << std::endl;
	
	ICharacter* me = new Character("me");
	AMateria* tmp;
	
	std::cout << 4 << std::endl;
	
	tmp = src->createMateria("ice");
	std::cout << tmp << std::endl;
	me->equip(tmp);
	std::cout << tmp << std::endl;
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	ICharacter* bob = new Character("bob");
	std::cout << 5 << std::endl;
	
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
}
