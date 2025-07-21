/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 13:37:28 by vviterbo          #+#    #+#             */
/*   Updated: 2025/07/21 17:31:19 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap() : _name("Unknown"), _hp(10), _ep(10), _damages(0)
{
	std::cout << "Unparametrized ClapTrap Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _ep(10), _damages(0)
{
	std::cout << "Parametrized ClapTrap Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &other) :_name(other._name), _hp(other._hp), _ep(other._ep), _damages(other._damages)
{
	std::cout << "ClapTrap Copy Constructor Called" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap &operand)
{
	this->_name = operand._name;
	this->_hp = operand._hp;
	this->_ep = operand._ep;
	this->_damages = operand._damages;
	std::cout << "ClapTrap Assignement operator Called" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap() 
{
	std::cout << "ClapTrap Destructor Called" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (!this->_hp)
	{
		std::cout << "ClapTrap " << this->_name << ": attack on " << target \
		<< " aborted: not enough hp" << std::endl;
		return ;
	}
	if (!this->_ep)
	{
		std::cout << "ClapTrap " << this->_name << ": attack on " << target \
		<< " aborted: not enough ep" << std::endl;
		return ;
	}
	this->_ep -= 1;
	std::cout << "ClapTrap " << this->_name << " attacks " << target \
	<< ", causing " << this->_damages << " points of damage!" << std::endl;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (!this->_hp)
	{
		std::cout << "ClapTrap " << this->_name << " is already dead x_x";
		std::cout << " Stop desecrating corpses !!!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " has been attacked and lost " \
	<< std::min(amount, this->_hp) << " hp :(" << std::endl;
	if (this->_hp <= amount)
	{
		this->_hp = 0;
		std::cout << "ClapTrap " << this->_name  << " succumbed to his wounds. x_x" << std::endl;
		return ;
	}
	this->_hp -= amount;
	std::cout << "ClapTrap " << this->_name << " has " << this->_hp << " hp left" << std::endl;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->_ep)
	{
		std::cout << "ClapTrap " << this->_name  << " does not have the energy to heal himself ! ";
		std::cout << "That lazy bum..." << std::endl;
		return ;
	}
	this->_ep -= 1;
	this->_hp += amount;
	std::cout << "ClapTrap " << this->_name  << " healed himself by " << amount << " hp and has now " << this->_hp << " hp" << std::endl;
	return ;
}

std::string  &ClapTrap::getName(void)
{
	return (this->_name);
}

unsigned int	ClapTrap::getHp(void)
{
	return (this->_hp);
}

unsigned int	ClapTrap::getEp(void)
{
	return (this->_ep);
}

unsigned int	ClapTrap::getDamages(void)
{
	return (this->_damages);
}

void	ClapTrap::setHp(unsigned int hp)
{
	this->_hp = hp;
	return ;
}

void	ClapTrap::setEp(unsigned int ep)
{
	this->_ep = ep;
	return ;
}

void	ClapTrap::setDamages(unsigned int damages)
{
	this->_damages = damages;
	return ;
}
void	ClapTrap::setStats(unsigned int hp, unsigned int ep, unsigned int dmgs)
{
	this->setHp(hp);
	this->setEp(ep);
	this->setDamages(dmgs);
	return ;
}

/*
void	ClapTrap::setHp(unsigned int amount)
{
	this->_hp = amount;
	return ;
}

void	ClapTrap::setEp(unsigned int amount)
{
	this->_ep = amount;
	return ;
}
void	ClapTrap::setDamage(unsigned int amount)
{
	this->_damages = amount;
	return ;
}*/