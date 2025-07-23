/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorviterbo <victorviterbo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 15:25:40 by victorviter       #+#    #+#             */
/*   Updated: 2025/07/23 15:38:51 by victorviter      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {}

Character::Character(std::string name) : _name(name) {}

Character::Character(Character &other)
{
	for (unsigned int i = 0; i < 4 ; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	for (unsigned int i = 0; i < 4 ; i++)
		*this->_inventory[i] = *other._inventory[i];
	this->_name = other._name;
}

Character &Character::operator=(Character &other)
{
	for (unsigned int i = 0; i < 4 ; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	for (unsigned int i = 0; i < 4 ; i++)
		*this->_inventory[i] = *other._inventory[i];
	this->_name = other._name;
	return (*this);
}

Character::~Character()
{
	for (unsigned int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
}

std::string const	&Character::getName(void) const
{
	return (this->_name);
}

void	Character::equip(AMateria* m)
{
	for (unsigned int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] && this->_inventory[i]->getType() == m->getType())
		{
			std::cout << this->getName() << " already have this Materia" << std::endl;
			return ;
		}
	}
	for (unsigned int i = 0; i < 4; i++)
	{
		if (!this->_inventory[i])
		{
			std::cout << this->getName() << " equiped " << m->getType() \
			<< " at index " << i << std::endl;
			this->_inventory[i] = m;
			return ;
		}
	}
}

void	Character::unequip(int idx)
{
	if (!this->_inventory[idx])
		return ;
	this->_floor.dropFloor(this->_inventory[idx]);
	this->_inventory[idx] = nullptr;
}

void	Character::use(int idx, ICharacter& target)
{
	if (!this->_inventory[idx])
	{
		std::cout << this->getName() << " have nothing equiped at index " << idx << std::endl;
		return ;
	}
	this->_inventory[idx]->use(target);
	return ;
}

