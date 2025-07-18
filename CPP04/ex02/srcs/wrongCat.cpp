/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongCat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 13:37:28 by vviterbo          #+#    #+#             */
/*   Updated: 2025/07/18 10:50:53 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wrongCat.hpp"

wrongCat::wrongCat() : wrongAnimal()
{
	std::cout << "Unparametrized wrongCat Constructor Called" << std::endl;
	this->_type = "wrongCat";
}

wrongCat::wrongCat(std::string name) : wrongAnimal(name)
{
	std::cout << "Parametrized wrongCat Constructor Called" << std::endl;
	this->_type = "wrongCat";
}

wrongCat::wrongCat(wrongCat &other)
{
	std::cout << "wrongCat Copy Constructor Called" << std::endl;
	this->_type = other._type;
}

wrongCat &wrongCat::operator=(wrongCat &operand)
{
	std::cout << "wrongCat Assignment Operator Called" << std::endl;
	this->_type = operand._type;
	return (*this);
}

wrongCat::~wrongCat()
{
	std::cout << "wrongCat Destructor Called" << std::endl;
}

void	wrongCat::makeSound(void) const
{
	std::cout << "wrongCat is unresponsive ..." << std::endl;
}