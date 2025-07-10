/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 16:45:18 by vviterbo          #+#    #+#             */
/*   Updated: 2025/07/10 17:10:20 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "Unparamtrized ScavTrap Constructor Called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Paramtrized ScavTrap Constructor Called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &other)
{
	std::cout << "ScavTrap Copy Constructor Called" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap &operand)
{
	std::cout << "ScavTrap Assignement operator Called" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor Called" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_name << " is now in GateKeeping state" << std::endl;
	return ;
}