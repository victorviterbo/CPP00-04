/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorviterbo <victorviterbo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:52:20 by vviterbo          #+#    #+#             */
/*   Updated: 2025/07/19 17:16:35 by victorviter      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Unparametrized Brain Constuctor Called" << std::endl;
	for (unsigned int i = 0; i < 100; i++)
		this->_ideas[i] = "";
	this->_idx = 0;
}

Brain::Brain(Brain &other)
{
	std::cout << "Brain Copy Constructor Called" << std::endl;
	for (unsigned int i = 0; i < other._idx; i++)
		this->_ideas[i] = other._ideas[i];
	this->_idx = other._idx;
}
Brain &Brain::operator=(Brain &operand)
{
	std::cout << "Brain Assignment operator Called" << std::endl;
	for (unsigned int i = 0; i < operand._idx; i++)
	{
		this->_ideas[i] = operand._ideas[i];
	}
	this->_idx = operand._idx;
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor (aka beer) called" << std::endl;
}

void	Brain::newIdea(std::string idea)
{
	this->_ideas[this->_idx] = idea;
	this->_idx++;
}
void	Brain::newIdea(std::string idea, unsigned int index)
{
	if (index >= 100)
		std::cout << "Brain overload x_x" << std::endl;
	else
		this->_ideas[index] = idea;
}

void	Brain::getIdea()
{
	for (unsigned int i = 0; i < this->_idx; i++)
		std::cout << this->_ideas[i] << std::endl;
}

std::string &Brain::getIdea(unsigned int index)
{
	std::string	empty = "";

	if (index >= 100)
	{
		std::cout << "I dont think that far..." << std::endl;
		return (this->_ideas[99]);
	}
	return (this->_ideas[index]);
}

void	Brain::popIdea()
{
	this->_ideas[this->_idx--] = "";
}

void	Brain::popIdea(unsigned int index)
{
	this->_ideas[index] = "";
}
