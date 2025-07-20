/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorviterbo <victorviterbo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 13:35:08 by vviterbo          #+#    #+#             */
/*   Updated: 2025/07/20 17:50:00 by victorviter      ###   ########.fr       */
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

Character operator=(Character &other)
{
	for (unsigned int i = 0; i < this->_inven_idx ; i++)
		delete this->_inventory[i];
	for (unsigned int i = 0; i < other._inven_idx ; i++)
		*this->_inventory[i] = *other._inventory[i];
	this->_inven_idx = other._inven_idx;
}

		std::string const	&getName() const;
		void 				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
};
