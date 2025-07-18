/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 13:37:28 by vviterbo          #+#    #+#             */
/*   Updated: 2025/07/18 11:08:44 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wrongAnimal.hpp"

wrongAnimal::wrongAnimal()
{
	std::cout << "Unparametrized wrongAnimal Constructor Called" << std::endl;
	this->_type = "Random wrongAnimal";
}

wrongAnimal::wrongAnimal(std::string name)
{
	std::cout << "Parametrized wrongAnimal Constructor Called" << std::endl;
	this->_type = name;
}

wrongAnimal::wrongAnimal(wrongAnimal &other)
{
	std::cout << "wrongAnimal Copy Constructor Called" << std::endl;
	this->_type = other._type;
}

wrongAnimal &wrongAnimal::operator=(wrongAnimal &operand)
{
	std::cout << "wrongAnimal Assignment Operator Called" << std::endl;
	this->_type = operand._type;
	return (*this);
}

wrongAnimal::~wrongAnimal()
{
	std::cout << "wrongAnimal Destructor Called" << std::endl;
}

void	wrongAnimal::makeSound(void) const
{
	std::cout << "* Unidentifiable animal noise *" << std::endl;
}

std::string	wrongAnimal::getType(void) const
{
	return (this->_type);
}