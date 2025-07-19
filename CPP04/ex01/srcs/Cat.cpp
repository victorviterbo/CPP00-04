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

Cat::Cat() : Animal(), _brain(new Brain())
{
	std::cout << "Unparametrized Cat Constructor Called" << std::endl;
	this->_type = "Cat";
	
}

Cat::Cat(std::string name) : Animal(name), _brain(new Brain())
{
	std::cout << "Parametrized Cat Constructor Called" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(Cat &other)
{
	std::cout << "Cat Copy Constructor Called" << std::endl;
	this->_type = other._type;
	this->_brain = other._brain;
}

Cat &Cat::operator=(Cat &operand)
{
	std::cout << "Cat Assignment Operator Called" << std::endl;
	this->_type = operand._type;
	this->_brain = operand._brain;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat Destructor Called" << std::endl;
	delete this->_brain;
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow Meow ! says the cat ..." << std::endl;
}

Brain	*Cat::getBrain(void)
{
	return (this->_brain);
}
