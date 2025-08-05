/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Floor.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 15:26:04 by victorviter       #+#    #+#             */
/*   Updated: 2025/08/05 15:16:59 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Floor.hpp"

Floor::Floor()
{
	for (unsigned int i = 0; i < this->_mat_size; i++)
		this->_materias[i] = NULL;
	this->_mat_idx = 0;
}

Floor::Floor(Floor &other)
{
	for (unsigned int i = 0; i < this->_mat_size; i++)
	{
		if (other._materias[i])
			this->_materias[i] = other._materias[i]->clone();
		else
			this->_materias[i] = NULL;
	}
	this->_mat_idx = other._mat_idx;
}

Floor Floor::operator=(Floor &other)
{
	std::cout << "Floor assignment operator called" << std::endl;
	for (unsigned int i = 0; i < this->_mat_size; i++)
	{
		if (this->_materias[i])
		{
			delete this->_materias[i];
			this->_materias[i] = NULL;
		}
	}
	for (unsigned int i = 0; i < this->_mat_size; i++)
	{
		if (other._materias[i])
			this->_materias[i] = other._materias[i]->clone();
		else
			this->_materias[i] = NULL;
	}
	this->_mat_idx = other._mat_idx;
	return (*this);
}

Floor::~Floor()
{
	std::cout << "Floor Destructor Called" << std::endl;
	for (unsigned int i = 0; i < this->_mat_size; i++)
	{
		if (this->_materias[i])
		{
			delete this->_materias[i];
			this->_materias[i] = NULL;
		}
	}
}
		
void	Floor::dropFloor(AMateria *m)
{
	if (this->_materias[this->_mat_idx])
		delete this->_materias[this->_mat_idx];
	this->_materias[this->_mat_idx] = m;
	this->_mat_idx = (this->_mat_idx + 1) % this->_mat_size;
}

void	Floor::mopFloor()
{
	for (unsigned int i = 0; i < this->_mat_size; i++)
	{
		if (this->_materias[i])
		{
			delete this->_materias[i];
			this->_materias[i] = NULL;
		}
	}
}
