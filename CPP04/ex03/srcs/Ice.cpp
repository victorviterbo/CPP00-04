/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorviterbo <victorviterbo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 21:23:02 by victorviter       #+#    #+#             */
/*   Updated: 2025/07/22 23:32:51 by victorviter      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "AMateria.hpp"
#include "Character.hpp"

Ice::Ice() : AMateria("ice") {};

Ice::Ice(Ice &other) : AMateria(other.getType()) {};

Ice &Ice::operator=(Ice &other)
{
	this->_type = other._type;
	return (*this);
};

Ice::~Ice() {};

std::string const   &Ice::getType() const
{
	return (this->_type);
}

Ice*    Ice::clone() const
{
	Ice	*clone;

	clone = new Ice();
	clone->_type = this->_type;
	return (clone);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}