/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:52:20 by vviterbo          #+#    #+#             */
/*   Updated: 2025/07/18 14:38:31 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Unparametrized Brain Constuctor Called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = "";
	this->_idx = 0;
}

Brain::Brain(Brain &other)
{
	std::cout << "Brain Copy Constructor Called" << std::endl;
	for (int i = 0; i < other._idx; i++)
		this->_ideas[i] = other._ideas[i];
	this->_idx = other._idx;
}
Brain &Brain::operator=(Brain &operand)
{
	std::cout << "Brain Assignment operator Called" << std::endl;
	for (int i = 0; i < operand._idx; i++)
		this->_ideas[i] = operand._ideas[i];
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
void	Brain::newIdea(std::string idea, int index)
{
	this->_ideas[index] = idea;
}

std::string &Brain::getIdea()
{
	return (this->_ideas[this->_idx]);
}

std::string &Brain::getIdea(int index)
{
	return (this->_ideas[index]);
}

void	Brain::popIdea()
{
	this->_ideas[this->_idx--] = "";
}

void	Brain::popIdea(int index)
{
	this->_ideas[index] = "";
}
