/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorviterbo <victorviterbo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 16:45:18 by vviterbo          #+#    #+#             */
/*   Updated: 2025/07/16 12:08:12 by victorviter      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Unparametrized FragTrap Constructor Called" << std::endl;
	this->setStats(100, 100, 30);
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Parametrized FragTrap Constructor Called" << std::endl;
	this->setStats(100, 100, 30);
	return ;
}

FragTrap::FragTrap(FragTrap &other) : ClapTrap(other)
{
	std::cout << "FragTrap Copy Constructor Called" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap &operand)
{
	ClapTrap::operator=(operand);
	std::cout << "FragTrap Assignement operator Called" << std::endl;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor Called" << std::endl;
}
void 	FragTrap::attack(const std::string& target)
{
	if (!this->getHp())
	{
		std::cout << "FragTrap " << this->getName() << ": attack on " << target \
		<< " aborted: not enough hp" << std::endl;
		return ;
	}
	if (!this->getEp())
	{
		std::cout << "FragTrap " << this->getName() << ": attack on " << target \
		<< " aborted: not enough ep" << std::endl;
		return ;
	}
	this->setEp(this->getEp() - 1);
	std::cout << "FragTrap " << this->getName() << " attacks " << target \
	<< ", causing " << this->getDamages() << " points of damage!" << std::endl;
	return ;
}

void	FragTrap::highFivesGuys(void)
{
	std::string	consent;

	std::cout << "FragTrap " << this->getName() << " send you a HighFive \
request. Do you consent ? [y/n] ";
	std::getline(std::cin, consent);
	if (!consent.compare("Y") || !consent.compare("y"))
		std::cout << "FragTrap " << this->getName() << " HighFived you ! :)" << std::endl;
	else
		std::cout << "FragTrap " << this->getName() << " is now sad ! :(" << std::endl;
	return ;
}
