/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 13:35:08 by vviterbo          #+#    #+#             */
/*   Updated: 2025/07/22 14:22:17 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	std::cout << "Character Constructor Called" << std::endl;
	this->_inven_idx = 0;
}

Character::Character(Character &other)
{
	for (unsigned int i = 0; i < this->_inven_idx ; i++)
		delete this->_inventory[i];
	for (unsigned int i = 0; i < other._inven_idx ; i++)
		*this->_inventory[i] = *other._inventory[i];
	this->_inven_idx = other._inven_idx;
	this->_name = other._name;
}

Character &Character::operator=(Character &other)
{
	for (unsigned int i = 0; i < this->_inven_idx ; i++)
		delete this->_inventory[i];
	for (unsigned int i = 0; i < other._inven_idx ; i++)
		*this->_inventory[i] = *other._inventory[i];
	this->_inven_idx = other._inven_idx;
}

std::string const	&Character::getName(void) const
{
	return (this->_name);
}

void	Character::equip(AMateria* m)
{
	if (this->_inven_idx > 3)
		return ;
	this->_inventory[this->_inven_idx] = m;
	this->_inven_idx ++;
}

void	Character::unequip(int idx)
{
	if (this->_inven_idx < idx)
		return ;
	this->_inventory[idx] = nullptr;
	this->_inven_idx --;
}

void	use(int idx, ICharacter& target)
{}


