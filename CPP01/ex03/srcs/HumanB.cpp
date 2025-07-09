/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 15:26:38 by vviterbo          #+#    #+#             */
/*   Updated: 2025/07/09 14:04:18 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::attack()
{
	if (this->_weapon)
		std::cout << this->_name << " attacks with their " \
		<< this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name << " attacks with their bare hands I guess ..."\
		<< std::endl;
}
void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}
