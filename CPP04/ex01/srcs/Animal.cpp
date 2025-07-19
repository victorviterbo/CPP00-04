/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 13:37:28 by vviterbo          #+#    #+#             */
/*   Updated: 2025/07/19 14:18:30 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
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
	std::cout << "is that the pb ?" << operand._type << std::endl; 
	this->_type = operand._type;
	std::cout << "ok ?" << std::endl;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal Destructor Called" << std::endl;
}

void	Animal::makeSound(void) const
{
	std::cout << "* Unidentifiable animal noise *" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->_type);
}
void	Animal::setType(std::string type)
{
	this->_type = type;
}
