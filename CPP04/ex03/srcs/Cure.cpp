/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorviterbo <victorviterbo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 21:23:02 by victorviter       #+#    #+#             */
/*   Updated: 2025/07/22 23:33:26 by victorviter      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Character.hpp"

Cure::Cure() : AMateria("cure") {};

Cure::Cure(Cure &other) : AMateria(other.getType()) {};

Cure &Cure::operator=(Cure &other)
{
	this->_type = other._type;
	return (*this);
};

Cure::~Cure() {};

std::string const   &Cure::getType() const
{
	return (this->_type);
}

Cure*    Cure::clone() const
{
	Cure	*clone;

	clone = new Cure();
	clone->_type = this->_type;
	return (clone);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << " ’s wounds *" << std::endl;
}
