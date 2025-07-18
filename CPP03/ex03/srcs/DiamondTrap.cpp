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

DiamondTrap::DiamondTrap(std::string name) : FragTrap(name.append("_clap_name"))
{
	ScavTrap	Scav("dummy");

	std::cout << "Parametrized DiamondTrap Constructor Called" << std::endl;
	this->_name = name;
	this->setEp(Scav.getEp());
	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap &other) : ScavTrap(other), FragTrap(other)
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
void	DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap name : " << this->_name << std::endl;
	std::cout << "ClapTrap name : " << this->getName() << std::endl;
}
