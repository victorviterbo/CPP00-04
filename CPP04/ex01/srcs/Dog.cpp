/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 13:37:28 by vviterbo          #+#    #+#             */
/*   Updated: 2025/07/19 14:22:10 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal(), _brain(new Brain())
{
	std::cout << "Unparametrized Dog Constructor Called" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(std::string name) : Animal(), _brain(new Brain())
{
	std::cout << "Parametrized Dog Constructor Called" << std::endl;
	this->_type = name;
}

Dog::Dog(Dog &other)
{
	std::cout << "Dog Copy Constructor Called" << std::endl;
	this->_type = other._type;
	this->_brain = other._brain;
}

Dog &Dog::operator=(Dog &operand)
{
	std::cout << "Dog Assignment Operator Called" << std::endl;
	this->_type = operand._type;
	this->_brain = operand._brain;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog Destructor Called" << std::endl;
	delete this->_brain;
}

void	Dog::makeSound(void) const
{
	std::cout << "Bark Bark ! says the dog ..." << std::endl;
}

Brain	*Dog::getBrain(void)
{
	return (this->_brain);
}
