/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 16:45:18 by vviterbo          #+#    #+#             */
/*   Updated: 2025/07/11 13:39:44 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "Unparametrized DiamondTrap Constructor Called" << std::endl;
	this->setStats(100, 50, 20);
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name)
{
	std::cout << "Parametrized DiamondTrap Constructor Called" << std::endl;
	this->setStats(100, 50, 20);
	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap &other) : ClapTrap(other), ScavTrap(other), FragTrap(other)
{
	std::cout << "DiamondTrap Copy Constructor Called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap &operand)
{
	ScavTrap::operator=(operand);
	std::cout << "DiamondTrap Assignement operator Called" << std::endl;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor Called" << std::endl;
}

void 	DiamondTrap::attack(const std::string& target)
{
	if (!this->getHp())
	{
		std::cout << "DiamondTrap " << this->getName() << ": attack on " << target \
		<< " aborted: not enough hp" << std::endl;
		return ;
	}
	if (!this->getEp())
	{
		std::cout << "DiamondTrap " << this->getName() << ": attack on " << target \
		<< " aborted: not enough ep" << std::endl;
		return ;
	}
	this->setEp(this->getEp() - 1);
	std::cout << "DiamondTrap " << this->getName() << " attacks " << target \
	<< ", causing " << this->getDamages() << " points of damage!" << std::endl;
	return ;
}
