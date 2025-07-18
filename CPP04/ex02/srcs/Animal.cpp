/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 13:37:28 by vviterbo          #+#    #+#             */
/*   Updated: 2025/07/18 14:17:36 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _brain(new Brain())
{
	std::cout << "Unparametrized Animal Constructor Called" << std::endl;
	this->_type = "Random Animal";
}

Animal::Animal(std::string name)
{
	std::cout << "Parametrized Animal Constructor Called" << std::endl;
	this->_type = name;
}

Animal::Animal(Animal &other)
{
	std::cout << "Animal Copy Constructor Called" << std::endl;
	this->_type = other._type;
}

Animal &Animal::operator=(Animal &operand)
{
	std::cout << "Animal Assignment Operator Called" << std::endl;
	this->_type = operand._type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal Destructor Called" << std::endl;
	delete this->_brain;
}

void	Animal::makeSound(void) const
{
	std::cout << "* Unidentifiable animal noise *" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->_type);
}