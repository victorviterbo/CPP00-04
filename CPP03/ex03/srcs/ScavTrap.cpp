/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 16:45:18 by vviterbo          #+#    #+#             */
/*   Updated: 2025/07/21 17:30:18 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Unparametrized ScavTrap Constructor Called" << std::endl;
	this->_hp = 100;
	this->_ep = 50;
	this->_damages = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Parametrized ScavTrap Constructor Called" << std::endl;
	this->_hp = 100;
	this->_ep = 50;
	this->_damages = 20;
	return ;
}

ScavTrap::ScavTrap(ScavTrap &other) : ClapTrap(other)
{
	std::cout << "ScavTrap Copy Constructor Called" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap &operand)
{
	ClapTrap::operator=(operand);
	std::cout << "ScavTrap Assignement operator Called" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor Called" << std::endl;
}
void 	ScavTrap::attack(const std::string& target)
{
	if (!this->_hp)
	{
		std::cout << "ScavTrap " << this->getName() << ": attack on " << target \
		<< " aborted: not enough hp" << std::endl;
		return ;
	}
	if (!this->_ep)
	{
		std::cout << "ScavTrap " << this->getName() << ": attack on " << target \
		<< " aborted: not enough ep" << std::endl;
		return ;
	}
	this->_ep--;
	std::cout << "ScavTrap " << this->getName() << " attacks " << target \
	<< ", causing " << this->_damages << " points of damage!" << std::endl;
	return ;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->getName() << " is now in GateKeeping state" << std::endl;
	return ;
}