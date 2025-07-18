/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 13:37:28 by vviterbo          #+#    #+#             */
/*   Updated: 2025/07/18 10:50:53 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Unparametrized Cat Constructor Called" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(std::string name) : Animal(name)
{
	std::cout << "Parametrized Cat Constructor Called" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(Cat &other)
{
	std::cout << "Cat Copy Constructor Called" << std::endl;
	this->_type = other._type;
}

Cat &Cat::operator=(Cat &operand)
{
	std::cout << "Cat Assignment Operator Called" << std::endl;
	this->_type = operand._type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat Destructor Called" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow Meow ! says the cat ..." << std::endl;
}