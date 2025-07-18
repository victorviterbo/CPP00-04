/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 13:37:28 by vviterbo          #+#    #+#             */
/*   Updated: 2025/07/18 12:48:22 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Unparametrized Dog Constructor Called" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(std::string name) : Animal(name)
{
	std::cout << "Parametrized Dog Constructor Called" << std::endl;
	this->_type = name;
}

Dog::Dog(Dog &other)
{
	std::cout << "Dog Copy Constructor Called" << std::endl;
	this->_type = other._type;
}

Dog &Dog::operator=(Dog &operand)
{
	std::cout << "Dog Assignment Operator Called" << std::endl;
	this->_type = operand._type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog Destructor Called" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Bark Bark ! says the dog ..." << std::endl;
}