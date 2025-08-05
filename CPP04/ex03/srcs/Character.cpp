/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 15:25:40 by victorviter       #+#    #+#             */
/*   Updated: 2025/08/05 15:23:35 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	for (unsigned int i = 0; i < _inventory_size ; i++)
		this->_inventory[i] = NULL;
}

Character::Character(std::string name) : _name(name)
{
	for (unsigned int i = 0; i < _inventory_size ; i++)
		this->_inventory[i] = NULL;
}

Character::Character(Character &other)
{
	this->_floor = other._floor;
	for (unsigned int i = 0; i < this->_inventory_size ; i++)
	{
		if (other._inventory[i])
			this->_inventory[i] = other._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
	this->_name = other._name;
}

Character &Character::operator=(Character &other)
{
	for (unsigned int i = 0; i < this->_inventory_size ; i++)
	{
		if (this->_inventory[i])
		{
			delete this->_inventory[i];
			this->_inventory[i] = NULL;
		}
	}
	for (unsigned int i = 0; i < this->_inventory_size ; i++)
	{
		if (other._inventory[i])
			this->_inventory[i] = other._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
	this->_name = other._name;
	this->_floor = other._floor;
	return (*this);
}

Character::~Character()
{
	std::cout << "Character Destructor Called for " << this->getName() << std::endl;
	for (unsigned int i = 0; i < this->_inventory_size; i++)
	{
		if (this->_inventory[i])
		{
			delete this->_inventory[i];
			this->_inventory[i] = NULL;
		}
	}
}

std::string const	&Character::getName(void) const
{
	return (this->_name);
}

void	Character::equip(AMateria* m)
{
	for (unsigned int i = 0; i < this->_inventory_size; i++)
	{
		if (this->_inventory[i] && this->_inventory[i]->getType() == m->getType())
		{
			std::cout << this->getName() << " already have this Materia" << std::endl;
			return ;
		}
	}
	for (unsigned int i = 0; i < this->_inventory_size; i++)
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
	if (idx >= this->_inventory_size || !this->_inventory[idx])
	{
		std::cout << this->getName() << " have nothing equiped at index " << idx << std::endl;
		return ;
	}
	this->_floor.dropFloor(this->_inventory[idx]);
	this->_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= this->_inventory_size || !this->_inventory[idx])
	{
		std::cout << this->getName() << " have nothing equiped at index " << idx << std::endl;
		return ;
	}
	this->_inventory[idx]->use(target);
	return ;
}

